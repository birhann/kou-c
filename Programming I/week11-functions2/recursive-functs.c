#include <stdio.h>
void f(int sayi);
int main()
{
    f(0);
    return 0;
}
void f(int sayi)
{
    printf("%d\n", sayi);
    if (sayi < 3)
        f(sayi + 1);
    printf("%d\n", sayi);
}
