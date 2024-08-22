#include <stdio.h>

int main() {
    int n, m, q = 0;
    int nums[1000];

    scanf("%d", &n);
    
    for (int i = 0; i < n; i++) {
        scanf("%d", &nums[i]);
    }
    
    for (int i = 0; i < n-1; i++) {
        for (int j = i+1; j < n; j++) {
            if (nums[i] > nums[j]) {
                int temp = nums[i];
                nums[i] = nums[j];
                nums[j] = temp;
            }
        }
    }
    
    m = nums[n-1];
    
    for (int i = m - 1; i > 0; i--) {
        int count = 0;
        for (int j = 0; j < n; j++) {
            if (nums[j] >= i) {
                count++;
            }
        }
        if (count >= i) {
            q = i;
            break;
        }
    }
    
    printf("%d\n", q);
    
    return 0;
}
