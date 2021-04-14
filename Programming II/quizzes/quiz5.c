#include <stdio.h>
#include <string.h>

void print_array(const char dizi[5][125])
{
    for (int i = 0; i < 5; i++)
    {
        printf("'%s' uzunluk %d\n", dizi[i], strlen(dizi[i]));
    }
}

int main()
{
    char cumleler[5][125] =
        {"Bilgisayar Muhendisligi Bilgisayar Laboratuvari",
         "Birinci Sinif",
         "String cumlelerin uzunluk toplamini bulun.",
         "sureniz yetmis bes dakika",
         "soruyu dikkatli okuyun!"};

    printf("Ilk Cumleler:\n");
    print_array(cumleler);

    for (int i = 0; i < 5; i++)
    {
        for (int j = 0, k = strlen(cumleler[i]) - 1; j < k; j++, k--)
        {
            char temp = cumleler[i][j];
            cumleler[i][j] = cumleler[i][k];
            cumleler[i][k] = temp;
        }
    }

    printf("\nTers Cumleler:\n");
    print_array(cumleler);

    return 0;
}