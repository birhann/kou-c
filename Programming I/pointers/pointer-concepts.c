#include <stdio.h>

int main()
{
    int z = 25;
    printf("%d degerli z degiskeninin adres bilgisi %d\n\n", z, &z);

    // pointer oluşturma
    int *p = &z;
    printf("%p yada %u degeri: %d\n\n", p, p, *p);

    int a = 5, *aP;
    float b = 4.5, *bP;
    double c = 4.5554, *cP;
    char d = 'b', *dP;
    int sayilar[5] = {1, 2, 3, 4, 5}, *diziP;

    aP = &a, bP = &b, cP = &c, dP = &d, diziP = &sayilar[0];

    printf("%u adresli integerin degeri %d\n", aP, *aP);
    printf("%u adresli floatin degeri %f\n", bP, *bP);
    printf("%u adresli doublein degeri %lf\n", cP, *cP);
    printf("%u adresli charin degeri %c\n", dP, *dP);
    printf("%u adresli arrayin ilk elemaninin degeri %d\n\n", diziP, *diziP);
}