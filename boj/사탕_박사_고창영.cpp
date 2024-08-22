#include <stdio.h>
#include <string.h>

int main(void)
{
    int t;
    scanf("%d", &t);
    for (size_t i = 0; i < t; i++)
    {
        int m, n;
        int result = 0;
        char arr[403][403];
        int arrv[403][403] = {0};  // 배열을 0으로 초기화
        scanf("%d %d", &m, &n);
        for (size_t i = 0; i < m; i++)
        {
            scanf("%s", arr[i]);
        }

        // arrv 배열을 0으로 초기화
        memset(arrv, 0, sizeof(arrv));

        for (size_t i = 0; i < m; i++)
        {
            for (size_t j = 0; j < n; j++)
            {
                if (arrv[i][j] == 1)
                    continue;
                if (arr[i][j] == '>' && arr[i][j + 1] == 'o' && arr[i][j + 2] == '<')
                {
                    arrv[i][j] = 1;
                    arrv[i][j + 1] = 1;
                    arrv[i][j + 2] = 1;
                    result++;
                }
                else if (arr[i][j] == 'v' && arr[i + 1][j] == 'o' && arr[i + 2][j] == '^')
                {
                    arrv[i][j] = 1;
                    arrv[i + 1][j] = 1;
                    arrv[i + 2][j] = 1;
                    result++;
                }
            }
        }
        printf("%d\n", result);
    }
}
