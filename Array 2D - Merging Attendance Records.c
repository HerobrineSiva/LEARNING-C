#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>

int main(void) {
    int classes;
    int days;
    if (scanf("%d %d", &classes, &days) != 2 || classes < 0 || days < 0) {
        return 0;
    }

    size_t rows = (size_t)classes;
    size_t columns = (size_t)days;
    if (columns != 0 && rows > SIZE_MAX / columns / sizeof(long long)) {
        return 1;
    }

    size_t cell_count = rows * columns;
    long long *totals = cell_count > 0
        ? malloc(cell_count * sizeof(*totals))
        : NULL;
    if (cell_count > 0 && totals == NULL) {
        return 1;
    }

    for (size_t i = 0; i < cell_count; i++) {
        if (scanf("%lld", &totals[i]) != 1) {
            free(totals);
            return 0;
        }
    }

    for (size_t i = 0; i < cell_count; i++) {
        long long attendance;
        if (scanf("%lld", &attendance) != 1) {
            free(totals);
            return 0;
        }
        totals[i] += attendance;
    }

    for (size_t row = 0; row < rows; row++) {
        for (size_t column = 0; column < columns; column++) {
            if (column > 0) {
                printf(" ");
            }
            printf("%lld", totals[row * columns + column]);
        }
        printf("\n");
    }

    free(totals);
    return 0;
}
