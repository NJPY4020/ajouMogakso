#include <stdio.h>
#include <stdlib.h>

int arr[1000][1000];

int compare(const void* a, const void* b) {
    int int_a = *(const int*)a;
    int int_b = *(const int*)b;

    if (int_a < int_b) return -1;
    if (int_a > int_b) return 1;
    return 0;
}

void check(int n, int m)
{
    for (size_t j = 0; j < m; j++)
    {
        for (size_t i = 1; i < n; i++)
        {
            if (arr[i-1][j] >= arr[i][j] )
            {
                printf("NO");
                return;
            }
            
        }
    }
    printf("YES");
    return;
}

int main(void)
{
    int n,m,d;
    scanf("%d %d %d",&n,&m,&d);
    for (size_t i = 0; i < n; i++)
    {
        for (size_t j = 0; j < m; j++)
        {
            scanf("%d",&arr[i][j]);
            arr[i][j] += (i+1)*d;
        }
        qsort(arr[i],m,sizeof(int),compare);
    }
    check(n,m);
    
}