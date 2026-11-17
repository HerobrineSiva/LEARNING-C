#include <stdio.h>

int main(void) {
    int n;
    if (scanf("%d", &n) != 1 || n < 1 || n > 100) {
        return 0;
    }

    int image[100][100];
    for (int row = 0; row < n; row++) {
        for (int column = 0; column < n; column++) {
            if (scanf("%d", &image[row][column]) != 1 ||
                (image[row][column] != 0 && image[row][column] != 1)) {
                return 0;
            }
        }
    }

    for (int row = 0; row < n; row++) {
        for (int left = 0, right = n - 1; left <= right; left++, right--) {
            int left_pixel = image[row][left];
            int right_pixel = image[row][right];
            image[row][left] = 1 - right_pixel;
            image[row][right] = 1 - left_pixel;
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
