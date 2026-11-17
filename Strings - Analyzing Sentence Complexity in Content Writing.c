#include <stdio.h>

int main(void) {
    int hard_words = 0;
    int easy_words = 0;
    int vowels = 0;
    int consonants = 0;
    int consecutive_consonants = 0;
    int has_word = 0;
    int character;

    while ((character = getchar()) != EOF && character != '\n') {
        if (character == ' ') {
            if (has_word) {
                if (consonants > vowels || consecutive_consonants >= 3) {
                    hard_words++;
                } else {
                    easy_words++;
                }
                vowels = 0;
                consonants = 0;
                consecutive_consonants = 0;
                has_word = 0;
            }
            continue;
        }

        has_word = 1;
        if (character == 'a' || character == 'e' || character == 'i' ||
            character == 'o' || character == 'u') {
            vowels++;
            consecutive_consonants = 0;
        } else {
            consonants++;
            consecutive_consonants++;
        }
    }

    if (has_word) {
        if (consonants > vowels || consecutive_consonants >= 3) {
            hard_words++;
        } else {
            easy_words++;
        }
    }

    printf("%d\n", (5 * hard_words) - (2 * easy_words));
    return 0;
}
