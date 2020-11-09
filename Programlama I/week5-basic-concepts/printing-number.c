#include <stdio.h>
int main()
{
    int sayi;
    printf("Bir sayi giriniz: ");
    scanf("%d", &sayi);

    // printf("sayi: %d\n", sayi);

    sayi = sayi + 1;
    printf("sayi: %d\n", sayi);

    return 0;
}