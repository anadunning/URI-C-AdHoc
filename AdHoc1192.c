#include <stdio.h>

int main(){

    int N, i;

    int n1, n2;
    char c;

    scanf("%d", &N);

    for (i = 0; i < N; i++){

        scanf("%d%c%d", &n1, &c, &n2);

        if (n1 == n2){
            printf("%d\n", n1 * n2);
        }
        else if (c >= 'A' && c <= 'Z'){
            printf("%d\n", n2 - n1);
        }
        else if (c >= 'a' && c <= 'z'){
            printf("%d\n", n1 + n2);
        }
    }

    return 0;
}
