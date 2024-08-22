#include <stdio.h>
#include <stdlib.h>
#define POW(x) ((x) * (x))

int compare(const void *a, const void *b)
{
    return (*(int*)a - *(int*)b);
}

int main(void)
{
    while (1)
    {
        long long int arr[3];
        scanf("%lld %lld %lld", &arr[0], &arr[1], &arr[2]);
        if (arr[0] == 0 && arr[0] == arr[1] && arr[1] == arr[2])
        {
            return 0;
        }
        qsort(arr, 3, sizeof(long long int), compare);
        if (POW(arr[0]) + POW(arr[1]) == POW(arr[2]))
            printf("right\n");
        else
            printf("wrong\n");
    }
}