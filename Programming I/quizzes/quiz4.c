#include <stdio.h>
#include <stdlib.h>

int main()
{
    int iDeger, sDeger, asalMi;
    printf("Ilk deger:");
    scanf("%d", &iDeger);

    printf("Son deger:");
    scanf("%d", &sDeger);

    printf("Asal Sayilar %d ile %d arasindaki:\n", iDeger, sDeger);
    if (iDeger < 2)
        iDeger = 2;
    for (iDeger; iDeger <= sDeger; iDeger++)
    {
        asalMi = 1;
        for (int i = 2; i < iDeger; i++)
        {
            if (iDeger % i == 0)
            {
                asalMi = 0;
                break;
            }
        }

        if (asalMi)
            printf("%d, ", iDeger);
    }
    return 0;
}
