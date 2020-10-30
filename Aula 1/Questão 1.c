#include <stdio.h>

int main() {
  float imc, altura, peso;
  
  printf ("Digite o seu peso: ");
  scanf ( "%f", &peso);
  printf ("Digite a sua altura: ");
  scanf ("%f", &altura);
  
 imc = peso/ (altura*altura);

  printf ("imc = %.2f", imc);
  
  return 0;
}
