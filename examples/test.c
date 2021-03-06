#include "../include/pigmath.h"
#include <stdio.h>

int main() {
    printf("pig_sqrt(10): %f\n", pig_sqrt(10));
    printf("pig_sqrt(0.5f): %f\n", pig_sqrt(0.5f));
    printf("pig_sqrt(-10): %f\n", pig_sqrt(-10));
    printf("pig_floor(8.75f): %d\n", pig_floor(8.75f));
    printf("pig_ceil(8.75f): %d\n", pig_ceil(8.75f));

    return 0;
}
