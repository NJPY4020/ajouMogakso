#include <stdio.h>

int arr[100002];
int sum[100002];

int main(void)
{
    int n, m;
    scanf("%d %d", &n, &m);

    for (int i = 1; i <= n; i++)
    {
        scanf("%d", &arr[i]);
    }

    sum[0] = 0; 
    for (int i = 1; i <= n; i++)
    {
        sum[i] = sum[i - 1] + arr[i];
    }

    for (int i = 0; i < m; i++)
    {
        int t, p;
        scanf("%d %d", &t, &p);
        // 구간 합 계산
        int result = sum[p] - sum[t - 1];
        printf("%d\n", result);
    }

    return 0;
}
