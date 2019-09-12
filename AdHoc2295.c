#include <stdio.h>

int main(){

    float precoA, precoG, rendA, rendG;
    float porcPreco, porcRend;

    scanf("%f %f %f %f", &precoA, &precoG, &rendA, &rendG);

    porcPreco = precoA / precoG;
    printf("Proporcao do preco: %.2f %%\n", porcPreco * 100);

    porcRend = rendA / rendG;
    printf("Proporcao do rendimento: %.2f %%\n", porcRend * 100);

    if (porcPreco < porcRend){
        printf("A\n");
    }
    else if (porcPreco > porcRend) {
        printf("G\n");
    }
    else {
        printf("G\n");
    }

    return 0;
}
