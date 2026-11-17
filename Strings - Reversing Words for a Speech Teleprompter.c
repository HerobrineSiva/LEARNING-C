#include <stdio.h>
#include <stdlib.h>
#include <string.h>

static void reverse(char *text, size_t start, size_t end)
{
    while (start < end) {
        char temp = text[start];
        text[start] = text[end];
        text[end] = temp;
        start++;
        end--;
    }
}

int main(void)
{
    size_t length = 0;
    size_t capacity = 128;
    char *sentence = malloc(capacity);
    int character;

    if (sentence == NULL) {
        return 1;
    }

    while ((character = getchar()) != '\n' && character != EOF) {
        if (length + 1 >= capacity) {
            size_t new_capacity = capacity * 2;
            char *resized = realloc(sentence, new_capacity);

            if (resized == NULL) {
                free(sentence);
                return 1;
            }
            sentence = resized;
            capacity = new_capacity;
        }
        sentence[length++] = (char)character;
    }
    sentence[length] = '\0';

    if (length > 0) {
        reverse(sentence, 0, length - 1);

        for (size_t start = 0; start < length;) {
            size_t end = start;
            while (end < length && sentence[end] != ' ') {
                end++;
            }
            reverse(sentence, start, end - 1);
            start = end + 1;
        }
    }

    puts(sentence);
    free(sentence);
    return 0;
}
