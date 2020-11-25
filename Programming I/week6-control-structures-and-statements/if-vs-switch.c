#include <stdio.h>
int main()
{
    int sayi;
    printf("sayi giriniz [1-3]: ");
    scanf("%d", &sayi);
    if (sayi == 1)
        printf("bir\n");
    else if (sayi == 2)
        printf("iki\n");
    else if (sayi == 3)
        printf("uc\n");
    else
        printf("yanlis deger\n");

    int sayi2;
    printf("sayi giriniz[1-3]: ");
    scanf("%d", &sayi2);
    switch (sayi2)
    {
    case 1:
        printf("bir\n");
        break;
    case 2:
        printf("iki\n");
        break;
    case 3:
        printf("uc\n");
        break;
    default:
        printf("yanlis deger\n");
        break;
    }

    return 0;
}