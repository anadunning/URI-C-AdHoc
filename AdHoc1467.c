#include <stdio.h>

int main(){

    int A, B, C;

    while (scanf("%d %d %d", &A, &B, &C) != EOF) {

        if ((A == 0) && (B == 1) && (C == 1) || (A == 1) && (B == 0) && (C == 0)) {
            printf("A\n");
        }
        else if ((A == 1) && (B == 0) && (C == 1) || (A == 0) && (B == 1) && (C == 0)) {
            printf("B\n");
        }
        else if ((A == 1) && (B == 1) && (C == 0) || (A == 0) && (B == 0) && (C == 1)) {
            printf("C\n");
        }
        else {
            printf("*\n");
        }
    }
    return 0;
}
