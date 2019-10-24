#include <stdio.h>

int main(){

    int N, T, V, D, sumD=0, i=0;

    scanf("%d", &N);

    while (i < N){

        scanf("%d %d", &T, &V);

        D = T * V;
        sumD += D;

        i++;
    }

    printf("%d\n", sumD);

    return 0;
}
