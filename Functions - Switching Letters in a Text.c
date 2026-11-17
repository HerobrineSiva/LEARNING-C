#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
    char a[50],c,a1,a2;int b,b1,b2;
    fgets(a,sizeof(a),stdin);
    scanf("%c %c",&a1,&a2);b1=(int)a1;b2=(int)a2;
    b=(int)strlen(a)-1;
    //printf("%d %d\n",b1,b2);
    for (int i=0;i<b;i++){
        c=(int)a[i];
        //printf("%d\n",c);
        if (c==b1){
            printf("%c",a2);}
        else if (c==b2){
            printf("%c",a1);}
        else printf("%c",a[i]);
    }
    return 0;
}
