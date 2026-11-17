#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    int a,b,c,d;
    scanf("%d",&a);
    for (b=1;b<=a;b++){
        if (b==1 || b==a){
            for (c=1;c<=a;c++)
                printf("* ");
        }
        else{
            for (c=1;c<=a;c++){
                if (c==1 || c==a)
                    printf("* ");
                else{
                        printf("  ");
                } 
            }
        }
        printf("\n");
    }    
    return 0;
}
