#include <stdio.h>

int pw(int sayi, int us)
{
    int sonuc = 1;
    for (int i = 0; i < us; i++)
    {
        sonuc = sayi * sonuc;
    }
    return sonuc;
}

int armstrong(int *ptr)
{
    int basamak = 0, temp, toplam, kalan;

    temp = *ptr;
    while (temp > 0)
    {
        temp = temp / 10;
        basamak++;
    }

    int sayi = *ptr;
    while (sayi > 0)
    {
        kalan = sayi % 10;
        toplam = toplam + pw(kalan, basamak);
        sayi = sayi / 10;
    }
    if (toplam == *ptr)
        return 1;
    else
        return 0;
}

int main()
{
    int *ptr, sayi;
    printf("Bir Sayi Giriniz: ");
    scanf("%d", &sayi);
    ptr = &sayi;
    if (armstrong(ptr))
    {
        printf("%d Sayisi armstrong bir sayidir.", sayi);
    }
    else
    {
        printf("%d sayisi armstrong bir sayi degildir.", sayi);
    }
}