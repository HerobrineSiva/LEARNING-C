#include <stdio.h>
#include <stdlib.h>

int comp(const void *x, const void *y) {
    return *(const int *)x - *(const int *)y;
}

int main() {
    int a, i, result = 1;

    scanf("%d", &a);

    int *b = malloc(a * sizeof *b);

    for (i = 0; i < a; i++)
        scanf("%d", &b[i]);

    qsort(b, a, sizeof *b, comp);

    for (i = 0; i < a - 1; i++) {
        if (b[i] + 1 != b[i + 1]) {
            result = 0;
            break;
        }
    }

    printf("%d", result);

    free(b);
    return 0;
}
