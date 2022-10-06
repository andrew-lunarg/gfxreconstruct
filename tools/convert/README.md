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
binary captures directly into `stdin` of the next tool in the chain, without
having to save the intermediate JSON files to storage.
Because each JSON object is on its own line, line oriented tools such as
grep, sed, head, and split can be applied ahead of JSON-aware ones which
are heavier-weight to reduce their workload on large captures.

## JSON Structure

The tool's output is an ordered list of strings, one per line, each line a valid JSON document (JSON Lines).
Every line is a separate JSON object, which means the output as a whole is not valid JSON, although it can be trivially transformed into a valid JSON array by appending a comma to each line and topping and tailing with square brackets.

The file begins with a header object containing some metadata, followed by a
series of objects representing the sequence of Vulkan calls stored in the
capture. Here are some examples:


### Top Level Structure

A tool can work out what kind of JSON document each line contains.


### Header Objects

### vkFunc Objects

### Function Arguments
Names and values.
* handles are numbers...

### Structures

### Arrays 

### Processing Examples

#### To Add
* Output all submits and all presents.
* Cut at first present.

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

## TO Mention Above
* include the link
* include a sample of a few lines
* note that it can be made pretty through jq and through the yq pipeline.

 

## Useful Scrap

Our output is an ordered list of strings, one per line, each line a valid JSON document (JSON Lines).
Every line is a separate JSON object, which means.