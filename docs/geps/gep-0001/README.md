# GEP 1 - Builder Pattern For JSON Generation

**DRAFT**

Instead of recursive free functions passing around references to nlohmann JSON tree nodes and a `JsonOptions` object, the functions should take a unified parameter representing the json tree being built and the state applied to building and serializing it: a new `JsonBuilder` class.
It can hide the building of an intermediate `nlohmann` tree before serializing it or do direct writes to a file stream, and would encompass the current `JsonOptions` class and the `JsonWriter` currently used to commit an in-memory JSON tree to storage.

This would take the call made per struct member or argument list element from the following example to the rewrite below it:

```cpp
// Current struct member conversion:
FieldToJson(jdata["DepthBias"], decoded_value.DepthBias, options);

// Equivalent with the builder:
Convert(json_builder, "DepthBias", decoded_value.DepthBias); 
```
We still need to generate Convert functions for Structs to do the recursive tree walk across sub-objects and pointers to linked objects.
We can also define them for base types and generate them  Enums, Flags and so on so that codegen for the consumer and struct Converts is as simple and regular as possible apart from for special cases like bools in `uint32_t`s, `HRESULT`s etc. 

Sketch of JsonBuilder Interface:
```cpp
class JsonBuilder
{
  public:

  void BeginObject(std::string_view name);
    // Functions which assign a value to a name within the current object.
    // In debug builds they assert that the name is not already in use.
    void Add(std::string_view name, std::string_view value);
    void Add(std::string_view name, int32_t value);
    void Add(std::string_view name, uint32_t value);
    void Add(std::string_view name, int64_t value);
    void Add(std::string_view name, uint64_t value);
    void Add(std::string_view name, double value);
    void Add(std::string_view name, bool value);
    void Add(std::string_view name, nullptr_t value);
    /// Either write the binary data to a file, and put the filename in the tree or
    /// put the tag format::kValBinary in the tree to indicate it has been omitted,
    /// or include the data in the tree as a base64 string depending on internal
    /// JsonOptions state.
    void RepresentBinaryFile(std::string_view       name,
                             const std::string_view filename_base,
                             const uint64_t         data_size,
                             const uint8_t* const   data);
  void EndObject();

  void BeginArray();
    // Functions which append a value to the back of the current array.
    // In debug builds they assert that the current object is an array.
    // At the root level, they set the root object, creating a very
    // simple JSON tree with only one node.
    void Add(std::string_view value);
    void Add(int32_t value);
    void Add(uint32_t value);
    void Add(int64_t value);
    void Add(uint64_t value);
    void Add(double value);
    void Add(bool value);
    void Add(nullptr_t value);
  void EndArray();

  private:

  JsonWriter& writer_;
  JsonOptions options_;
  /// Top of this stack is the current object or array being written.
  /// BeginObject() and BeginArray() push a new object or array onto the stack.
  /// EndObject() and EndArray() pop the current object or array off the stack.
  std::stack<std::vector<nlohmann::ordered_json*>> json_stack_;
  /// @brief  The root of the JSON document being written.
  /// This whole tree is serialised to the output file when building is complete.
  /// json_stack_ is initialised with a pointer to this root object.
  nlohmann::ordered_json& json_root_;
};
```

The use of nlhohmann is completely hidden. A more efficient approach writing directly
to the underlying file without building a tree first could transparently replace it
without affecting callers.

The JSON Builder class would also own both the writer which dumps binaries and the options state which controls whether they should be dumped and so can transparently dump them or inline them or drop them according to that state while the caller can just send the data in and not worry about where it goes.
This is a large improvement over the current situation in which function parameters are easily dumped but struct members are not because the `FieldToJson` functions which convert them have no access to the JSON writer in use.

## Issues

### Need to Generate two Versions of Every Convert?
* One to add a named field to an object.
* One to append to the end of an array.
#### Solution 1
Don't have separate `Add` functions without names for array appending.
The named `Add`s can ignore the names if an array is top of the JSON stack and use the names if an object is
(they can debug assert the name is empty if an array is).

Put the name last so it can be defaulted:
```cpp
void Convert(JsonBuilder& builder, ValeType value, std::string_view name = ""); 
```
