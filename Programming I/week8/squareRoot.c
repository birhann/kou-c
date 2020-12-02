#include <stdio.h>
#include <math.h>
int main()
{
    int sayi;
    printf("pozitif sayi giriniz: ");
    scanf("%d", &sayi);
    while (sayi < 0)
    {
        printf("yanlis giris yaptiniz\n");
        printf("pozitif sayi giriniz: ");
        scanf("%d", &sayi);
    }
    float karekok = sqrt(sayi);
    printf("sayinin karekoku: %.1lf\n", karekok);
    return 0;
}