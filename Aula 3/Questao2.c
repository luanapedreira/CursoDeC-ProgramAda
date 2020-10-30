#include <stdio.h>
#define INTEIRO 30
int main(){
  int i, v[INTEIRO], menor, qtd = 0;

  printf ("DIGITE TRINTA NÚMEROS INTEIROS POSITIVOS.\n");
  for (i = 0; i < INTEIRO; i++){
    printf("Digite o número: ");
    scanf ("%d", &v[i]);

    if(v[i] < menor || i == 0){
      menor = v[i];
    }   
  }

  for (i = 0; i < INTEIRO; i++){
    if (v[i] % menor == 0){
    qtd = qtd + 1;
    }
  }
  printf("\nA quantidade de numeros divisiveis pelo menor valor eh: %d\n", qtd);
  printf ("O menor valor do vetor eh: %d", menor);

  
  return 0;
}
