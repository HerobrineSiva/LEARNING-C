#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    int a,i=1;
    scanf("%d",&a);
    for (;i==i;i++){
        printf("%d ",a);
        if (a!=1){
            if (a%2==0){
                a=a/2;}
            else{
                a=(a*3)+1;
            }
        }
        else{
            break;
        }
    }    
    return 0;
}
