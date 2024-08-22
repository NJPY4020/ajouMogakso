//https://blog.naver.com/ygs1090/223105957292

#include <stdio.h>
#include <stdlib.h>

int compare(const void* a, const void* b) {
	return(*(const int*)a - *(const int*)b);
}

int main(void)
{
    int arr[4];
    for (size_t i = 0; i < 4; i++)
    {
        scanf("%d",&arr[i]);
    }
    qsort(arr,4,sizeof(int),compare);
    printf("%d",arr[0]*arr[2]);
}