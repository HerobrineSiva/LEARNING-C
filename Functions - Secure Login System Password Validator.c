#include <stdio.h>
#include <string.h>
#include<ctype.h>
int is_digit(char pass[50]){
    for (int i=0;pass[i]!='\0';i++){
        if (isdigit(pass[i])) return 0;
    }return 1;}
int is_caps(char pass[50]){
    for (int i=0;pass[i]!='\0';i++){
        int sig=(int)pass[i];
        if (sig>64 && sig<91){return 0;}
    }return 1;
}
int main() {
    int length;
    char pass[50],end='0';scanf("%s",pass);
    scanf("%c",&end);if(end!='0'){printf("0");return 0;}
    if (isdigit(pass[0])){printf("0");return 0;}

    //if the pass contains less than 4 
    length=(int)strlen(pass); if (length<4){printf("0");return 0;}
    if (is_digit(pass)){printf("0");return 0;}
    if (is_caps(pass)){printf("0");return 0;}
    printf("1");
    return 0;
}
