#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
    int a,b[3],c=1,res;
    for (int i=0;i<3;i++){scanf("%d",&b[i]);}
    scanf("%d",&a);
    for (int i=0;i<3;i++){c=c*b[i];}
    res = c/a;
    printf("%d",res);
    return 0;
}
