#include <stdio.h>
#include <string.h>

int divisibilityByEleven(int num) {
    char digits[11];
    snprintf(digits, sizeof(digits), "%d", num);

    int length = (int)strlen(digits);
    int count = 0;
    for (int start = 0; start < length; start++) {
        int fragment = 0;
        for (int end = start; end < length; end++) {
            fragment = fragment * 10 + (digits[end] - '0');
            if (fragment % 11 == 0) {
                count++;
            }
        }
    }

    return count;
}

int main(void) {
    int num;
    if (scanf("%d", &num) != 1 || num < 1 || num > 1000000000) {
        return 0;
    }

    printf("%d\n", divisibilityByEleven(num));
    return 0;
}
