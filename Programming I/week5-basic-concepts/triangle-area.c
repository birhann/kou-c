#include <stdio.h>
int main()
{
    int taban;
    int yukseklik;
    float alan;
    printf("Tabani giriniz: ");
    scanf("%d", &taban);
    printf("Yuksekligi giriniz: ");
    scanf("%d", &yukseklik);
    alan = (taban * yukseklik) / 2;
    printf("Alan: %f", alan);
}