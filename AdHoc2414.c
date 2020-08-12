#include <stdio.h>

int main(){

    int n, highest = -1000;

    for((scanf("%d", &n)); n != 0; scanf("%d", &n)) {

        if (n > highest) {
            highest = n;
        }
    }

    printf("%d\n", highest);

    return 0;
}
