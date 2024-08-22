#include <stdio.h>

int main(void)
{
    int n;
    scanf("%d", &n);
    if (n < 0)
    {
        n = -n;
        if (n % 2 == 0)
            printf("-1");
        else
            printf("1");
    }
    else if (n == 0)
        printf("0");
    else
        printf("1");
    printf("\n");
    int a = 0, b = 1, c = 1;
    if (n == 0)
        printf("0");
    else if (n == 1)
        printf("1");
    else
    {
        for (size_t i = 0; i < n - 1; i++)
        {
            c = (a + b) % 1000000000;
            a = b;
            b = c;
        }
        printf("%d", c);
    }
}