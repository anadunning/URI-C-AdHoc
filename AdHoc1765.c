#include <stdio.h>

int main(){

    int T, Q, i;
    double A, B, a;

    while (scanf("%d", &T) != EOF) {

        if (T == 0) break;

        for(i = 1; i <= T; i++){
            scanf("%d %lf %lf", &Q, &A, &B);

            a = Q * (((A + B) * 5.0) / 2.0);

            printf("Size #%d:\n", i);
            printf("Ice Cream Used: %.2lf cm2\n", a);
        }
        printf("\n");
    }

    return 0;
}
