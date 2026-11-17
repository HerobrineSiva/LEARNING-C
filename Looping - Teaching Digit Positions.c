#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main() {

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    char a[10];
    int b;
    scanf("%s %d",a,&b);
    if (strlen(a)<b)
        printf("-1");
    else{
        printf("%c",a[b-1]);
    }
    return 0;
}
