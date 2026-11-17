#include <stdio.h>

int main(void) {
    int batches;
    int items_per_batch;
    if (scanf("%d %d", &batches, &items_per_batch) != 2 ||
        batches < 1 || items_per_batch < 1) {
        return 0;
    }

    for (int batch = 0; batch < batches; batch++) {
        int defect_level;
        if (scanf("%d", &defect_level) != 1) {
            return 0;
        }

        int maximum = defect_level;
        for (int item = 1; item < items_per_batch; item++) {
            if (scanf("%d", &defect_level) != 1) {
                return 0;
            }
            if (defect_level > maximum) {
                maximum = defect_level;
            }
        }

        printf("%d\n", maximum);
    }

    return 0;
}
