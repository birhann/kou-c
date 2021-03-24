#include <stdio.h>
#include <stdlib.h>

int countVowel(char sentence[]);
int printLength(const char *s);

int main()
{
    char string[100];
    int *ptr;
    printf("String giriniz: ");
    fgets(string, 100, stdin);
    ptr = &string[0];
    int length = printLength(ptr);
    int vowelCount = countVowel(string);

    printf("Uzunlugu: %d\nSesli harf sayisi:%d\nSessiz harf sayisi:%d", length, vowelCount, (length - vowelCount));
}
int countVowel(char sentence[])
{
    char vowels[] = "aeiouAEIOU";
    int i = 0, a, counter = 0;

    while (sentence[i] != '\0')
    {
        for (a = 0; a < 10; a++)
            if (sentence[i] == vowels[a])
            {
                counter++;
                break;
            }
        i++;
    }
    return counter;
}
int printLength(const char *s)
{
    int i, sayac = 0;
    for (i = 0; s[i] != '\0'; i++)
    {
        if (s[i] != ' ')
        {
            sayac++;
        }
    }
    return sayac - 1;
}