#include <stdio.h>

int detectPerfectNumber(int n) {
    int i;
    int sum = 0;

    if (n <= 1) {
        return 0;
    }

    for (i = 1; i < n; i++) {
        if (n % i == 0) {
            sum += i;
        }
    }

    if (sum == n) {
        return 1;
    }

    return sum;
}

int main() {
    int n;
    scanf("%d", &n);
    printf("%d", detectPerfectNumber(n));
    return 0;
}
