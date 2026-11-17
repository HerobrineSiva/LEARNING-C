#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    int a,i;
    float b;
    scanf("%d",&a);
    b=0.5;
    for (i=1;i<=a;i++){
        printf("%.1f ",b);
        b=b*3;
    } 
    return 0;
}
