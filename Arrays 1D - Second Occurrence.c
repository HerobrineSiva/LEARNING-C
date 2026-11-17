#include <stdio.h>
#include <limits.h>

int main() {
    int n, i;
    scanf("%d", &n);

    if (n <= 1) {
        printf("0");
        return 0;
    }

    int *arr = malloc(n * sizeof(int));
    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    int largest = arr[0];
    int second = INT_MIN;
    int hasSecond = 0;

    for (i = 1; i < n; i++) {
        if (arr[i] > largest) {
            second = largest;
            largest = arr[i];
            hasSecond = 1;
        } else if (arr[i] > second && arr[i] < largest) {
            second = arr[i];
            hasSecond = 1;
        }
    }

    if (!hasSecond) {
        printf("0");
        return 0;
    }

    int count = 0;
    for (i = 0; i < n; i++) {
        if (arr[i] == second) {
            count++;
        }
    }

    printf("%d", count);
    return 0;
}

