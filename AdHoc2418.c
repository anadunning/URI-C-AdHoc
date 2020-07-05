#include <stdio.h>

int main(){

    float n1, n2, n3, n4, n5, highest, lowest, score;
    highest = -1000.0;
    lowest = 1000.0;

    scanf("%f %f %f %f %f", &n1, &n2, &n3, &n4, &n5);

    if (n1 > highest){
        highest = n1;
    }
    if (n2 > highest){
        highest = n2;
    }
    if (n3 > highest){
        highest = n3;
    }
    if (n4 > highest){
        highest = n4;
    }
    if (n5 > highest){
        highest = n5;
    }

    if (n1 < lowest){
        lowest = n1;
    }
    if (n2 < lowest){
        lowest = n2;
    }
    if (n3 < lowest){
        lowest = n3;
    }
    if (n4 < lowest){
        lowest = n4;
    }
    if (n5 < lowest){
        lowest = n5;
    }

    score = (n1 + n2 + n3 + n4 + n5 - highest - lowest);

    printf("%.1f\n", score);

    return 0;
}
