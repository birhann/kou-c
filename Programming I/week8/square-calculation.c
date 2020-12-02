#include <stdio.h>
int main()
{
    int sayi = 1234; // 0 haricinde bir sayi
    while (sayi != 0)
    {
        printf("sayi girin (programi durdurmak icin 0)\n");
        scanf("%d", &sayi);
        int sonuc = sayi * sayi;
        printf("sayinin karesi: %d\n\n", sonuc);
    }
    printf("program bitti\n");
    return 0;
}