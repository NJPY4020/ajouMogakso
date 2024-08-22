#include <stdio.h>
long long int fect(int k)
{
    if (k == 1 || k == 0)
        return 1;
    return k * fect(k - 1);
}

int main(void)
{
    int n, m, x, y;
    scanf("%d %d %d %d", &n, &m, &x, &y);
    int azero = 0, pw = n, check = 9, pwtry = 0;
    long long int result = 0;
    for (size_t i = 0; i < m; i++)
    {
        int a, b;
        scanf("%d %d", &a, &b);
        if (a == 0)
        {
            azero++;
        }
        else
        {
            pw--;
            check--;
        }
    }
    pwtry = (fect(pw) / fect(pw - azero) * (fect(check - azero) / fect(check - pw)));
    result = pwtry*x;
    if (pwtry / 3 > 0)
    {
        result += ((pwtry / 3) - 1) * y; 
    }
    printf("%d", result);
}