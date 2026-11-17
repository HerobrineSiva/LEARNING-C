#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
    int rc;
    if (scanf("%d", &rc) != 1 || rc <= 0) return 1;
    int *hom = malloc((size_t)rc * rc * sizeof *hom);
    if (hom == NULL) return 1;
    for (int i=0;i<rc;i++){for (int j=0;j<rc;j++){
        scanf("%d", &hom[i * rc + j]);}}
    for (int i=0;i<rc;i++){
    int great=hom[i];
    for (int j=0;j<rc;j++){
        if (hom[j * rc + i]>great) great=hom[j * rc + i];}
        printf("%d\n",great);}
    free(hom);
    return 0;}
