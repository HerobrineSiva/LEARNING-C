#include <stdio.h>

int main(void) {
    int n;
    if (scanf("%d", &n) != 1 || n < 1 || n > 100) {
        return 0;
    }

    long long primary_sum = 0;
    long long secondary_sum = 0;

    for (int row = 0; row < n; row++) {
        for (int column = 0; column < n; column++) {
            long long load;
            if (scanf("%lld", &load) != 1) {
                return 0;
            }

            if (row == column) {
                primary_sum += load;
            }
            if (row + column == n - 1) {
                secondary_sum += load;
            }
        }
    }

    printf("%lld %lld\n", primary_sum, secondary_sum);
    return 0;
}
