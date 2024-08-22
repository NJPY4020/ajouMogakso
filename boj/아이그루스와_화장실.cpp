#include <stdio.h>

int main(void)
{
    int n, m, q;
    char chara[8];
    scanf("%d %s %d",&n ,chara, &m);
    if(chara[0] == 'a')
        q = 1;
    else
        q = 0;
    if(m % 2 == q)
        printf("%d",m);
    else 
        printf("%d",m-1 > 0 ? m-1 : m+1);    
}