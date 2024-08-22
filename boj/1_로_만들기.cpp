#include <stdio.h>
int dp[1000001];

int main(void)
{
    dp[1] = 0;
    dp[2] = 1;
    dp[3] = 1;
    for (size_t i = 4; i <= 1000000; i++)
    {
        int min = 1000000;
        if (i % 3 == 0)
        {
            min = dp[i / 3] < min ? dp[i/3] : min;
        }
        if (i % 2 == 0)
        {
            min = dp[i / 2] < min ? dp[i/2] : min;
        }
        min = dp[i - 1] < min ? dp[i-1] : min;

        dp[i] = min + 1;
    }
    int n;
    scanf("%d", &n);
    printf("%d", dp[n]);
}