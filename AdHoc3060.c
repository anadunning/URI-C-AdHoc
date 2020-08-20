#include <stdio.h>

int main(){

    int V, P, i, parc, parcB, rem;

    scanf("%d", &V);
    scanf("%d", &P);

    if (V % P == 0) {
        parc = V / P;
        for (i = 0; i < P; i++){
            printf("%d\n", parc);
        }
    }
    else if (V % P != 0) {
        rem = V % P;
        parcB = (V / P) + 1;
        parc = (V - rem) / P;

        for (i = 0; i < rem; i++){
            printf("%d\n", parcB);
        }

        for (i = 0; i < (P - rem); i++){
            printf("%d\n", parc);
        }
    }

    return 0;
}
