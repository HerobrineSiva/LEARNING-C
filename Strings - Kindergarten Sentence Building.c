#include <stdio.h>
#include <ctype.h>

int main() {
    char sentence[1000];
    int i, current = 0, longest = 0;

    if (!fgets(sentence, sizeof(sentence), stdin)) {
        return 0;
    }

    for (i = 0; sentence[i] != '\0'; i++) {
        if (isalpha((unsigned char)sentence[i])) {
            current++;
        } else if (current > 0) {
            if (current > longest) {
                longest = current;
            }
            current = 0;
        }
    }

    if (current > longest) {
        longest = current;
    }

    printf("%d", longest);
    return 0;
}
