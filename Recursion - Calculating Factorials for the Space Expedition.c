#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
    int a,b=1,i;scanf("%d",&a);
    for (i=a;i>=1;i--){
        b=b*i;
    }
    printf("%d",b);
    return 0;
}
