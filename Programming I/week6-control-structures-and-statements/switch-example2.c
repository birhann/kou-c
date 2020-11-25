#include <stdio.h>
int main()
{
    char islem;
    float sayi1, sayi2;
    printf("Yapilacak islemi giriniz (+, -, *, /): ");
    scanf("%c", &islem);
    printf("Iki sayi giriniz: ");
    scanf("%f %f", &sayi1, &sayi2);
    switch (islem)
    {
    case '+':
        printf("%f + %f = %f", sayi1, sayi2, sayi1 + sayi2);
        break;
    case '-':
        printf("%f - %f = %f", sayi1, sayi2, sayi1 - sayi2);
        break;
    case '*':
        printf("%f * %f = %f", sayi1, sayi2, sayi1 * sayi2);
        break;
    case '/':
        printf("%f / %f = %f", sayi1, sayi2, sayi1 / sayi2);
        break;
    default:
        printf("Hata! Yanlış saçim");
    }
    return 0;
}