#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int compare(const void *a, const void *b)
{
    int int_a = *(int *)a;
    int int_b = *(int *)b;

    return (int_a > int_b) - (int_a < int_b);
    // return int_a - int_b; 도 사용 가능 (오버플로우가 없다면)
}

void bs(int arr[], int low, int high, int find)
{
    while (low <= high)
    {
        int mid = low + (high - low) / 2;
        if (arr[mid] == find){
            printf("1 ");
            return;
        }
        else if (arr[mid] > find)
            high = mid - 1;
        else
            low = mid + 1;
    }
    printf("0 ");
    return;
}

int main(void)
{
    int *have = NULL;
    int m;
    scanf("%d", &m);
    have = (int *)malloc(sizeof(int) * m);
    for (size_t i = 0; i < m; i++)
    {
        scanf("%d", &have[i]);
    }
    qsort(have, m, sizeof(int), compare);
    int n;
    scanf("%d",&n);
    for (size_t i = 0; i < n; i++)
    {
        int t;
        scanf("%d",&t);
        bs(have,0,m-1,t);
    }
    


    free(have);
}