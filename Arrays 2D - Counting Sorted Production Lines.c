#include <stdio.h>

int main(void) {
    int rows;
    int columns;
    if (scanf("%d %d", &rows, &columns) != 2 ||
        rows < 1 || rows > 100 || columns < 1 || columns > 100) {
        return 0;
    }

    int sorted_rows = 0;
    for (int row = 0; row < rows; row++) {
        int previous;
        if (scanf("%d", &previous) != 1) {
            return 0;
        }

        int is_sorted = 1;
        for (int column = 1; column < columns; column++) {
            int current;
            if (scanf("%d", &current) != 1) {
                return 0;
            }
            if (current < previous) {
                is_sorted = 0;
            }
            previous = current;
        }

        if (is_sorted) {
            sorted_rows++;
        }
    }

    printf("%d\n", sorted_rows);
    return 0;
}
