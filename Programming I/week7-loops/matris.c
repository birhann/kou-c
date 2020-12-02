#include <stdio.h>
int main()
{
    int satir, sutun;
    for (satir = 0; satir < 2; satir++)
    {
        for (sutun = 0; sutun < 2; sutun++)
        {
            printf(" %d,%d ", satir, sutun);
        }
        printf("\n");
    }

    return 0;
}