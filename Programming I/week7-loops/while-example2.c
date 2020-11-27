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

        /* local variable definition */
        int x = 10;

        /* do loop execution */
        do
        {
            printf("value of a: %d\n", x);
            x = x + 1;
        } while (x < 20);
    }
    return 0;
}