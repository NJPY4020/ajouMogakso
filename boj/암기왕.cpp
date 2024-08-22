//https://blockdmask.tistory.com/441

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int note[1000000];

int compare(const void* a, const void* b) {
    return (*(const int*)a - *(const int*)b);
}

int bsearch(int data[], int n, int key) {
    int low = 0, high = n - 1;
    int mid;

    while (low <= high) {
        mid = (low + high) / 2;
        if (key == data[mid]) {
            return 1;
        } else if (key < data[mid]) {
            high = mid - 1;
        } else {
            low = mid + 1;
        }
    }
    return 0;
}

int main(void) {
    int t;
    scanf("%d", &t);

    for (size_t i = 0; i < t; i++) {
        memset(note, 0, sizeof(note));
        
        int n;
        scanf("%d", &n);
        for (size_t j = 0; j < n; j++) {
            scanf("%d", &note[j]);
        }

        qsort(note, n, sizeof(int), compare);

        int m;
        scanf("%d", &m);
        for (size_t j = 0; j < m; j++) {
            int x;
            scanf("%d", &x);
            if (bsearch(note, n, x)) {
                printf("1\n");
            } else {
                printf("0\n");
            }
        }
    }

    return 0;
}
