#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main(){
    int a,i,j,m=1;
    scanf("%d",&a);
    for (i=1;i<=a;i++){
        for (j=1;j<=i;j++){
            printf("%d",m);
            m++;
        }
     printf("\n");   
    }
}
