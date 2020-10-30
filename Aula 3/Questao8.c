#include <stdio.h>

int main() {
    int posicao;
    char palavra[50];
    
    printf("Digite a palavra: ");
    gets(palavra);

    for (posicao = 0; palavra[posicao] != '\0'; posicao++);
    printf("%d", posicao);
}