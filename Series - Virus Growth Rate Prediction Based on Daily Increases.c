#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    int a,i,b=2;
    scanf("%d",&a);
    for (i=1;i<=a;i++){
        printf("%d ",b);
        b = b+(i*13);
    }    
    return 0;
}
