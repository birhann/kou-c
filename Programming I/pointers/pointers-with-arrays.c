#include <stdio.h>

int maxBul(int *diziP, int len)
{
    int max = diziP[0]; //yada int max = *diziP;
    for (int i = 0; i < len; i++)
    {
        if (diziP[i] > max)
        {
            max = *(diziP + i); //yada diziP[i]
        }
    }

    return max;
}

int main()
{
    int dizi[5] = {1, 2, 16, 4, 5};
    printf("dizinin ilk indeksinin adresi %d\n", &dizi);
    printf("dizinin ilk indeksinin adresi %d\n\n", &dizi[0]);

    int *pDizi = dizi;
    printf("deger: %d  adres:%u\n", *pDizi, pDizi);
    printf("deger: %d  adres:%u\n", *(pDizi + 1), pDizi + 1);
    printf("deger: %d  adres:%u\n", *(pDizi + 2), pDizi + 2);
    printf("deger: %d  adres:%u\n", *(pDizi + 3), pDizi + 3);
    printf("deger: %d  adres:%u\n\n\n", *(pDizi + 4), pDizi + 4);
    // *pDizi----> pDizi[0] -----> dizi[0]
    // *(pDizi+1)----> pDizi[1]-----> dizi[1]

    printf("dizinin max elemeni:%d", maxBul(pDizi, 5));
    return 0;
}