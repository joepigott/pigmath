# Usage

## Using PigMath

PigMath is defined in a single header file located at `includes/pigmath.h`. Simply include this file in your project and reference it using

`#include "(path)/pigmath.h"`

At the moment, there are no prewritten wrappers for other languages, so this library is restricted to the C family.

## Function usage

This section is solely dedicated to the usage of the functions in PigMath. If you would like to learn more about implementation, please visit the [implementation docs](implementation.md).

### `pig_sqrt(double value)`

returns `double`

`pig_sqrt()` takes a single argument `value` and returns the computed square root as a `double`. If the given `value` is negative, the function will return `-1`.

### `pig_sqrt_i(double value, uint8_t iterations)`

returns `double`

`pig_sqrt_i()` takes two arguments `value` and `iterations` and returns the computed square root as a `double`. If the given `value` is negative, the function will return `-1`.

This function is an extension of `pig_sqrt()` and allows the user to specify how many iterations to compute.

### `pig_floor(double value)`

returns `int`

`pig_floor()` takes a single argument `value` and returns the computed floor as an `int`.

If floating point accuracy is needed (for some reason), it's the responsibility of the user to cast the returned value.

### `pig_ceil(double value)`

returns `int`

`pig_ceil()` takes a single argument `value` and returns the computed ceiling as an `int`.

If floating point accuracy is needed (for some reason), it's the responsibility of the user to cast the returned value.
