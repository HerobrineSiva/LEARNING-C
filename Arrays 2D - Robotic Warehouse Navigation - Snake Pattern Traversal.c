#include <stdio.h>

int main(void) {
    int rows;
    int columns;
    if (scanf("%d %d", &rows, &columns) != 2 ||
        rows < 1 || rows > 100 || columns < 1 || columns > 100) {
        return 0;
    }

    int items[100][100];
    for (int row = 0; row < rows; row++) {
        for (int column = 0; column < columns; column++) {
            if (scanf("%d", &items[row][column]) != 1) {
                return 0;
            }
        }
    }

    int first = 1;
    for (int row = 0; row < rows; row++) {
        if (row % 2 == 0) {
            for (int column = 0; column < columns; column++) {
                printf("%s%d", first ? "" : " ", items[row][column]);
                first = 0;
            }
        } else {
            for (int column = columns - 1; column >= 0; column--) {
                printf("%s%d", first ? "" : " ", items[row][column]);
                first = 0;
            }
        }
    }
    printf("\n");

    return 0;
}
