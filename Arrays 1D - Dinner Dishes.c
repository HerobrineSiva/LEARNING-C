#include <stdio.h>

int main(void) {
    int n;
    if (scanf("%d", &n) != 1) {
        return 0;
    }

    int largest = 0;
    int second_largest = 0;
    int count = 0;

    for (int i = 0; i < n; i++) {
        int cost;
        if (scanf("%d", &cost) != 1) {
            return 0;
        }

        if (count == 0 || cost > largest) {
            second_largest = largest;
            largest = cost;
        } else if (count == 1 || cost > second_largest) {
            second_largest = cost;
        }

        count++;
    }

    if (count < 2) {
        printf("0\n");
    } else {
        printf("%lld\n", (long long)largest + second_largest);
    }

    return 0;
}
