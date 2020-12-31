#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int main()
{
    int x, i;
    // program her basladiginda sayinin degismesi icin
    srand(time(NULL));
    x = rand() % 5; // [0, 5) arasi
    printf("%d\n", x);
    x = 10 + rand() % 90; // [10, 99] arasi
    printf("%d\n", x);
    for (i = 1; i <= 5; i++)
    { // [1,6] arasi 5 tane sayi uret
        x = 1 + rand() % 6;
        printf("%d. sayi = %d \n", i, x);
    }
    return 0;
}
