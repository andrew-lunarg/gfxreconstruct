# Convert

The `gfxrecon-convert` tool converts a capture file into a series of JSON
documents, one per line following the
[JSON Lines standard](https://jsonlines.org/).
The text output is written by default to a .txt file in the directory of the specified GFXReconstruct capture file. Use `--output` to override the default filename for the output.


```text
gfxrecon-convert - A tool to convert GFXReconstruct capture files to text.

Usage:
  gfxrecon-convert.exe [-h | --help] [--version] [--output filename] <file>

Required arguments:
  <file>                Path to the GFXReconstruct capture file to be converted
                        to text.

Optional arguments:
  -h                    Print usage information and exit (same as --help).
  --version             Print version information and exit.
  --output filename     'stdout' or a path to a file to write JSON output
                        to. Default is the input filepath with "gfxr" replaced
                        by "txt".
```


The JSON document on each line is designed to be parsed by tools such as simple
Python scripts as well as being useful for inspecting by eye after pretty
printing, for example by piping through a command-line tool such as
[`jq`](https://stedolan.github.io/jq/).
For these post-processing use cases, `gfxrecon-convert` can be used to stream
from binary captures directly, without
having to save the intermediate JSON files to storage.
Because each JSON object is on its own line, line oriented tools such as
grep, sed, head, and split can be applied ahead of JSON-aware ones which
are heavier-weight to reduce their workload on large captures.


## JSON Structure

The tool's output is an ordered list of strings, one per line, each line a valid
JSON document (JSON Lines). Below are the first few lines from a capture of vkcube, truncated to 200 columns.

```json
{"header":{"source-path":"vkcube.f1.gfxr","json-version":"0.8.0","gfxrecon-version":"0.9.15-dev","vulkan-version":"1.3.224"}}
{"index":0,"vkFunc":{"name":"vkCreateInstance","return":"VK_SUCCESS","args":{"pCreateInfo":{"sType":"VK_STRUCTURE_TYPE_INSTANCE_CREATE_INFO","pNext":null,"flags":1,"pApplicationInfo":{"sType":"VK_S...
{"index":1,"vkFunc":{"name":"vkEnumeratePhysicalDevices","return":"VK_SUCCESS","args":{"instance":1,"pPhysicalDeviceCount":3,"pPhysicalDevices":null}}}
{"index":2,"vkFunc":{"name":"vkEnumeratePhysicalDevices","return":"VK_SUCCESS","args":{"instance":1,"pPhysicalDeviceCount":3,"pPhysicalDevices":[2,3,4]}}}
{"index":3,"vkFunc":{"name":"vkGetPhysicalDeviceProperties","args":{"physicalDevice":2,"pProperties":{"apiVersion":4206786,"driverVersion":2140487808,"vendorID":4318,"deviceID":9568,"deviceType":"V...
{"index":4,"vkFunc":{"name":"vkGetPhysicalDeviceProperties","args":{"physicalDevice":3,"pProperties":{"apiVersion":4206796,"driverVersion":92274693,"vendorID":32902,"deviceID":18086,"deviceType":"V...
{"index":5,"vkFunc":{"name":"vkGetPhysicalDeviceProperties","args":{"physicalDevice":4,"pProperties":{"apiVersion":4202700,"driverVersion":1,"vendorID":65541,"deviceID":0,"deviceType":"VK_PHYSICAL_...
{"index":6,"vkFunc":{"name":"vkEnumeratePhysicalDevices","return":"VK_SUCCESS","args":{"instance":1,"pPhysicalDeviceCount":3,"pPhysicalDevices":null}}}
{"index":7,"vkFunc":{"name":"vkEnumeratePhysicalDevices","return":"VK_SUCCESS","args":{"instance":1,"pPhysicalDeviceCount":3,"pPhysicalDevices":[2,3,4]}}}

```

The file begins with a header object containing some metadata, followed by a
series of objects representing the sequence of Vulkan calls stored in the
capture. Below are some examples generated from the same capture of `vkcube`
listed above but pretty-printed with
`gfxrecon-convert --output stdout vkcube.f1.gfxr | jq`.

The first line is a header identifying the source capture file,
the version of the file format,
the version of GFXReconstruct used to generate the file,
and the version of the Vulkan headers used to build that GFXReconstruct version.
This header may be expanded in the future but these fields will remain.

```json
{
  "header": {
    "source-path": "vkcube.f1.gfxr",
    "json-version": "0.8.0",
    "gfxrecon-version": "0.9.15-dev",
    "vulkan-version": "1.3.224"
  }
}
```

The first Vulkan function of the capture follows the header.
Of note are the fields `"vkFunc"` which identifies the line as Vulkan function
call, and `"index"` which is a monotonically increasing positive integer
representing the position of the call in the sequence recorded in the capture.

```json
{
  "index": 0,
  "vkFunc": {
    "name": "vkCreateInstance",
    "return": "VK_SUCCESS",
    "args": {
      "pCreateInfo": {
        "sType": "VK_STRUCTURE_TYPE_INSTANCE_CREATE_INFO",
        "pNext": null,
        "flags": 1,
        "pApplicationInfo": {
          "sType": "VK_STRUCTURE_TYPE_APPLICATION_INFO",
          "pNext": null,
          "pApplicationName": "vkcube",
          "applicationVersion": 0,
          "pEngineName": "vkcube",
          "engineVersion": 0,
          "apiVersion": 4194304
        },
        "enabledLayerCount": 0,
        "ppEnabledLayerNames": null,
        "enabledExtensionCount": 4,
        "ppEnabledExtensionNames": [
          "VK_KHR_get_physical_device_properties2",
          "VK_KHR_surface",
          "VK_KHR_xcb_surface",
          "VK_KHR_portability_enumeration"
        ]
      },
      "pAllocator": null,
      "pInstance": 1
    }
  }
}

```

### Type Mapping of Values

Values in the file such as function arguments, function return values, and
structure members are mapped to the following JSON representations.

#### Scalar Numeric Types

`int`, `float`, `double`, and related types and aliases are represented with
the JSON number type.
The output is additionally constrained to match the underlying C type, so a
value like `1.1` will never be output where the C type is an integer, despite
that being a valid JSON number.

#### Handles

Handles in capture files are represented by integers.
I.e., the _ith_ handle allocation will be stored as the integer _i_, counting
from one.
Convert shows those integers as the JSON number type, constrained to
be positive integers.

#### Strings

`const char*` strings from the C-API are represented as JSON strings.

#### Enumerations

Single enumerator values (as opposed to the result of ORing together several
flags defined by an enumeration) such as `VkResult`'s `VK_SUCCESS` and
`VK_INCOMPLETE` are represented by JSON strings holding the exact character
sequence used in the C-API enumerator, so `"VK_SUCCESS"` and `"VK_INCOMPLETE"`
in the preceding examples.

#### Masks / Flag Sets

Theses are currently output as JSON numbers with their bit patterns
interpreted as an unsigned decimal integer.
Tools written now should test whether masks are represented as JSON numbers and
fail gracefully if not as some changes are anticipated before version `1.0.0` of
the JSON Lines file format.

#### Void Pointers

Pointers to void and pointers to pointers to void are represented as strings
with the hexadecimal integer value of the address in the capture file encoded
within them. For example `"0x55f5aa64d2f0"`.

#### Structures

Structures are represented as JSON objects.
The names of their fields become element keys and their values are translated
as described for any value in this section and the resulting JSON text is used
as element values.

#### Pointers to Structures

Where a pointer is to a single struct, as is the case for `pCreateInfo` and
`pNext` struct pointers, the representation of the pointed-to type is nested
within the JSON file at that point.
The output does not preserve the identity of pointed-to structs.
If the same struct with the same values was pointed-to a thousand times by an
application during capture, the JSON representation will show its full,
transitively expanded structure at each of those points of use.
There is no mechanism to refer back to previously defined sub-trees of structs.

#### Arrays 

Arrays, whether embedded directly in a struct, or pointed-to, are represented as
a JSON array type.
Each element of an array is represented by converting its type according to the
appropriate.
When a variable length array is represented in the C-API by adjacent
`{count, pointer}` arguments or members, the JSON representation retains
the explicit `count` even though that is duplicated in the length of the
JSON array which inherits the name of the pointer in the pair.

### Top Level Structure

All current and future lines have a top-level JSON object with a key that
identifies the type of the line and a value that is a nested object holding
the data for the line, possibly in further nested structure.
The currently-defined two keys are `"header"` and `"vkFunc"`.
A line can hold _either_ a nested `"header"` or a nested `"vkFunc"`,
but not _both_.
A tool can work out what kind of JSON document each line contains by checking
for the presence of the keys in the top-level object.
In pseudocode that could look something like this:

```
for line in input_lines:
  doc = json.parse(line)
  if doc.contains("vkFunc"):
      process Vulkan API Call document
  else if doc.contains("header"):
      process header document
  else:
      warning: unknown JSON line
```

### Header Objects

All values of a header are strings.

[ToDo]

### vkFunc Objects

Vulkan function objects contain `"index"` at the top level which is a
JSON number representing the position of the call in the sequence recorded in
the capture and a nested object under the key `"vkFunc"` which contains the data captured from a Vulkan call.

```json
{
  "index": 0,
  "vkFunc": {
    "name": "vkCreateInstance",
    "return": "VK_SUCCESS",
    "args": {
      ... details omitted ...
    }
  }
}
```

Within the nested object are several elements.

* `"name"`: A JSON string that identifies which function was called
  with the name defined in the C-API.
* `"return"`: An optional element whose value represents what was returned from Vulkan at capture time translated to JSON according to the C-API type as detailed above in section _Type Mapping of Values_.
* `"args"`: object. A nested object with a set of key:value pairs, one for each
  argument passed to the function.
  The arguments are output in the same order as defined by the C-API although
  JSON tools may reorder them arbitrarily after further processing.
  The value of each element is translated from the corresponding argument in the
  capture file as detailed above in section _Type Mapping of Values_.

#### Function Arguments

Arguments are delivered in a nested JSON object.
The key for each field of the object is the name it has in the Vulkan C-API.
The value of a field could be any JSON type, constrained to be appropriate to
the C argument's type as detailed above in section _Type Mapping of Values_.

In this example of `"vkUnmapMemory"`, the values are the integer mappings of
handles as stored in the capture file.

```json
    "args": {
      "device": 6,
      "memory": 27
    }
```

A more complex example is illustrated by `vkCmdSetScissor`.
Here we see the pointer to a variable number of entries from the C-API,
`pScissors`, represented as a nested JSON array.
Each element in that array is a JSON object for the corresponding C struct.

```json
"args": {
    "commandBuffer": 43,
    "firstScissor": 0,
    "scissorCount": 1,
    "pScissors": [
      {
        "offset": {
          "x": 0,
          "y": 0
        },
        "extent": {
          "width": 256,
          "height": 192
        }
      }
    ]
  }
```


### Processing Examples

#### To Add
* Output all submits and all presents.
* Cut at first present.

### JSON Lines to JSON

Because every line is a separate JSON object, the output as a whole is not
valid JSON.
It can, however, be trivially transformed into a valid JSON array by
appending a comma to each line and topping and tailing with square brackets.


### Caveats and Gotchas

#### 64 Bit Integers
64 bit integers in the capture are output as the JSON number type.
Parsers which strictly adhere to the standard should have no problem with that,
including some fast native parsers like
[RapidJSON](https://github.com/Tencent/rapidjson),
but some may choose to represent all numbers as 64 bit double precision floating
point. This representation will not be able to represent all possible 64 bit
integers.
Javascript JSON parsers have been known to do that, as can be confirmed with the
following Javascript snippet which fails to print `2^60` correctly.

```javascript
const json = '{"result":true, "count":1152921504606846976}';
const obj = JSON.parse(json);
console.log(obj.count);
// Expected output: 1152921504606846976
// Actual output:   1152921504606847000
```

#### Omitted Values

Captures don't store output structs or values for calls that failed, so some
structs will be `null` (Python `None`) even though the app passed in something.


## Recipes

Once the JSON has been emitted, the the next step is to do something with it.
Below are some example usages of the output, tested in Bash.
These are presented using a file called `vkcube.f1.gfxr`, a capture of the first
frame of `vkcube`, which you can easily reproduce locally using the
GFXReconstruct capture layer.

### List of Functions Used in a Capture

One useful thing to do with a capture is to generate a summary of the Vulkan
functions used within it.
Given a large set of diverse captures, generating this summary once for each
capture ahead of time allows later recursive greps to find all the files that
use a particular function rapidly.
This would be useful when reproducing a bug somewhere in the graphics stack
for which that function was implicated.

```
gfxrecon-convert --output stdout vkcube.f1.gfxr | sed "s/.*\"name\":\"vk\([^\"]*\).*/vk\1/" | sort | uniq | egrep -v "{\"header\""
```
Output:
```
vkAcquireNextImageKHR
vkAllocateCommandBuffers
vkAllocateDescriptorSets
vkAllocateMemory
vkBeginCommandBuffer
vkBindBufferMemory
vkBindImageMemory
...
vkUnmapMemory
vkUpdateDescriptorSets
vkWaitForFences
```

Splitting the `sed` command in two should execute several times faster:

```
gfxrecon-convert --output stdout vkcube.f1.gfxr | sed "s/.*\"name\":\"vk/vk/" | sed "s/\",.*//" | sort | uniq | egrep -v "{\"header\""
```

For large captures, screening out runs of duplicate function names before the sort can be a little faster still:

```
gfxrecon-convert --output stdout vkcube.f1.gfxr | sed "s/.*\"name\":\"vk/vk/" | sed "s/\",.*//" | uniq | sort | uniq | egrep -v "{\"header\""
```

### All Unique Argument Names

This pipeline summarizes the names of function arguments and struct member names
transitively included from arguments into a json array on each line.
These might be useful to keep beside a set of multi-gigabyte binary traces to
allow fast grepping when looking for traces that use particular named arguments.

```
gfxrecon-convert --output stdout vkcube.f1.gfxr | jq  -c "[.. | objects | keys[]] | unique" | sed "s/\"args\",//" | sed "s/\"index\",//" | sed "s/\"name\",//" | sed "s/\"return\",//" | sed "s/,\"vkFunc\"//" | sort | uniq
```

Output:

```json
...
["alignment","buffer","device","memoryTypeBits","pMemoryRequirements","size"]
["alignment","device","image","memoryTypeBits","pMemoryRequirements","size"]
["allocationSize","device","memoryTypeIndex","pAllocateInfo","pAllocator","pMemory","pNext","sType"]
...
```


## FAQ
* Where is the type information? [ToDo]
* Can I rely on the ordering of `args` object `key:value` pairs?
  - Convert will output fields in the same order as they appear in the parameter
    lists of the corresponding C API.
    While that order is not guaranteed to be preserved by all parsers, many do
    preserve it by default or can be configured to do so.
  - jq snippet to transform to an array. [ToDo]
  - ordered map in python parser. [ToDo]


## TO Mention Above
* note that it can be made pretty through jq and through the yq pipeline.
* Use of `--unbuffered` for `jq` and `--line-buffered` for `grep`
* When Arrays (and structs) linked by pointers can be null.