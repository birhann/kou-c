#include <stdio.h>
int main()
{
    int i, j; // i=satir, j=sutun
    int satirSayisi, sutunSayisi;
    printf("satir sayisi?");
    scanf("%d", &satirSayisi);
    printf("sutun sayisi?");
    scanf("%d", &sutunSayisi);
    for (i = 1; i <= satirSayisi; i++)
    {
        for (j = 1; j <= sutunSayisi; j++)
        {
            printf("%d ", i * j);
        }
        printf("\n");
    }
    return 0;
}