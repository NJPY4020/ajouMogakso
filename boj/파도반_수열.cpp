#include <stdio.h>

int main(void)
{
    int t;
    scanf("%d", &t);
    for (size_t j = 0; j < t; j++)
    {
        long long int dp[101];
        dp[0] = 0;
        dp[1] = 1;
        dp[2] = 1;
        dp[3] = 1;
        dp[4] = 2;
        dp[5] = 2;
        int n;
        scanf("%d", &n);
        for (size_t i = 6; i <= n; i++)
        {
            dp[i] = dp[i - 1] + dp[i - 5];
        }
        printf("%lld\n", dp[n]);
    }
}