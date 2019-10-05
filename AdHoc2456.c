#include <stdio.h>

int main(){

    int card[6], i;

    for (i = 0; i < 5; i++){
        scanf("%d", &card[i]);
    }

    if ((card[4] > card[3]) && (card[3] > card[2]) && (card[2] > card[1]) && (card[1] > card[0])) {
        printf("C\n");
    }
    else if ((card[4] < card[3]) && (card[3] < card[2]) && (card[2] < card[1]) && (card[1] < card[0])) {
        printf("D\n");
    }
    else {
        printf("N\n");
    }

    return 0;
}
