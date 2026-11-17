#include <stdio.h>

int main(void) {
    int n;
    if (scanf("%d", &n) != 1) {
        return 0;
    }

    int reachable_houses = 0;

    for (int i = 0; i < n; i++) {
        int stairs;
        if (scanf("%d", &stairs) != 1) {
            return 0;
        }

        if (stairs % 3 == 0) {
            reachable_houses++;
        }
    }

    printf("%d\n", reachable_houses);
    return 0;
}
