#include <stdio.h>

int main()
{
    int sayi1, mod;
    printf("Lutfen bir sayi giriniz: ");
    scanf("%d", &sayi1);
    printf("Mod degerini giriniz: ");
    scanf("%d", &mod);

    int sonuc = sayi1 % mod;
    printf("%d sayisinin %d sayisina bolumunden kalan: %d", sayi1, mod, sonuc);
}