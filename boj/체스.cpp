#include <stdio.h>

int main(void) {
    int T;
    scanf("%d", &T);
    
    for (int t = 0; t < T; t++) {
        char qwer[3];
        int asdf;
        scanf("%s %d", qwer, &asdf);
        
        int x1 = qwer[0] - 'A' + 1;
        int y1 = qwer[1] - '1' + 1;      
        int x2 = (asdf - 1) % 8 + 1;
        int y2 = (asdf - 1) / 8 + 1;

        if ((x1 + y1) % 2 == (x2 + y2) % 2) {
            printf("YES\n");
        } else {
            printf("NO\n");
        }
    }
}
