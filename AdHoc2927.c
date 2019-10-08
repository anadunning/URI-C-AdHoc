#include <stdio.h>

int main(){

    int A, C, X, Y;

    scanf("%d %d %d %d", &A, &C, &X, &Y);

    if ((C - (A + 1)) >= (X + Y)){
        printf("Igor feliz!\n");
    }
    else if ((C - (A + 1)) <= (X + Y)){

        if (X > (Y / 2.0)){
            printf("Caio, a culpa eh sua!\n");
        }
        else {
            printf("Igor bolado!\n");
        }
    }
    return 0;
}
