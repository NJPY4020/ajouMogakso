#include <stdio.h>
#include <string.h>

int main() {
    char arr[5];
    
    scanf("%s", arr);
    
    if (strcmp(arr, "NLCS") == 0) {
        printf("North London Collegiate School\n");
    } else if (strcmp(arr, "BHA") == 0) {
        printf("Branksome Hall Asia\n");
    } else if (strcmp(arr, "KIS") == 0) {
        printf("Korea International School\n");
    } else if (strcmp(arr, "SJA") == 0) {
        printf("St. Johnsbury Academy\n");
    }
}
