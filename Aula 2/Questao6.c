#include <stdio.h>

int main() {
  int n, contador, tabuada;
    printf("Digite um numero inteiro: ");
    scanf("%d", &n);
    for (contador = 1; contador <= 10; contador++){

    tabuada = n * contador;
      printf("%d x %d = %d\n", n, contador, tabuada);
 } 
 
  return 0;
 } 
