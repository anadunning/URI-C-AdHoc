#include <stdio.h>

int main(){

    int L, D, K, P, cost, nPed;

    scanf("%d %d", &L, &D);
    scanf("%d %d", &K, &P);

    nPed = (int) L / D;

    if (L < D){
        cost = (K * L);
    }
    else if (L > D){
        cost = (K * L) + nPed * P;
    }
    else {
        cost = (K * L) + nPed * P;
    }

    printf("%d\n", cost);

    return 0;
}
