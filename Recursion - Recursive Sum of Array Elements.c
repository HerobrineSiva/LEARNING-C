#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
    int a,i,c=0;scanf("%d",&a);
    int *b = malloc(a* sizeof *b);
    for (i=0;i<a;i++){scanf("%d",&b[i]);}
    for (i=0;i<a;i++){c=c+b[i];}printf("%d",c);
    return 0;
}
