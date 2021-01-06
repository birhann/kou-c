#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void YazdirDizi(int dizi[], int diziUzunlugu)
{
    int i;
    for (i = 0; i < diziUzunlugu; i++)
        printf("%d ", dizi[i]);
    printf("\n\n");
}

int main()
{
    int x, i;
    int dizi[10];

    //RASTGELE 10 SAYI
    srand(time(NULL));
    for (i = 0; i < 10; i++)
    {
        x = rand() % 101;
        dizi[i] = x;
    }
    printf("Rastgele Sayilar\n");
    YazdirDizi(dizi, 10);

    //KÜÇÜKTEN BÜYÜĞE
    for (int i = 0; i < 10; i++)
    {
        int gecici = 0;
        for (int j = 0; j < 10; j++)
        {
            if (dizi[i] < dizi[j])
            {
                gecici = dizi[j];
                dizi[j] = dizi[i];
                dizi[i] = gecici;
            }
        }
    }

    printf("Sirali Dizi\n");
    YazdirDizi(dizi, 10);

    //ÖNCE TEK, SONRA ÇİFT SAYILAR
    int yeniDizi[10];
    int tek_sayi_sayisi = 0;
    int cift_sayi_sayisi = 0;
    for (int i = 0; i < 10; i++)
    {
        if (dizi[i] % 2 == 0)
            cift_sayi_sayisi += 1;
        else
            tek_sayi_sayisi += 1;
    }

    int indexSayac = 0;
    for (int i = 0; i < 10; i++)
    {
        if (dizi[i] % 2 != 0)
        {
            yeniDizi[indexSayac] = dizi[i];
            indexSayac += 1;
        }
    }
    for (int i = 0; i < 10; i++)
    {
        if (dizi[i] % 2 == 0)
        {
            yeniDizi[indexSayac] = dizi[i];
            indexSayac += 1;
        }
    }

    printf("Once tek sayilar, sonra cift sayilar sirali dizi\n");
    YazdirDizi(yeniDizi, 10);

    return 0;
}
