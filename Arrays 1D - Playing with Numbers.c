#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
    int a,c,i;scanf("%d",&a);
    int *b = malloc(a* sizeof *b);
    for (i=0;i<a;i++){scanf("%d",&b[i]);}
    scanf("%d",&c);
    for (i=c;i<a;i++){printf("%d ",b[i]);}
    for (i=0;i<c;i++){printf("%d ",b[i]);}
    return 0;
}
