#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main(void)
{
    int n; scanf("%d",&n);
    int max = -1;
    char name[11];
    for (size_t i = 0; i < n; i++)
    {
        int t= 0;
        char tname[11];
        scanf("%s %d",tname, &t);
        if (t > max)
        {
            strcpy(name,tname);
            max = t;
        }else if (t == max && strcmp(tname,name)<0)
        {
            strcpy(name,tname);
        }
        
        
    }
    printf("%s",name);
    
}