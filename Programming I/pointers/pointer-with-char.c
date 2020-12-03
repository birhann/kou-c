#include <stdio.h>
#include <string.h>

int uzunlukOlc(char *string)
{
    int sayac = 0;
    int i = 0;
    for (; string[i] != '\0'; i++)
    {
        printf("%c\n", string[i]);
        sayac++;
    }
    return sayac;
}

int main()
{
    char yazi[] = "birhan";
    printf("%s %d\n", yazi, strlen(yazi));

    char *yaziP = yazi;
    printf("%s %d\n", yaziP, strlen(yaziP));

    printf("%s %d", yaziP, uzunlukOlc(yaziP));
    return 0;
}