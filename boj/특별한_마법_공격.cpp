#include <stdio.h>

int main(void)
{
    long long int hol = 0, zzack = 0;
    int n;
    scanf("%d",&n);
    for (size_t i = 0; i < n / 2; i++)
    {
        int a, b;
        scanf("%d %d",&a,&b);
        hol += a;
        zzack += b;
    }
    if (n % 2 == 1)
    {
        int t; scanf("%d",&t);
        hol += t;
    }
    printf("%lld",hol > zzack ? zzack : hol);
}
