#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    int a,i,j,l;
    scanf("%d",&a);
    for (i=1;i<=a;i++){
        for (j=1;j<=a-i;j++){
            printf("  ");
        }
        for (j=1;j<=i;j++){
            printf("* ");
        }
        for (j=1;j<i;j++){
            printf("* ");
        }
        for (j=1;j<=a-i;j++){
            printf("  ");
        }
        printf("\n");
    }
    }
