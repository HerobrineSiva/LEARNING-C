#include <ctype.h>
#include <stdio.h>

int main(void) {
    int character;
    int alphanumeric_count = 0;
    int has_input = 0;

    while ((character = getchar()) != EOF && character != '\n') {
        has_input = 1;
        if (isalnum((unsigned char)character)) {
            alphanumeric_count++;
        }
    }

    printf("%d\n", has_input ? alphanumeric_count : -1);
    return 0;
}
