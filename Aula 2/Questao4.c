#include <stdio.h>

int main() {
  int idade, idioma;
  float altura;
  printf("Insira a sua idade: ");
  scanf("%d", &idade);
  printf("Insira a sua altura: ");
  scanf("%f", &altura);
  printf("Insira quantos idiomas voce fala com fluencia: ");
  scanf("%d", &idioma);

  if (idade>=24 && altura>=1.70 && idioma>=2){
    printf("\nVoce atende aos requisitos da companhia aerea");
  }
  else{
    printf("\nVoce nao atende aos requisitos da companhia aerea");
  }
  
  return 0;
}
