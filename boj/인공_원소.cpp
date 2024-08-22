#include <stdio.h>
#include <string.h>
#define BUMWI 20

int arr[BUMWI * BUMWI + 1];
int check[200];
int h = 0;

void hackin(int a)
{
    for (size_t i = 0; i < h; i++)
    {
        for (size_t j = 0; j < h; j++)
        {
            if (check[i] + check[j] == a && i != j)
            {
                printf("Yes\n");
                return;
            }
        }
    }
    printf("No\n");
    return;
}

int main(void)
{
    arr[0] = -1;
    arr[1] = -1;
    for (size_t i = 2; i <= BUMWI; i++)
    {
        if (arr[i] == 0)
        {
            for (size_t k = i * i; k <= BUMWI * BUMWI; k += i)
            {
                arr[k] = -1;
            }
        }
    }

    for (size_t i = 0; i < BUMWI; i++)
    {
        if (arr[i] == 0)
        {
            check[h++] = i;
        }
    }

    int n;
    scanf("%d", &n);
    for (size_t i = 0; i < n; i++)
    {
        int t;
        scanf("%d", &t);
        hackin(t);
    }
}