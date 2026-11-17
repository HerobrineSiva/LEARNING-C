#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    int a,i,j,m=0;
    scanf("%d",&a);
    for (i=1;i<=a;i++){
        m=m+i;
    }
    for (i=1;i<=a;i++){
        for (j=1;j<=a-i+1;j++){
            printf("%d",m);
            m--;
            if (j!=a-i+1)
                printf("*");
            }
        printf("\n");
    }    
    return 0;
}
