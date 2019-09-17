#include <stdio.h>

int main(){

    int N, L, C, i = 0, sumC = 0;

    scanf("%d", &N);

    while (i < N){

        scanf("%d %d", &L, &C);

        if (L > C){
            sumC += C;
        }

        i++;
    }

    printf("%d\n", sumC);

    return 0;
}
