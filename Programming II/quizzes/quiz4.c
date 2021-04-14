#include <stdio.h>
#include <ctype.h>
#include <stdlib.h>
int SayiBul(char string[], int stringSize)
{
    int counts[1000];
    for (int i = 0; i < stringSize; i++)
    {
        printf("adsf");
    }

    return 0;
}
int sayiBul(char *ptr)
{
    int *array;
    array = (int *)malloc(sizeof(int));
    int i = 0, j = 0;
    while (ptr[i] != '\0')
    {
        if (isdigit(ptr[i]))
        {
            array[j] = ptr[i];
            j++;
        }
        i++;
    }

    return sayiSirala(array, j);
}

int SayiSirala()
{
    return 0;
}

int string_length(char s[])
{
    int c = 0;
    while (s[c] != '\0')
        c++;

    return c - 1;
}

int main()
{
    char string[1000];
    printf("Input: ");
    fgets(string, 1000, stdin);
    //str length
    int length = string_length(string);
    //sayi bul
    int intArray[1000];
    int intArray[] = SayiBul("string", 12);
}