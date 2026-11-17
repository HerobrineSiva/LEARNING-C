#include <stdio.h>

int SumUniqueElements(int arr[], int length) {
    int count[10001] = {0};
    int i, sum = 0;

    for (i = 0; i < length; i++) {
        count[arr[i]]++;
    }

    for (i = 0; i < length; i++) {
        if (count[arr[i]] == 1) {
            sum += arr[i];
        }
    }

    return sum;
}

int main() {
    int length, i;
    scanf("%d", &length);

    int arr[length];
    for (i = 0; i < length; i++) {
        scanf("%d", &arr[i]);
    }

    printf("%d", SumUniqueElements(arr, length));
    return 0;
}
