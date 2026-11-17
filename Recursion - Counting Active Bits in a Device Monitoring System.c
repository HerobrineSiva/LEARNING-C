#include <stdio.h>

int countSetBits(int number) {
    if (number == 0) {
        return 0;
    }
    return (number & 1) + countSetBits(number >> 1);
}

int main(void) {
    int number;
    if (scanf("%d", &number) != 1 || number < 0 || number > 1000000) {
        return 0;
    }

    printf("%d\n", countSetBits(number));
    return 0;
}
