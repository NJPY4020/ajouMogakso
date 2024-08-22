#include <stdio.h>

int main(void)
{
    int n, k;
    scanf("%d %d", &n, &k);

    int dp[31][31];
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j <= i; j++)
        {
            dp[i][j] = 1;
        }
    }

    for (int i = 2; i < n; i++)
    {
        for (int j = 1; j < i; j++)
        {
            dp[i][j] = dp[i - 1][j - 1] + dp[i - 1][j];
        }
    }

    printf("%d\n", dp[n - 1][k - 1]);

    return 0;
}
