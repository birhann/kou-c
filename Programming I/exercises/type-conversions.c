#include <stdio.h>

int main()
{
    // int x = 10;
    // float y = 0.9;
    // printf("%f\n", x / y);
    // printf("%d\n", (int)3.2 * 3);
    // printf("%d\n", (int)(3 / 0.4));

    int x = 10;   // integer x
    char y = 'a'; // character c

    // y implicitly converted to int. ASCII
    // value of 'a' is 97
    x = x + y;

    // x is implicitly converted to float
    float z = x + 1.0;

    printf("x = %d, z = %d", x, (int)z);

    return 0;
}