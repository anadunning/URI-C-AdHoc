#include <stdio.h>
#include <math.h>

int main(){

    int A, B, C, H;
    double R;

    while (scanf("%d %d %d", &A, &B, &C) != EOF) {

        if (A == 0 && B == 0 & C == 0) break;

        H = A * B * C;
        R = cbrt(H);
        printf("%.0lf\n", floor(R));
    }

    return 0;
}
