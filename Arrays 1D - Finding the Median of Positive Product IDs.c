#include <stdio.h>
#include <stdlib.h>

int main(void) {
    int n;
    if (scanf("%d", &n) != 1 || n < 0) {
        return 0;
    }

    int *positive_ids = n > 0 ? malloc((size_t)n * sizeof(*positive_ids)) : NULL;
    if (n > 0 && positive_ids == NULL) {
        return 1;
    }
    int positive_count = 0;

    for (int i = 0; i < n; i++) {
        int product_id;
        if (scanf("%d", &product_id) != 1) {
            free(positive_ids);
            return 0;
        }

        if (product_id > 0) {
            positive_ids[positive_count++] = product_id;
        }
    }

    if (positive_count == 0) {
        printf("-1\n");
    } else {
        printf("%d\n", positive_ids[positive_count / 2]);
    }

    free(positive_ids);
    return 0;
}
