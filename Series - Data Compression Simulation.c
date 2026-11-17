#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    int a,b,c,i;
    scanf("%d %d %d",&a,&b,&c);
    for (i=0;i<c;i++){
        printf("%d ",(a*(int)pow(b,i)));
    }    
    return 0;
}
