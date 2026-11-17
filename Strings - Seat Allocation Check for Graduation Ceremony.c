#include <ctype.h>
#include <stdio.h>

int main(void) {
    char arrangement[28];
    if (scanf("%27s", arrangement) != 1) {
        return 0;
    }

    int correctly_placed = 0;
    for (int i = 0; arrangement[i] != '\0'; i++) {
        char letter = (char)tolower((unsigned char)arrangement[i]);
        if (letter == 'a' + i) {
            correctly_placed++;
        }
    }

    printf("%d\n", correctly_placed);
    return 0;
}
