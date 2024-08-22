#include <stdio.h>
#include <string.h>

int main(void)
{
    int n;
    scanf("%d", &n);
    getchar();
    for (size_t i = 0; i < n; i++)
    {
        int min = 100000;
        int check[26] = {0};
        char buffer[100000];
        fgets(buffer, sizeof(buffer), stdin);

        int len = strlen(buffer);
        if (buffer[len - 1] == '\n')
        {
            buffer[len - 1] = '\0';
            len--;
        }

        for (size_t j = 0; j < len; j++)
        {
            if (buffer[j] >= 'A' && buffer[j] <= 'Z')
            {
                check[buffer[j] - 'A']++;
            }
            if (buffer[j] >= 'a' && buffer[j] <= 'z')
            {
                check[buffer[j] - 'a']++;
            }
        }

        for (size_t j = 0; j < 26; j++)
        {
            if (check[j] < min) {
                min = check[j];
            }
        }

        printf("Case %zu: ", i + 1);

        switch (min)
        {
        case 0:
            printf("Not a pangram");
            break;
        case 1:
            printf("Pangram!");
            break;
        case 2:
            printf("Double pangram!!");
            break;
        default:
            printf("Triple pangram!!!");
            break;
        }
        printf("\n");
    }
    return 0;
}
