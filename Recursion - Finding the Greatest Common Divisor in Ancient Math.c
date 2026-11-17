#include <stdio.h>

int gcd(int a, int b) {
    if (b == 0) {
        return a;
    }
    return gcd(b, a % b);
}

int main(void) {
    int a;
    int b;
    if (scanf("%d %d", &a, &b) != 2 ||
        a < 1 || a > 1000000 || b < 1 || b > 1000000) {
        return 0;
    }

    printf("%d\n", gcd(a, b));
    return 0;
}
