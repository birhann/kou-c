#include <stdio.h>
#include <stdlib.h>

int main()
{

    int a, b, c, diskriminant;
    printf("ax^2 + bx + c seklinde verilmis olan 2. dereceden denklem icin  a, b, c degerlerini giriniz: \n");
    printf("a degerini giriniz:");
    scanf("%d", &a);
    printf("b degerini giriniz:");
    scanf("%d", &b);
    printf("c degerini giriniz:");
    scanf("%d", &c);

    diskriminant = b * b - 4 * a * c;

    if (diskriminant > 0)
    {
        printf("Denklemin iki farkli reel koku vardir");
    }
    else if (diskriminant == 0)
    {
        printf("Denklemin bir tane reel koku vardir");
    }
    else if (diskriminant < 0)
    {
        printf("Denklemin reel koku bulunmamaktadir.");
    }

    return 0;
}
