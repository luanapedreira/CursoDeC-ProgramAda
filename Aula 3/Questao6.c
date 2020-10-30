#include <stdio.h>
#define TAMANHO 10


int main() {
    float matriz[TAMANHO][TAMANHO];
    int maior = 0, menor = 0, i, j;

    for(i = 0; i < TAMANHO; i++){
        for(j = 0; j < TAMANHO; j++){
            printf("Insira o número: ");
            scanf("%f", &matriz[i][j]);

            if(matriz[i][j] > maior || (i == 0 && j == 0)){
                maior = matriz[i][j];
            }
            if(matriz[i][j] < menor || (i == 0 && j == 0)){
                menor = matriz[i][j];
            }

        }
    }
    printf("O maior valor eh: %d", maior);
    printf("\nO menor valor eh %d", menor);
    
}