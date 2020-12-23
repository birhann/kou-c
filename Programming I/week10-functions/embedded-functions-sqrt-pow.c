#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <math.h>

int main()
{
    printf("%f\n", pow(2, 3));

    float sayi;
    float sonuc;
    printf("Sayi Giriniz : ");
    scanf("%f", &sayi);
    sonuc = sqrt(sayi);
    printf("sqrt(%f) : %f\n", sayi, sonuc);
    sonuc = pow(sayi, 2);
    printf("pow(%f,2) : %f\n", sayi, sonuc);
    sonuc = pow(2, sayi);
    printf("pow(2,%f) : %f\n", sayi, sonuc);
    return 0;
}