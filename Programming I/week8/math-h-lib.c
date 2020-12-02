#include <stdio.h>
#include <math.h>

int main()
{
    // ceil function
    printf("ceil(%f) : %f\n", 1.4, ceil(1.4));
    printf("ceil(%f) : %f\n\n", 1.8, ceil(1.8));

    // floor  function
    printf("floor(%f) : %f\n", 1.4, floor(1.4));
    printf("floor(%f) : %f\n\n", 1.8, floor(1.8));

    // round  function
    printf("round(%f) : %f\n", 1.4, round(1.4));
    printf("round(%f) : %f\n", 1.5, round(1.5));
    printf("round(%f) : %f\n\n", 1.8, round(1.8));

    // fabs and abs  function
    printf("fabs(%f) : %f\n", -1.3, fabs(-1.3));
    printf("abs(%d) : %f\n", -1, abs(-1));
}