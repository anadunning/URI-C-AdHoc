#include <stdio.h>
#include <string.h>

int main(){

    int n, num, i;
    char course[10];
    int epr, ehd, intruso;

    epr = ehd = intruso = 0;

    while (scanf("%d", &n) != EOF){

        for(i = 0; i < n; i++) {
            scanf("%d %s", &num, course);

            if (strcmp(course, "EPR") == 0){
                epr++;
            }
            else if (strcmp(course, "EHD") == 0){
                ehd++;
            }
            else {
                intruso++;
            }
        }
        printf("EPR: %d\n", epr);
        printf("EHD: %d\n", ehd);
        printf("INTRUSOS: %d\n", intruso);

        epr = ehd = intruso = 0;
    }

    return 0;
}
