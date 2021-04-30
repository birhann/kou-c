#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void listele(char string[50][100], char string2[50][100], int tane)
{
    char *ptr;
    int i = 0;
    int k = 0;
    char *isim;
    char *yil;
    int yil2;
    char *yakit;
    double yakit2;

    for (i = 0; i < tane; i++)
    {
        ptr = strtok(string[i], " ");
        isim = ptr;
        ptr = strtok(NULL, " ");
        if (ptr[0] >= 48 && ptr[0] <= 57)
        {
            yil = ptr;
            yil2 = atoi(yil);

            ptr = strtok(NULL, " ");
            if (ptr[0] >= 48 && ptr[0] <= 57)
            {
                yakit = ptr;
                yakit2 = atof(yakit);
                printf("%20s %-10d %.1lf\n", isim, yil2, yakit2);
            }
        }
    }
}

int main()
{
    char dizi1[50][100];
    char dizi2[50][100];
    int i = 0;
    while (1)
    {
        gets(dizi1[i]);
        if (dizi1[i][0] == 'E')
            break;
        i++;
    }

    int count = i;
    listele(dizi1, dizi2, count);

    return 0;
}