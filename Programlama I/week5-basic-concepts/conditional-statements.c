#include <stdio.h>

int main()
{
    // int not ;
    // printf("Lutfen notunuzu giriniz: ");
    // scanf("%d", &not );
    // if (not < 65)
    //     printf("Dersten kaldiniz...");
    // else
    //     printf("Dersi gectiniz, tebrikler...");

    printf("\nHARF NOTU HESAPLAMA ISLEMI - VIZE(Yuzde 40) - FINAL(Yuzde 60)\n");
    int vize, final;
    printf("\nVize puaninizi giriniz: ");
    scanf("%d", &vize);
    printf("\nFinal puaninizi giriniz: ");
    scanf("%d", &final);
    float puan = vize * 0.4 + final * 0.6;

    if (puan >= 90)
        printf("Harf notunuz AA");
    else if (puan < 90 && puan >= 80)
    {
        printf("Harf notunuz BB");
    }
    else if (puan < 80 && puan > 50)
    {
        printf("Harf notunuz CC");
    }
    else
        printf("Kaldiniz, gecmis olsun");
    return 0;
}