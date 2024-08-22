#include <stdio.h>
#include <string.h>

char a[81], b[81];
int result[82];

int main(void)
{
    int n;
    scanf("%d", &n);
    for (size_t qwer = 0; qwer < n; qwer++)
    {
        int carry = 0;
        scanf("%s %s", a, b);
        int len_a = strlen(a);
        int len_b = strlen(b);
        int maxlen = len_a > len_b ? len_a : len_b;

        int i = len_a - 1;
        int j = len_b - 1;
        int k = maxlen;

        while (i >= 0 || j >= 0 || carry)
        {
            int sum = carry;
            if (i >= 0)
                sum += a[i--] - '0';
            if (j >= 0)
                sum += b[j--] - '0';

            result[k--] = sum % 2;
            carry = sum / 2;
        }

        int start = 0;
        while (start <= maxlen && result[start] == 0)
        {
            start++;
        }

        if (start > maxlen)
        {
            printf("0");
        }
        else
        {
            for (int m = start; m <= maxlen; m++)
            {
                printf("%d", result[m]);
            }
        }
        printf("\n");
    }
}
