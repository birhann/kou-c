#include <stdio.h>
int main()
{
    int satir, deger = 1, bosluk, i, j;
    printf("Satir sayisi: ");
    scanf("%d", &satir);
    for (i = 0; i < satir; i++)
    {
        for (bosluk = 1; bosluk <= satir - i; bosluk++)
            printf("  ");
        for (j = 0; j <= i; j++)
        {
            if (j == 0 || i == 0)
                deger = 1;
            else
                deger = deger * (i - j + 1) / j;
            printf("%4d", deger);
        }
        printf("\n");
    }
    return 0;
}