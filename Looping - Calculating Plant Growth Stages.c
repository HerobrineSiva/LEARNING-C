#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    int a,b,c,i,d;
    scanf("%d",&a);
    b=0;
    c=1;
    d=1;
    for (i=1;i<=a+1;i++){
        d=c+b;
        printf("%d ",b);
        b=c;
        c=d;
        
    }    
    return 0;
}
