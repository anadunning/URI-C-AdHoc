#include <stdio.h>

int main(){

    int A, B, C;

    scanf("%d %d %d", &A, &B, &C);

    if ((A > B) && (B < C) && (C > A)) {
        printf("%d\n", A);
    }
    else if ((A < B) && (B > C) && (C < A)) {
        printf("%d\n", A);
    }
    else if ((A < B) && (B < C) && (C > A)) {
        printf("%d\n", B);
    }
    else if ((A > B) && (B > C) && (C < A)) {
        printf("%d\n", B);
    }
    else if ((A < B) && (B > C) && (C > A)) {
        printf("%d\n", C);
    }
    else if ((A > B) && (B < C) && (C < A)) {
        printf("%d\n", C);
    }

    return 0;
}
