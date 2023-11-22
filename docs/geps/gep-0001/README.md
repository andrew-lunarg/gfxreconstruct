# GEP 1 - Builder Pattern For JSON Generation

Instead of recursive free functions passing around references to nlohmann JSON tree nodes and a `JsonOptions` object, the functions should take a single parameter other than the item that they are converting: a new `JsonBuilder` class.
It can hide the building of an intermediate `nlohmann` tree before serializing it or do direct writes to a file stream, and would encompass the current `JsonOptions` class and the `JsonWriter` currently used to commit an in-memory JSON tree to storage.

This would take the call made per struct member or argument list element from the following example to the rewrite below it:

```cpp
// Current struct member conversion:
FieldToJson(jdata["DepthBias"], decoded_value.DepthBias, options);

// Equivalent with the builder:
json_builder.add("DepthBias", decoded_value.DepthBias);

```

The JSON Builder class would also own both the writer which dumps binaries and the options state which controls whether they should be dumped and so can transparently dump them or inline them or drop them according to that state while the caller can just send the data in and not worry about where it goes.
This is a large improvement over the current situation in which function parameters are easily dumped but struct members are not because the `FieldToJson` functions which convert them have no access to the JSON writer in use.
