#include<stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

long long factorial(int a) {
    long long b = 1;

    for (int c = 2; c <= a; c++) {
        b *= c;
    }

    return b;
}

int main() {

    long long a;
    long long b = 0;
    long long c;

    if (scanf("%lld", &a) != 1) {
        return 1;
    }

    c = a;

    if (a < 0) {
        a = -a;
    }

    do {
        int d = (int)(a % 10);
        b += factorial(d);
        a /= 10;
    } while (a > 0);

    if (c == b) {
        printf("Rare Item");
    } else {
        printf("Common Item");
    }

    return 0;
}
