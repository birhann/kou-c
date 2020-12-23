#include <stdio.h>
#include <stdlib.h>
void ucgen_ciz(int x)
{
    int i, j;
    for (i = 1; i <= x; i++)
    {
        for (j = 1; j <= i; j++)
        {
            printf("*");
        }
        printf("\n");
    }
}
void ters_ucgen_ciz(int x)
{
    int i, j;
    for (i = 1; i <= x; i++)
    {
        for (j = 1; j <= x - i + 1; j++)
        {
            printf("*");
        }
        printf("\n");
    }
}
int main()
{
    ucgen_ciz(4);
    ters_ucgen_ciz(3);
    return 0;
}
