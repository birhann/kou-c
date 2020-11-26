#include <stdio.h>
#include <stdlib.h>

int main()
{
    int r = 7;
    int e = 23;
    float pi = 3.14;

    double kure_yuzey_alani = 4 * pi * r * r;
    int kupun_yuzey_alani = 6 * e * e;

    printf("Kupun yuzey alani: %d\n", kupun_yuzey_alani);
    printf("Kurenin yuzey alani: %.5lf", kure_yuzey_alani);

    return 0;
}
