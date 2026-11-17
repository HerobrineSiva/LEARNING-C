#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
    int a,i,b=0;scanf("%d",&a);
    for (i=1;i<=a;i++){
        b=i+b;
    }
    printf("%d",b);
    return 0;
}
