#include <stdio.h>
int main()
{
    int i, sayi;
    printf("sayi girin: ");
    scanf("%d", &sayi);
    for (i = 1;; i *= 10)
    {
        if (sayi / i == 0)
            break;
        int basamak = (sayi / i) % 10;
        printf("%d x %d\n", i, basamak);
    }
    return 0;
}