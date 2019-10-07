#include <stdio.h>

int main(){

    int A, B, C;

    scanf("%d %d %d", &A, &B, &C);

    A /= 2;
    B /= 3;
    C /= 5;

    if ((A == B) && (B == C)) {
        printf("%d\n", A);
    }
    else if ((A <= B) && (A <= C)) {
        printf("%d\n", A);
    }
    else if ((B <= A) && (B <= C)) {
        printf("%d\n", B);
    }
    else if ((C <= A) && (C <= B)) {
        printf("%d\n", C);
    }

    return 0;
}
