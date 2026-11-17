#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
    char s[1000], c;
    int a, i, count = 0;

    scanf("%s", s);
    scanf("%d", &a);
    scanf(" %c", &c);

    for (i = 0; i < a; i++) {
        if (s[i] == c) {
            count++;
            }
    }
    printf("%d", count);
    return 0;}
