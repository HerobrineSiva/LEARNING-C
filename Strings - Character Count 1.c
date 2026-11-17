#include <stdio.h>

int main() {
    char word[1000];
    int count[26] = {0};
    int i, maxCount = 0;

    scanf("%s", word);

    for (i = 0; word[i] != '\0'; i++) {
        count[word[i] - 'a']++;
        if (count[word[i] - 'a'] > maxCount) {
            maxCount = count[word[i] - 'a'];
        }
    }

    printf("%d", maxCount);
    return 0;
}
