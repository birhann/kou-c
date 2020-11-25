#include <stdio.h>
int main()
{
    int gun;
    printf("Lutfen gun numarasi giriniz:\n ");
    scanf("%d", &gun);
    switch (gun)
    {
    case 1:
        printf("Haftanın 1. günü: Pazartesi");
        break;
    case 2:
        printf("Haftanın 2. günü: Salı");
        break;
    case 3:
        printf("Haftanın 3. günü: Çarşamba");
        break;
    case 4:
        printf("Haftanın 4. günü: Perşembe");
        break;
    case 5:
        printf("Haftanın 5. günü: Cuma");
        break;
    case 6:
        printf("Haftanın 6. günü: Cumartesi");
        break;
    case 7:
        printf("Haftanın 7. günü: Pazar");
        break;
    default:
        printf("Herhangi bir gün girilmemiştir.");
        break;
    }
}