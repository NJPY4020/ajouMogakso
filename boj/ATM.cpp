#include <stdio.h>
#include <stdlib.h>

int compare(const void *a, const void *b) {
    return (*(int*)a - *(int*)b);
}

int arr[1001];

int main(void)
{
    int n, p;
    int sum = 0, answer = 0;
    scanf("%d %d", &n, &p);
    for (size_t i = 0; i < n; i++)
    {
        scanf("%d",&arr[i]);
    }
    qsort(arr,n,sizeof(arr),compare);
    for (size_t i = 0; i < n; i++)
    {
        sum += arr[i];
        answer += sum;
    }
    printf("%d",answer);
}