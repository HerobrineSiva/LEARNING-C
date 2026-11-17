#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */ 
    int a,c=0,i;scanf("%d",&a);
    int *b = malloc(a* sizeof *b);
    for (i=0;i<a;i++){scanf("%d",&b[i]);}
    for (i=0;i<a;i++){if (b[i]!=0) {printf("%d ",b[i]);} else {c++;} }
    for (i=1;i<=c;i++){printf("0 ");}
    return 0;
}
