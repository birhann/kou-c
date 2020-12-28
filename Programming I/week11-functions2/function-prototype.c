#include <stdio.h>
int max(int s1, int s2);
int min(int s1, int s2);
int main()
{
    int a, b;
    printf("iki sayi girin: ");
    ;
    scanf("%d %d", &a, &b);
    printf("sayilardan kucuk olan: %d\n", min(a, b));
    printf("sayilardan buyuk olan: %d\n", max(a, b));
    return 0;
}
int max(int s1, int s2)
{
    if (s1 > s2)
        return s1;
    else
        return s2;
}
int min(int s1, int s2)
{
    if (s1 < s2)
        return s1;
    else
        return s2;
}
