#include <stdio.h>

int arr[1000001];

int main(void)
{
    arr[1] = -1;
    for (size_t i = 2; i <= 1000; i++)
    {
        if (arr[i] == 0)
        {
            for (size_t k = i * i; k <= 1000000; k += i)
            {
                arr[k] = -1;
            }
        }
    }

    int m, n;
    scanf("%d %d", &m, &n);
    for (size_t i = m; i <= n; i++)
    {
        if (arr[i] == 0)
        {
            printf("%d\n",i);
        }
        
    }
    
}