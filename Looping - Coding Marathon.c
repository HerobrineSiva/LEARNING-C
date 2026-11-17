#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    int n,k,j,i,sum=0;
    scanf("%d", &n);scanf("%d", &k);
    int marks[n];
    for (i = 0; i < n; i++) 
        scanf("%d", &marks[i]);
    for(i=0;i<n-1;i++){
        for (j=i+1;j<n;j++){
            if (marks[i] <marks[j]){
                int temp =marks[i];marks[i] =marks[j];marks[j]=temp;}}}
    for (i=0;i<k;i++)
        sum += marks[i];
    printf("%d", sum);return 0;
}
