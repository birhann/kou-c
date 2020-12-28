#include <stdio.h>
int rakam_sayisi(int x, int rakam);
int sayi_oku();
int main()
{
    int N, i;
    printf("kac sayi gireceksiniz:");
    scanf("%d", &N);
    int s = sayi_oku();
    int enk_2 = s;
    int enb_1 = s;
    for (i = 1; i < N; i++)
    {
        int s = sayi_oku();
        if (rakam_sayisi(s, 1) > rakam_sayisi(enb_1, 1))
            enb_1 = s;
        if (rakam_sayisi(s, 2) < rakam_sayisi(enk_2, 2))
            enk_2 = s;
    }
    printf("en fazla 1 olan: %d\n", enb_1);
    printf("en az 2 olan: %d\n", enk_2);
}
int rakam_sayisi(int x, int rakam)
{
    int r = 0;
    while (x > 0)
    {
        if (x % 10 == rakam)
            r += 1;
        x /= 10;
    }
    return r;
}
int sayi_oku()
{
    int r;
    printf("sayi girin:");
    scanf("%d", &r);
    return r;
}