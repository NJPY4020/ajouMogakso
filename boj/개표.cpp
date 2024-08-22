#include <stdio.h>

int main(void)
{
    int n; scanf("%d",&n);
    for (size_t i = 0; i < n; i++)
    {
        int t; scanf("%d",&t);
        for (size_t i = 0; i < t/5; i++)
        {
            printf("++++ ");
        }
        for (size_t i = 0; i < t%5; i++)
        {
            printf("|");
        }
        printf("\n");
    }
    
}