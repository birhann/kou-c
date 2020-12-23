#include <stdio.h>
#include <stdlib.h>

void xParseSeconds(int seconds);

int main()
{
    int seconds;
    printf("Saniye bilgisini giriniz: ");
    scanf("%d", &seconds);
    xParseSeconds(seconds);
    return 0;
}

void xParseSeconds(int seconds)
{
    int hour, min, sec;

    hour = (seconds / 3600);
    min = (seconds - (3600 * hour)) / 60;
    sec = (seconds - (3600 * hour) - (min * 60));

    printf("%d saat %d dakika %d saniye\n", hour, min, sec);
    printf("---------------------------");
}
