#include <stdio.h>
#include <string.h>

int kit[8];
int visit[8];
int result;
int n, k;

void find(int len, int check, int d)
{
    if (d == n)
    {
        result++;
        return;
    }

    for (int i = 0; i < len; i++)
    {
        int t = check + kit[i] - k;
        if (visit[i] == 0 && t >= 500)
        {
            visit[i] = 1;
            find(len, t, d + 1);
            visit[i] = 0;
        }
    }
}

int main(void)
{
    scanf("%d %d", &n, &k);
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &kit[i]);
    }

    find(n, 500, 0);

    printf("%d", result);
    return 0;
}
