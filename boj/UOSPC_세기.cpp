#include <stdio.h>
#include <string.h>

int main(void)
{
    int a;
    int min = 1000000000;
    int arr[26];
    char text[1001];

    scanf("%d",&a);
    scanf("%s",text);
    int len = strlen(text);
    for (size_t i = 0; i < len; i++)
    {
        arr[text[i]-'a']++;
    }
    min = arr['u'-'a'] <= min ? arr['u'-'a'] : min;
    min = arr['o'-'a'] <= min ? arr['o'-'a'] : min;
    min = arr['s'-'a'] <= min ? arr['s'-'a'] : min;
    min = arr['p'-'a'] <= min ? arr['p'-'a'] : min;
    min = arr['c'-'a'] <= min ? arr['c'-'a'] : min;
    printf("%d",min);
}