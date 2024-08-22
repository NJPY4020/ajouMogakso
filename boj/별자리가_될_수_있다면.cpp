#include <stdio.h>

int main(void)
{
    int n;
    long long int result = 1;
    scanf("%d",&n);
    for (int i = 1; i <= 5; i++)
    {
        result *= n--;
    }
    result /= 120;
    printf("%lld",result);
}