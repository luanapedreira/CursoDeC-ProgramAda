#include <stdio.h>

int main() {
  float M, D, desc, nv;
  printf("Digite o valor da mercadoria: ");
  scanf("%f", &M);
  printf("Insira a porcentagem do desconto: ");
  scanf("%f", &D);

  desc = M*D/100;
  nv = M - desc;

  printf("\nO valor do desconto é de: %.2f \nO novo valor da mercadoria é: %.2f", desc, nv);

  return 0;

}

