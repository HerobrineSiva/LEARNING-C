#include <stdio.h>

int main() {
    char s[1000];
    int n, i, count = 0;
    char lower[1000];

    scanf("%s", s);
    scanf("%d", &n);

    for (i = 0; i < n; i++) {
        if (s[i] >= 'a' && s[i] <= 'z') {
            lower[count++] = s[i];
        }
    }

    lower[count] = '\0';
    printf("%s %d", lower, count);
    return 0;
}
