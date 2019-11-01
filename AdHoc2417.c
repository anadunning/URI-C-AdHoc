#include <stdio.h>

int main(){

    int Vc, Ec, Gc, Vf, Ef, Gf, Pc, Pf;

    scanf("%d %d %d %d %d %d", &Vc, &Ec, &Gc, &Vf, &Ef, &Gf);

    // Cormengo:
    Pc = (Vc * 3) + (Ec * 1);
    //printf("Pc: %d\n", Pc);

    // Flaminthians:
    Pf = (Vf * 3) + (Ef * 1);
    //printf("Pf: %d\n", Pf);

    if (Pc == Pf){
        if (Gc > Gf){
            printf("C\n");
        }
        else if (Gc < Gf) {
            printf("F\n");
        }
        else {
            printf("=\n");
        }
    }
    else if (Pf > Pc){
        printf("F\n");
    }
    else if (Pc > Pf){
        printf("C\n");
    }

    return 0;
}
