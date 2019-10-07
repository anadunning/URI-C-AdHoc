#include <stdio.h>

int main(){

    int N, c;

    scanf("%d", &N);

    if (N <= 10){
        c = 7;
        printf("%d\n", c);
    }
    if (N >= 11 && N <= 30){
        c = ((N - 10) * 1) + 7;
        printf("%d\n", c);
    }
    if (N >= 31 && N <= 100){
        c = ((N - 30) * 2) + 27;
        printf("%d\n", c);
    }
    if (N >= 101){
        c = ((N - 100) * 5) + 167;
        printf("%d\n", c);
    }

    return 0;
}
