#include <stdio.h>

int graph[101][101];
int dfsv[101];
int result = 0;


void dfs(int v, int n)
{
    dfsv[v]=1;
    
    for (size_t i = 1; i <= n; i++)
    {
        if(graph[v][i] == 1 && dfsv[i]==0)
        {
            result++;
            dfs(i,n);
        }
    }
    return;
}

int main(void)
{
    int com,line;
    scanf("%d\n%d",&com,&line);
    for (size_t i = 0; i < line; i++)
    {
        int x,y;
        scanf("%d %d",&x,&y);
        graph[x][y] = 1;
        graph[y][x] = 1;
    }
    dfs(1,com);
    printf("%d",result);
    
}