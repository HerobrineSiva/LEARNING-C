#include <stdio.h>

int main() {
    int n, NewProductId, i, position;

    scanf("%d", &n);
    int *arr = malloc(n * sizeof(int));

    for (i = 0; i < n; i++) scanf("%d", &arr[i]);
    scanf("%d", &NewProductId);
    position = n;
    for (i = 0; i < n; i++) {
        if (NewProductId <= arr[i]) {position = i;break;}}

    for (i = n; i > position; i--) arr[i] = arr[i - 1];
    arr[position] = NewProductId;
    for (i = 0; i <= n; i++) printf("%d ", arr[i]);
    return 0;
}
