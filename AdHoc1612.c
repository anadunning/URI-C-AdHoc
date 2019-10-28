#include <stdio.h>
#include <math.h>

int main(){

    int T, N, i;
    double t;

    scanf("%d", &T);

    for (i = 0; i < T; i++){

        scanf("%d", &N);

        t = N/2.0;

        printf("%.0lf\n", ceil(t));
    }

    return 0;
}
