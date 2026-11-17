#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    int a,i;
    scanf("%d",&a);
    for (i=1;i<=a;i++){
        if(i%2!=0)
            printf("%d ",i+1);
        else 
            printf("%d ",i-1);
    }   
    return 0;
}
