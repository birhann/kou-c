#include <stdio.h>
int main()
{
    int a = 10, b = 10, c = 10;
    while (a < 20)
    {
        printf("A degeri:%d\n", a);
        a++;
        while (b < 30)
        {
            printf("B degeri:%d\n", b);
            b++;
            while (c < 35)
            {
                printf("C degeri:%d\n", c);
                c++;
            }
        }
    }
    return 0;
}