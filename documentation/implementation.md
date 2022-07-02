# Implementation

### Square Roots

`pig_sqrt(double value)` and `pig_sqrt_i(double value, uint8_t iterations)`

The square root functions in PigMath are implemented using Newton's method. In order to fully understand this, some basic calculus is required.

Newton's method is a fairly quick way to compute the roots of *any* function, and provides a very simple way to implement square root functions. An initial guess x<sub>2</sub> is required (at this point in time, it is `1`, but this may be optimized in the future). The next guess x<sub>2</sub> is computed by subtracting the function over its derivative from x<sub>1</sub>. In general, x<sub>n+1</sub> = x<sub>n</sub> - f(x)/f'(x). This process is repeated over a number of iterations (can be specified by user in `pig_sqrt_i()`).

This process essentially finds the root of the tangent line of x<sup>2</sup> at its current iteration. One of these computations can be visualized:

![Newton's Method Visual](images/newtons_method.png)