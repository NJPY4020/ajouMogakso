#include <stdio.h>

int main(void)
{
    long long int a,b,t;
    scanf("%lld %lld",&a,&b);
    if(a>b)
    {
        t = b;
        b = a;
        a = t;
    }
    printf("%lld\n",b - a);
    for (long long int i = a+1; i < b; i++)
    {
        printf("%lld ",i);
    }

}