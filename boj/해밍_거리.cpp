#include <stdio.h>
#include <string.h>

int main(void)
{
    int n; scanf("%d",&n);
    for(size_t i = 0; i<n; i++)
    {
        char a[101], b[101];
        scanf("%s %s",a,b);
        int len = strlen(a);
        int anwer =0;
        for(size_t j = 0; j<len; j++)
        {
            if(a[j] != b[j])
                anwer++;
        }
        printf("Hamming distance is %d.\n",anwer);
    }
}