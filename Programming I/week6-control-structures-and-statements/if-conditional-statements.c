#include "stdio.h"
int main()
{
    int s1;
    printf("Bir integer deger giriniz: ");
    scanf("%d", &s1);
    if (s1 % 2)
    {
        printf("Girilen sayi tek bir sayidir\n");
        printf("Sayinin 3 kati : %d", 3 * s1);
    }
    else
    {
        printf("Girilen sayi cift bir sayidir\n");
        printf("Sayinin 2 kati : %d", 2 * s1);
    }
}