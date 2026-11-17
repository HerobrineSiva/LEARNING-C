#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    int a,b,i;
    scanf("%d",&a);
    b=6;
    for(i=1;i<=a;i++){
        printf("%d ",b);
        b = b+(5*i);
    }   
    return 0;
}
