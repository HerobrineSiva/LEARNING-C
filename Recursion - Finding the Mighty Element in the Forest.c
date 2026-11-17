#include <stdio.h>

int find_maximum(const int values[], int n) {
    if (n == 1) {
        return values[0];
    }

    int maximum_of_rest = find_maximum(values, n - 1);
    return values[n - 1] > maximum_of_rest ? values[n - 1] : maximum_of_rest;
}

int main(void) {
    int n;
    if (scanf("%d", &n) != 1 || n < 1 || n > 1000) {
        return 0;
    }

    int values[1000];
    for (int i = 0; i < n; i++) {
        if (scanf("%d", &values[i]) != 1) {
            return 0;
        }
    }

    printf("%d\n", find_maximum(values, n));
    return 0;
}
