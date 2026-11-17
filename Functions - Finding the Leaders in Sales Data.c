#include <stdio.h>
#include <stdlib.h>

int SumOfLeaders(int arr[], int n)
{
    int sum = 0;
    int greatest_to_right;

    if (n <= 0) {
        return -1;
    }

    greatest_to_right = arr[n - 1];
    sum += greatest_to_right;

    for (int i = n - 2; i >= 0; i--) {
        if (arr[i] > greatest_to_right) {
            sum += arr[i];
            greatest_to_right = arr[i];
        }
    }

    return sum;
}

int main(void)
{
    int n;

    if (scanf("%d", &n) != 1) {
        return 0;
    }
    if (n <= 0) {
        printf("-1\n");
        return 0;
    }

    int *arr = malloc((size_t)n * sizeof(*arr));
    if (arr == NULL) {
        return 1;
    }

    for (int i = 0; i < n; i++) {
        if (scanf("%d", &arr[i]) != 1) {
            free(arr);
            return 1;
        }
    }

    printf("%d\n", SumOfLeaders(arr, n));
    free(arr);
    return 0;
}
