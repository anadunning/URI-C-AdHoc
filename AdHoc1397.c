#include <stdio.h>

int main(){

    int N, A, B, i, scoreA, scoreB;
    i = 0;
    scoreA = scoreB = 0;

    scanf("%d", &N);

    while (N != 0) {

        for(i = 0; i < N; i++){

            if (N == 0) break;

            scanf("%d %d", &A, &B);

            if (A > B){
                scoreA++;
            }
            else if (B > A) {
                scoreB++;
            }
            else if (A == B) {
                scoreA == 0;
                scoreB == 0;
            }
        }
        printf("%d %d\n", scoreA, scoreB);
        scoreA = scoreB = 0;

        scanf("%d", &N);
    }
    return 0;
}
