#include "../include/pigmath.h"
#include <stdio.h>

int main() {
    printf("%f\n", pig_sqrt_i(10.0f, 3));
    printf("%f\n", pig_sqrt_i(10.0f, 5));
    printf("%f\n", pig_sqrt(10.0f));

    return 0;
}
