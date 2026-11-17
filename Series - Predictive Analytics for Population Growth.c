#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    int a,b,c,d,e,f,i;
    scanf("%d",&a);
    b=1;c=3;d=4;
    for (i=1;i<=a;i++){
        //printf("%d %d %d %d %d",b,c,d,e,f);
        printf("%d ",b);
        e=b+c+d;
        b=c;
        c=d;
        d=e;
        }
    return 0;
}
