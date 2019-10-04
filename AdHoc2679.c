#include <stdio.h>

int main(){

    int X;

    scanf("%d", &X);

    if (X % 2 == 0){
        printf("%d\n", X + 2);
    }
    else {
        printf("%d\n", X + 1);
    }

    return 0;
}
