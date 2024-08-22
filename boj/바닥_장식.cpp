#include <stdio.h>

char graph[51][51];
int dfsv[51][51];
int result = 0;

void dfs(int startx, int starty, int mode)
{
    int x = 0, y = 0;
    if (dfsv[starty][startx] == 1)
    {
        return;
    }
    dfsv[starty][startx] = 1;
    if (mode == 0)
    {
        x = 1;
    }
    else
    {
        y = 1;
    }
    if (graph[starty][startx] == graph[starty + y][startx + x])
    {
        dfs(startx + x, starty + y, mode);
    }
    else
        result++;
    return;
}

int main(void)
{
    int row, col;
    scanf("%d %d", &col, &row);
    for (size_t i = 0; i < col; i++)
    {
        scanf("%s", graph[i]);
    }
    for (size_t i = 0; i < col; i++)
    {
        for (size_t j = 0; j < row; j++)
        {
            if (graph[i][j] == '-')
                dfs(j, i, 0);
            else
                dfs(j, i, 1);
        }
    }
    printf("%d", result);
}