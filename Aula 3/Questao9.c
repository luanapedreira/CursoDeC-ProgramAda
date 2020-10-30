#include <stdio.h>

int main() {
    int posicao, qtd = 0;
    char frase[350];

    printf("Digite a frase: ");
    gets(frase);

    for(posicao =0; frase[posicao] != '\0'; posicao++){
        if(frase[posicao] == ' '){
            qtd++;
        }
    }
    printf("A quantidade de palavras eh: %d", qtd + 1);
        
}