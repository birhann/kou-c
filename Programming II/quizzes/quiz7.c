#include <stdio.h>
#include <string.h>

struct dtarih
{
    int gun, ay, yil;
};
struct sahis_bilgileri
{
    char isim[50];
    struct dtarih tarih;
};
int say;
void buyukbul(struct sahis_bilgileri kisi[])
{
    for (int i = 0; i < say - 1; i++)
    {
        for (int j = 0; j < say - i - 1; j++)
        {
            if (kisi[j].tarih.yil > kisi[j + 1].tarih.yil)
            {
                struct sahis_bilgileri temp;
                temp = kisi[j];
                kisi[j] = kisi[j + 1];
                kisi[j + 1] = temp;
            }
        }
    }
}
int main()
{
    printf("Kisi sayisini giriniz: ");
    scanf("%d", &say);
    struct sahis_bilgileri kisi[say];
    printf("\nBilgileri giriniz:\n");
    for (int i = 0; i < say; i++)
    {
        printf("Adi : ");
        scanf("%s", kisi[i].isim);

        printf("Dogdugu gun : ");
        scanf("%d", &kisi[i].tarih.gun);

        printf("Dogdugu ay : ");
        scanf("%d", &kisi[i].tarih.ay);

        printf("Dogdugu yil : ");
        scanf("%d", &kisi[i].tarih.yil);
    }
    printf("\n\nKayitlar Yazdiriliyor...\n\n");
    for (int i = 0; i < say; i++)
    {
        printf("Ad: %s ", kisi[i].isim);
        printf("\nDogum Tarihi: %d.%d.%d\n\n", kisi[i].tarih.gun, kisi[i].tarih.ay, kisi[i].tarih.yil);
    }
    printf("\n\n");
    buyukbul(kisi);
    printf("Yasi en buyuk kisi: %s %d %d %d", kisi[0].isim, kisi[0].tarih.gun, kisi[0].tarih.ay, kisi[0].tarih.yil);
}