#include <stdio.h>
int tersini_bul(int x);
int main()
{
    int sayi;
    printf("sayi girin:");
    scanf("%d", &sayi);
    if (sayi == tersini_bul(sayi))
        printf("sayi palindromik sayidir");
    else
        printf("degildir");
    return 0;
}

int tersini_bul(int x)
{
    int S = 0;
    while (x > 0)
    {
        int b = x % 10;
        S = (S * 10) + b;
        x /= 10;
        printf("S:%d b:%d x:%d", S, b, x);
    }
    return S;
}