#include <stdio.h>
#include <stdlib.h>
int asal_mi(int sayi)
{
    int j, i = sayi;
    for (j = 2; j <= (i / j); j++)
        if (!(i % j))
            break;
    if (j > (i / j))
        return 1;
    return 0;
}
int main()
{
    int a, b;
    printf("iki sayi girin: ");
    scanf("%d %d", &a, &b);
    int sayi;
    for (sayi = a; sayi <= b; sayi++)
    {
        int sonuc = asal_mi(sayi);
        if (sonuc == 1)
            printf("asal: %d\n", sayi);
    }
    return 0;
}