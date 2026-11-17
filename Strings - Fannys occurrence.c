#include <stdio.h>
#include <string.h>

int main() {
    char s[1000], x;
    int i, j = 0;

    if (!fgets(s, sizeof(s), stdin)) {
        return 0;
    }
    s[strcspn(s, "\r\n")] = '\0';

    scanf(" %c", &x);

    for (i = 0; s[i] != '\0'; i++) {
        if (s[i] != x) {
            s[j++] = s[i];
        }
    }

    s[j] = '\0';
    printf("%s", s);
    return 0;
}
