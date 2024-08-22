#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    int n;
    scanf("%d", &n);
    char operation[10];
    int value;

    int set[21] = {0};

    while (n--)
    {
        scanf("%s", operation);
        if (strcmp(operation, "all") == 0)
        {
            for (int i = 1; i <= 20; ++i)
            {
                set[i] = 1;
            }
        }
        else if (strcmp(operation, "empty") == 0)
        {
            for (int i = 1; i <= 20; ++i)
            {
                set[i] = 0;
            }
        }
        else
        {
            scanf("%d", &value);
            if (strcmp(operation, "add") == 0)
            {
                set[value] = 1;
            }
            else if (strcmp(operation, "remove") == 0)
            {
                set[value] = 0;
            }
            else if (strcmp(operation, "check") == 0)
            {
                printf("%d\n", set[value]);
            }
            else if (strcmp(operation, "toggle") == 0)
            {
                set[value] = !set[value];
            }
        }
    }

    return 0;
}
