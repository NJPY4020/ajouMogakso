#include <stdio.h>
#include <string.h>

int main(void)
{
    while (1)
    {
        char string[252];
        int arr[26] = {
            0,
        };
        fgets(string,sizeof(string),stdin);
        string[strlen(string)-1] = '\0';
        int len = strlen(string);
        if (string[0] == '#' && len == 1)
        {
            return 0;
        }
        for (size_t i = 0; i < len; i++)
        {
            if ((string[i] >= 'a' && string[i] <= 'z'))
            {
                arr[string[i] - 'a']++;
            }
            if ((string[i] >= 'A' && string[i] <= 'Z'))
            {
                arr[string[i] - 'A']++;
            }
        }
        int result = 0;
        for (size_t i = 0; i < 26; i++)
        {
            if (arr[i] > 0)
                result++;
        }
        printf("%d\n", result);
    }
}
