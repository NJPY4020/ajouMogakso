#include <stdio.h>
#include <string.h>

int main(void)
{
    char arr[101];
    scanf("%s",arr);
    int len = strlen(arr);
    for (size_t i = 0; i < len; i++)
    {
        if(arr[i] == 'E'){
            printf("ye");
        }else if(arr[i] == 'B'){
            printf("v");
        }else if(arr[i] == 'H'){
            printf("n");
        }else if(arr[i] == 'P'){
            printf("r");
        }else if(arr[i] == 'C'){
            printf("s");
        }else if(arr[i] == 'Y'){
            printf("u");
        }else if(arr[i] == 'X'){
            printf("h");
        }else{
            printf("%c",arr[i]-'A'+'a');
        }
        
    }
    
}