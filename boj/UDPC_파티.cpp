#include <stdio.h>
#include <string.h>

int main(void)
{
    char arr[100001];
    int u = 0, d = 0, p = 0;

    scanf("%s", arr);

    for (int i = 0; arr[i] != '\0'; i++)
    {
        if (arr[i] == 'U' || arr[i] == 'C')
        {
            u++;
        }
        else if (arr[i] == 'D')
        {
            d++;
        }
        else if (arr[i] == 'P')
        {
            p++;
        }
    }
    if (u > (d + p) / 2 + (d + p) % 2)
    {
        printf("U");
    }
    if (d > 0 || p > 0)
    {
        printf("DP");
    }

    return 0;
}
