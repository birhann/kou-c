#include <stdio.h>
int main()
{
    int i, j;
    for (i = 1; i <= 5; i++)
    {
        for (j = 1; j <= 5 - i; j++)
        {
            printf(".");
        }
        for (j = 1; j <= 2 * i - 1; j++)
        {
            printf("x");
        }
        printf("\n");
    }
    return 0;
}
