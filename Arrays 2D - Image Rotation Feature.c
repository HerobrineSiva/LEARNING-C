#include <stdio.h>

int main(void) {
    int n;
    if (scanf("%d", &n) != 1 || n < 1 || n > 100) {
        return 0;
    }

    int image[100][100];
    for (int row = 0; row < n; row++) {
        for (int column = 0; column < n; column++) {
            if (scanf("%d", &image[row][column]) != 1) {
                return 0;
            }
        }
    }

    for (int row = 0; row < n; row++) {
        for (int column = row + 1; column < n; column++) {
            int temporary = image[row][column];
            image[row][column] = image[column][row];
            image[column][row] = temporary;
        }
    }

    for (int row = 0; row < n; row++) {
        for (int left = 0, right = n - 1; left < right; left++, right--) {
            int temporary = image[row][left];
            image[row][left] = image[row][right];
            image[row][right] = temporary;
        }
    }

    for (int row = 0; row < n; row++) {
        for (int column = 0; column < n; column++) {
            if (column > 0) {
                printf(" ");
            }
            printf("%d", image[row][column]);
        }
        printf("\n");
    }

    return 0;
}
