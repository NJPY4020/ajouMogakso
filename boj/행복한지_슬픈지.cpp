#include <stdio.h>
#include <string.h>

int main(void)
{
    char arr[260];
    int happy = 0;
    int sad = 0;
    fgets(arr, sizeof(arr), stdin);
    int len = strlen(arr);
    for (size_t i = 0; i < len; i++)
    {
        if (arr[i] == ':' && arr[i+1] =='-')
        {
            if (arr[i+2] == ')')
            {
                happy++;
            }else if (arr[i+2] == '(')
            {
                sad++;
            }
        }
        
    }
    if (happy > sad)
    {
        printf("happy");
    }
    else if (happy < sad)
    {
        printf("sad");
    }
    else if (happy == sad && happy == 0)
    {
        printf("none");
    }else
    {
        printf("unsure");
    }
    
    
}
