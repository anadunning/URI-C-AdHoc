#include <stdio.h>

int main(){

    int Q, V, i, count0, count1;
    count0 = count1 = 0;

    scanf("%d", &Q);

    for (i = 0; i < Q; i++){

        scanf("%d", &V);

        if (V == 1) {
            count1++;
        }
        else if (V == 0){
            count0++;
        }
    }

    if (count0 > count1){
        printf("Y\n");
    }
    else if (count1 > count0){
        printf("N\n");
    }
    else if (count0 == count1){
        printf("N\n");
    }

    return 0;
}
