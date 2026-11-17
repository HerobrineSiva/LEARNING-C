#include <stdio.h>
#include <stdlib.h>
int com(const void *x, const void *y){
    return *(const int *)x - *(const int *)y;}
int main(){
    int a,i;
    scanf("%d",&a);
    int *b=malloc((a-1)*sizeof*b);
    for(i=0;i<a-1;i++)
        scanf("%d",&b[i]);
    qsort(b,a-1,sizeof *b,com);
    for(i=0;i<a-1;i++){
        if(b[i]!=i+1){
            printf("%d",i+1);
            break;}}
    if(i==a-1)
        printf("%d",a);
    free(b);
    return 0;}
