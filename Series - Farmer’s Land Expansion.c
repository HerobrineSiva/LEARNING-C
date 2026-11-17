#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    int a,b,i;
    scanf("%d",&a);
    b=4;
    for (i=1;i<=a;i++){
        printf("%d ",b);
        b = b+(i*i);
    }   
    return 0;
}
