// https://iridescent-zeal.tistory.com/2
// https://omyodevelop.tistory.com/120

#include <stdio.h>
#include <string.h>
char l[34] = "qwertyasdfgzxcvbQWERTYASDFGZXCVB ";

char text[101];

int main(void)
{
    int left = 0, right = 0;
    scanf("%[^\n]s", text);
    int len = strlen(text);
    for (size_t i = 0; i < len; i++)
    {
        if(strchr(l,text[i])==NULL)
            right++;
        else if(text[i] != ' ')
            left++;
        if ((text[i] >= 'A' && text[i] <= 'Z')||text[i] == ' ')
        {
            if (left <= right)
                left++;
            else
                right++;
        }

    }
    printf("%d %d",left,right);
}