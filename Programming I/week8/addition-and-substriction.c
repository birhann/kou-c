#include <stdio.h>
int main()
{
    int secim;
    printf("toplama icin 1\n");
    printf("cikarma icin 2\n");
    printf("programi kapatmak icin 0\n");
    scanf("%d", &secim);
    while (secim != 0)
    {
        int x, y;
        printf("iki sayi girin: ");
        scanf("%d %d", &x, &y);
        if (secim == 1)
        {
            printf("toplam: %d\n", x + y);
        }
        else if (secim == 2)
        {
            printf("fark: %d\n", x - y);
        }
        printf("\n");
        printf("toplama icin 1\n");
        printf("cikarma icin 2\n");
        printf("programi kapatmak icin 0\n");
        scanf("%d", &secim);
    }
    return 0;
}