#include <stdio.h>

void swap(int *n1, int *n2, int *n3)
{
    int temp;
    temp = *n2;
    *n2 = *n1;
    *n1 = *n3;
    *n3 = temp;
}
int main()
{
    int a, b, c;

    printf("a, b ve c degerlerini girin: ");
    scanf("%d %d %d", &a, &b, &c);

    printf("Swap isleminden onceki degerler:\n");
    printf("a = %d \nb = %d \nc = %d\n", a, b, c);

    swap(&a, &b, &c);

    printf("Swap isleminden sonraki degerler:\n");
    printf("a = %d \nb = %d \nc = %d", a, b, c);

    return 0;
}