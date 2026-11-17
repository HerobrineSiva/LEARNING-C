#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    int n1,n2,i=1;
    char str[30];
    if (scanf("%d %d",&n1,&n2) != 2){
        return 1;
    }
    if (n1 > n2){
        int temporary = n1;
        n1 = n2;
        n2 = temporary;
    }
    for (;n1<n2;n1++){
        int unique = 1;
        sprintf(str,"%d",n1);
        for (int first = 0; str[first] != '\0' && unique; first++){
            for (int second = first + 1; str[second] != '\0'; second++){
                if (str[first] == str[second]){
                    unique = 0;
                    break;
                }
            }
        }
        if (unique){
            i++;
        }
    }
    printf("%d",i);
    return 0;
}
