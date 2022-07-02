/*

PigMath is a lightweight, header-only math library that only contains what's
absolutely necessary such as square root functions, trig functions, etc.

I got so sick of having to use bloated math libraries of which I only used a few
functions, so I decided to write my own. It's good practice anyway.

USE: the dot operator must be used, as namespaces are not native to C. For
     example:

     sqrt: `pig.sqrt(x)`

*/

#ifndef PIGMATH_H
#define PIGMATH_H

typedef unsigned char      uint8_t;
typedef unsigned short     uint16_t;
typedef unsigned int       uint32_t;
typedef unsigned long long uint64_t;

// --- Function Declarations/Definitions ---

// Uses Newton's method of computing the roots of functions.
double pig_sqrt(double value) {
    if (value < 1) return -1;
    if (value == 0 || value == 1) return value;

    // Initial Estimate.
    double x = 1;

    for (uint8_t i = 0; i < 10; i++) {
        // Root is computed by subtracting the current guess with the function
        // over its derivative. This quickly approaches the root.
        x -= ((x * x) - value) / (2 * x);
    }

    return x;
}

// Allows for custom number of iterations. 10 is usually more than enough for
// the relatively low floating point accuracy of the function, but I'll still
// leave the option.
double pig_sqrt_i(double value, uint8_t iterations) {
    if (value < 1) return -1;
    if (value == 0 || value == 1) return value;

    // Initial Estimate.
    double x = 1;

    for (uint8_t i = 0; i < iterations; i++) {
        //
        x -= ((x * x) - value) / (2 * x);
    }

    return x;
}

// For floor and ceil functions, if a floating point number is required it is
// on the user to cast the return value.

int pig_floor(double value) {
    return (int)value;
}

int pig_ceil(double value) {
    return (int)(value + 1);
}

// -----------------------------------------

#endif // PIGMATH_H
