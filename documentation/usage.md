# Usage

## Using PigMath

PigMath is defined in a single header file located at `includes/pigmath.h`.
Simply include this file in your project and reference it using

`#include "(path)/pigmath.h"`

At the moment, there are no prewritten wrappers for other languages, so this
library is restricted to the C family.

## Function usage

This section is solely dedicated to the usage of the functions in PigMath. If
you would like to learn more about implementation, please visit the
[implementation docs](implementation.md).

### `pig_sqrt(double value)`

`pig_sqrt()` takes a single argument `value`. If the given `value` is negative,
the function will return `-1`.
