#include <stdio.h>

void check(char *card)
{
    int sum = 0;
    
    for (int i = 15; i >= 0; i--)
    {
        int digit = card[i] - '0';
        
        if ((16 - i) % 2 == 0)
        {
            digit *= 2;
            if (digit >= 10)
            {
                digit = digit / 10 + digit % 10;
            }
        }
        
        sum += digit;
    }
    
    if (sum % 10 == 0)
    {
        printf("T\n");
    }
    else
    {
        printf("F\n");
    }
}

int main()
{
    int n;
    scanf("%d", &n);
    
    for (int i = 0; i < n; i++)
    {
        char card[17];
        scanf("%16s", card);
        check(card);
    }
    
    return 0;
}
