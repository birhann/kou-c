#include <stdio.h>
int f(int x);
int main()
{
    int sonuc = f(5);
    printf("5! = %d\n", sonuc);
    return 0;
}
int f(int x)
{
    if (x == 1)
        return 1;
    else
        return x * f(x - 1);
}
