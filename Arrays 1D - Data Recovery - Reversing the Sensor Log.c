#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
    int a,i;scanf("%d",&a);
    int *b = malloc(a* sizeof *b);
    for (i=0;i<a;i++){scanf("%d",&b[i]);}
    for (i=a;i>0;i--){printf("%d ",b[i-1]);}
    return 0;
}
