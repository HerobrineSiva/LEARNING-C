#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
    int a, i, j;
    scanf("%d", &a);
    for (i = a; i >= 1; i--) {
        for (j = 1; j <= (a - i); j++) 
            printf("  ");
        for (j = 1; j <= (2 * i - 1); j++) {
            printf("*");
            if (j < 2 * i - 1) {
                printf(" ");}}
        printf("\n");}
    for (i = 2; i <= a; i++) {
        for (j = 1; j <= (a - i); j++)
            printf("  ");
        for (j = 1; j <= (2 * i - 1); j++) {
            printf("*");
            if (j < 2 * i - 1) {
                printf(" ");}}
        printf("\n");}
    return 0;}
