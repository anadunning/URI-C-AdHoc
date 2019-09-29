#include <stdio.h>

int main(){

    int N, R, i, m, j;

    scanf("%d", &N);

    while (N != 0) {

        m = j = 0;

        for (i = 0; i < N; i++){

            scanf("%d", &R);

            if (R == 0){
                m++;
            }
            else if (R == 1){
                j++;
            }
        }
        printf("Mary won %d times and John won %d times\n", m, j);
        scanf("%d", &N);
    }
    return 0;
}
