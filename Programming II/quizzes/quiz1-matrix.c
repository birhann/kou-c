#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
    // Birhan KARAHASAN - 200201130
    int N;
    srand(time(NULL));
    printf("Kare matris boyutunu giriniz: ");
    scanf("%d", &N);
    int matris[N][N];
    printf("\nRastgele Atanan Matris\n");
    //ilk matrisi oluşturma
    for (int i = 0; i < N; i++)
    {
        for (int j = 0; j < N; j++)
        {
            matris[i][j] = rand() % 10;
            printf("%d ", matris[i][j]);
        }
        //ilk matrisi yazdirma
        printf("\n");
    }

    //matris köşegenlerini değiştirme

    printf("Guncel Matris (Kosegenler Degisti)\n");
    int temp;
    for (int i = 0; i < N; i++)
    {
        temp = matris[i][i];
        matris[i][i] = matris[i][N - 1 - i];
        matris[i][N - 1 - i] = temp;
    }

    //guncel matrisi ekrana yazdirma
    for (int i = 0; i < N; i++)
    {
        for (int j = 0; j < N; j++)
        {
            printf("%d ", matris[i][j]);
        }
        printf("\n");
    }

    return 0;
}
