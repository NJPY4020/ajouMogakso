#include <stdio.h>

long long sum(long long n, long long m) {
    return (m * (m + 1) / 2) - (n * (n - 1) / 2);
}

int main() {
    int t;
    scanf("%d", &t);
    for (int i = 1; i <= t; i++) {
        long long n, m;
        scanf("%lld %lld", &n, &m);
        printf("Scenario #%d:\n%lld\n\n", i, sum(n, m));
    }
}
