#include <stdio.h>
int main()
{
    int sayac, carpim;
    int sayi;
    printf("sayi giriniz: ");
    scanf("%d", &sayi);
    sayac = 1;
    carpim = 1;
    while (sayac <= sayi)
    {
        carpim = carpim * sayac;
        sayac = sayac + 1;
    }
    printf("%d", carpim);
    return 0;
}