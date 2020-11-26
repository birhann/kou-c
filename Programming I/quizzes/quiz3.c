#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

int main()
{
    float sayi, toplam;
    while (true)
    {
        printf("Lutfen Bir Sayi Girin: ");
        scanf("%f", &sayi);
        if (sayi - (int)sayi == 0.0)
            if ((int)sayi % 2 != 0)
                break;
            else
                toplam += sayi;
    }
    printf("Dongu Sona Erdi. Toplam = %d", (int)toplam);
    return 0;
}