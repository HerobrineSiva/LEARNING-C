#include <stdio.h>
#include <string.h>

int main(void)
{
    char input[52];
    char compressed[52];
    size_t length;
    size_t compressed_length = 0;

    if (fgets(input, sizeof(input), stdin) == NULL) {
        return 0;
    }

    length = strcspn(input, "\r\n");
    input[length] = '\0';

    for (size_t i = 0; i < length; i++) {
        if (i == 0 || input[i] != input[i - 1]) {
            compressed[compressed_length++] = input[i];
        }
    }

    while (compressed_length > 0) {
        putchar(compressed[--compressed_length]);
    }
    putchar('\n');

    return 0;
}
