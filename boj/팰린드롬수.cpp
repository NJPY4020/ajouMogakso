#include <stdio.h>

int main(void)
{
    char num[100001];
    int len;
    int pal;

    while (1)
    {
        scanf("%100000s", num);

        len = 0;
        while (num[len] != '\0') {
            if (num[len] == '0' && len == 0)
                return 0;
            len++;
        }

        pal = 1;

        for (int i = 0; i < len / 2; i++)
        {
            if (num[i] != num[len - i - 1])
            {
                pal = 0;
                break;
            }
        }

        if (pal)
            printf("yes\n");
        else
            printf("no\n");
    }

    return 0;
}
