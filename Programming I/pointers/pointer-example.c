#include <stdio.h>

int main()
{

    int i, j = 1;
    int *jp1, *jp2 = &j;
    printf("j: %d  i:%d  *jp1:%d  *jp2:%d\n", j, i, *jp1, *jp2);
    printf("i adres: %d   j adres: %d   *jp1 adres:%u   *jp2 adres:%u\n\n", &i, &j, jp1, jp2);

    jp1 = jp2;
    printf("j: %d  i:%d  *jp1:%d  *jp2:%d\n", j, i, *jp1, *jp2);
    printf("i adres: %d   j adres: %d   *jp1 adres:%u   *jp2 adres:%u\n\n", &i, &j, jp1, jp2);

    i = ++(*jp2);
    printf("j: %d  i:%d  *jp1:%d  *jp2:%d\n", j, i, *jp1, *jp2);
    printf("i adres: %d   j adres: %d   *jp1 adres:%u   *jp2 adres:%u\n\n", &i, &j, jp1, jp2);

    *jp2 = *jp1 + i;
    printf("j: %d  i:%d  *jp1:%d  *jp2:%d\n", j, i, *jp1, *jp2);
    printf("i adres: %d   j adres: %d   *jp1 adres:%u   *jp2 adres:%u\n\n", &i, &j, jp1, jp2);

    *jp1 = 15;
    printf("j: %d  i:%d  *jp1:%d  *jp2:%d\n", j, i, *jp1, *jp2);
    printf("i adres: %d   j adres: %d   *jp1 adres:%u   *jp2 adres:%u\n\n", &i, &j, jp1, jp2);
}