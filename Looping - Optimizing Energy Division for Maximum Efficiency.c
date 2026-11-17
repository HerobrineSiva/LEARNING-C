#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    int n, i, pa;
    scanf("%d", &n);
    long long b[n + 1];
    b[0] = 1;
    if (n >= 1)
        b[1] = 1;
    for (i = 2; i <= n; i++) {
        b[i] = 0;
        for (pa = 1; pa < i; pa++) {
            long long pr = (long long) pa * (i - pa);
            long long s = pa * b[i - pa];
            if (pr > b[i])
                b[i] = pr;
            if (s > b[i])
                b[i] = s;
        }
    }
    printf("%lld", b[n]);
    return 0;
}
