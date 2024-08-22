#include <stdio.h>

int list[1000000] = {0};

int main() {
    int n, cnt = 0;
    scanf("%d", &n);
    
    for(int i = 0; i < n; i++) {
        scanf("%d", &list[i]);
    }
    
    for(int i = 1; i < n; i++) {
        if(list[i-1] >= list[i]) {
            cnt++;
        }
    }
    
    if(list[0] > list[n-1]) {
        printf("%d", cnt);
    } else {
        printf("%d", cnt+1);
    }
    
    return 0;
}
