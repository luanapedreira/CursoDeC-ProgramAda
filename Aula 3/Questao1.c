#include <stdio.h>

int main() {
  int inteirosA[10], inteirosB[10], inteirosC[10], i; 

  printf ("DIGITE DEZ NÚMEROS INTEIROS.\n");
  for (i = 0; i < 10; i++){
    printf("Digite o número: ");
    scanf ("%d", &inteirosA[i]);
 }

  printf ("\nDIGITE MAIS DEZ NÚMEROS INTEIROS.\n");
  for (i = 0; i < 10; i++){
    printf ("Digite o número: ");
    scanf ("%d", &inteirosB[i]);
  }
  printf("\n\nRESULTADO DA SOMA: ");
  for(i = 0; i < 10; i++){
    inteirosC[i] = inteirosA [i] + inteirosB [i];
     printf("\n%d ", inteirosC[i]);
    }
  
  return 0;
}