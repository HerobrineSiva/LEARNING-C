#include <stdio.h>

int main(void) {
    unsigned int number;
    if (scanf("%u", &number) != 1 || number == 0) {
        return 0;
    }

    char label[16];
    int length = 0;
    while (number > 0) {
        number--;
        label[length++] = (char)('A' + number % 26);
        number /= 26;
    }

    for (int i = length - 1; i >= 0; i--) {
        putchar(label[i]);
    }
    putchar('\n');

    return 0;
}
