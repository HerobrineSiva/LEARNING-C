#include <stdio.h>
#include <stdlib.h>

static void ReplaceDiagonal(int *matrix, int m)
{
    for (int i = 0; i < m; i++) {
        long long sum = 0;

        for (int row_offset = -1; row_offset <= 1; row_offset++) {
            for (int column_offset = -1; column_offset <= 1; column_offset++) {
                int row = i + row_offset;
                int column = i + column_offset;

                if ((row_offset == 0 && column_offset == 0) ||
                    row < 0 || row >= m || column < 0 || column >= m) {
                    continue;
                }

                sum += matrix[row * m + column];
            }
        }

        matrix[i * m + i] = (int)sum;
    }
}

int main(void)
{
    int m;

    if (scanf("%d", &m) != 1) {
        return 0;
    }
    if (m <= 0) {
        return 0;
    }

    int *matrix = malloc((size_t)m * (size_t)m * sizeof(*matrix));
    if (matrix == NULL) {
        return 1;
    }

    for (int i = 0; i < m * m; i++) {
        if (scanf("%d", &matrix[i]) != 1) {
            free(matrix);
            return 1;
        }
    }

    ReplaceDiagonal(matrix, m);

    for (int row = 0; row < m; row++) {
        for (int column = 0; column < m; column++) {
            if (column > 0) {
                putchar(' ');
            }
            printf("%d", matrix[row * m + column]);
        }
        putchar('\n');
    }

    free(matrix);
    return 0;
}
