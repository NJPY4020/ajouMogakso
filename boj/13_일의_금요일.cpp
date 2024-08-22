#include <stdio.h>

int main() {
    int n, cnt = 0;
    int m[12] = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
    char *yo[7] = {"월", "화", "수", "목", "금", "토", "일"};
    long long day = 13;

    scanf("%d", &n);

    for (int i = 2019; i <= n; i++) {
        if ((i % 4 == 0 && i % 100 != 0) || i % 400 == 0) {
            m[1] = 29;
        } else {
            m[1] = 28;
        }
        
        for (int j = 0; j < 12; j++) {
            if (day % 7 == 4)
                cnt++;
                
            day += m[j];
        }
    }

    printf("%d\n", cnt);
    return 0;
}
