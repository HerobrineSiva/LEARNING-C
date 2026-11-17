#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    int a,c,v,i;
    scanf("%d",&a);
    c = 0;
    for (i=1;i<=a;i++){
        v = pow(i,2);
        c = c+v; 
    }    
    printf("%d",c);
    return 0;
}
