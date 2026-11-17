#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
    int rc;
    scanf("%d", &rc);

    int **hom = malloc(rc * sizeof(*hom));
    if (hom == NULL) {
        return 1;
    }

    for (int i = 0; i < rc; i++) {
        hom[i] = malloc(rc * sizeof(*hom[i]));
        if (hom[i] == NULL) {
            for (int k = 0; k < i; k++) {
                free(hom[k]);
            }
            free(hom);
            return 1;
        }
    }

    int rows = 0;
    for (int i = 0; i < rc; i++) {
        for (int j = 0; j < rc; j++) {
            scanf("%d", &hom[i][j]);
        }
    }

    printf("Row sums:\n");
    for (int i = 0; i < rc; i++) {
        rows = 0;
        for (int j = 0; j < rc; j++) {
            rows += hom[i][j];
        }
        printf("%d\n", rows);
    }

    printf("Column sums:\n");
    for (int i = 0; i < rc; i++) {
        rows = 0;
        for (int j = 0; j < rc; j++) {
            rows += hom[j][i];
        }
        printf("%d\n", rows);
    }

    for (int i = 0; i < rc; i++) {
        free(hom[i]);
    }
    free(hom);

    return 0;
}
