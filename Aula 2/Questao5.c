#include <stdio.h>

int main() {
  float bruto, prestacao, porcentagem;
  printf("Insira o valor do salario bruto: ");
  scanf("%f", &bruto);
  printf("Insira o valor da prestacao: ");
  scanf("%f", &prestacao);

  porcentagem = bruto * 30/100;
    if (porcentagem >= prestacao){
      printf("\nO emprestimo pode ser concedido.");
    }
    else{
      printf("\nO emprestimo nao pode ser concedido.");
    }
  
  return 0;
}