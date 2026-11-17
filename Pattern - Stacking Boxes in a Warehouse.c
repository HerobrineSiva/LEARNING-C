#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    int a,i,j,n;
    scanf("%d",&a);
    n=a;
    for(i=1;i<=a;i++){
        for(j=1;j<=n;j++){
            printf("* ");
        }
        n--;
        printf("\n");
    }    
    return 0;
}
