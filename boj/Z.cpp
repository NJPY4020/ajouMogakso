#include <stdio.h>
#include <math.h>

int sabunmun_z(int n, int row, int col);

void z(int n, int r, int c ,long long int start) 
{
    if (n == 0)
    {
        printf("%lld",start);
        return;
    }
    
    long long int a = start; 
    long long int half = pow(2, n - 1);
    a += half * half *  sabunmun_z(n, r, c);
    if (r > half) r -= half;
    if (c > half) c -= half;
    z(n-1, r, c ,a);
}

int sabunmun_z(int n, int row, int col) // 
{
    int k = pow(2, n - 1);
    if (k < row)
    {
        if (k < col)
            return 3;
        else
            return 2;
    }
    else
    {
        if (k < col)
            return 1;
        else
            return 0;
    }
}

int main(void)
{
    int n, r, c;
    scanf("%d %d %d", &n, &r, &c);
    r++;
    c++;
    z(n, r, c, 0);
}