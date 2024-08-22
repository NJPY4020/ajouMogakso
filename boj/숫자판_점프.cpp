#include <stdio.h>
#include <string.h>



int board[5][5];
int dx[4] = {-1, 1, 0, 0};  
int dy[4] = {0, 0, -1, 1};
int arr[1000000];
int count = 0;

void dfs(int x, int y, int dep, int num) {
    if (dep == 6) {
        if (!arr[num]) {
            arr[num] = 1;
            count++;
        }
        return;
    }

    for (int i = 0; i < 4; i++) {
        int nx = x + dx[i];
        int ny = y + dy[i];

        if (nx >= 0 && nx < 5 && ny >= 0 && ny < 5) {
            dfs(nx, ny, dep + 1, num * 10 + board[nx][ny]);
        }
    }
}

int main() {
    for (int i = 0; i < 5; i++) {
        for (int j = 0; j < 5; j++) {
            scanf("%d", &board[i][j]);
        }
    }

    memset(arr, 0, sizeof(arr));

    for (int i = 0; i < 5; i++) {
        for (int j = 0; j < 5; j++) {
            dfs(i, j, 1, board[i][j]);
        }
    }

    printf("%d\n", count);
    return 0;
}
