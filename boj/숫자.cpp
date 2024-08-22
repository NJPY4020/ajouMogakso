#include <stdio.h>

int main(void)
{
    long long int a, b, t;
    scanf("%lld %lld", &a, &b);
    if (a > b)
    {
        t = b;
        b = a;
        a = t;
    }
    if (a == b)
    {
        printf("0");
    }
    else
        printf("%lld\n", b - a - 1);
    for (long long int i = a + 1; i < b; i++)
    {
        printf("%lld ", i);
    }
}