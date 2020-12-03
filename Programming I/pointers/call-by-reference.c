#include <stdio.h>

int yerDegistir(int *a, int *b)
{
    int gecici = *a;
    *a = *b;
    *b = gecici;
}

int main()
{
    int x = 16, y = 62;
    printf("x: %d  y:%d\n", x, y);
    yerDegistir(&x, &y);
    printf("x: %d  y:%d", x, y);
}
