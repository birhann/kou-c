#include <stdio.h>
void main()
{
    int sayi1, sayi2, sonuc, secim;
    printf("\n 1. Toplama için 1'e basın");
    printf("\n 2. Çıkarma için 2'ye basın");
    printf("\n\n Seçiminiz? ");
    scanf("%d", &secim);
    switch (secim)
    {
    case 1:
        printf("1'e basıldı\n");
        scanf("%d%d", &sayi1, &sayi2);
        sonuc = sayi1 + sayi2;
        printf("%d", sonuc);
        break;
    case 2:
        printf("2'ye bsaıldı\n");
        scanf("%d%d", &sayi1, &sayi2);
        sonuc = sayi1 - sayi2;
        printf("%d", sonuc);
        break;
    default:
        printf("Yanlış tuşa bastınız");
    }
}