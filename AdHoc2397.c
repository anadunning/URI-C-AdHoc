#include <stdio.h>

int main(){

    int a, b, c, A, B, C;

    scanf("%d %d %d", &a, &b, &c);

    if (a >= b && a >= c){
        A = a;
        B = b;
        C = c;
    }
    else if (b >= a && b >= c){
        A = b;
        B = a;
        C = c;
    }
    else if (c >= a && c >= b){
        A = c;
        B = a;
        C = b;
    }

    if (A >= (B + C)){
        printf("n\n");
    }
    else if (A * A < (B * B + C * C)){
        printf("a\n");
    }
    else if (A * A == (B * B + C * C)){
        printf("r\n");
    }
    else if (A * A > (B * B + C * C)){
        printf("o\n");
    }

    return 0;
}
