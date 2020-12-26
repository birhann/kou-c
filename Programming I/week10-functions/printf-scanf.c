#include <stdio.h>
#include <stdlib.h>
void yaz(int sayi)
{
    printf("%d\n", sayi);
}
int oku()
{
    int a;
    printf("bir sayi girin:");
    scanf("%d", &a);
    return a;
}
int main()
{
    int x, y;
    x = oku();
    yaz(x);
    yaz(9);
    y = oku();
    yaz(y + 5);
    yaz(oku() + 5);
    yaz(oku() + oku());
    return 0;
}