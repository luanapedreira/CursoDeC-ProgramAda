#include <stdio.h>

int main() {
  int idade;
  float peso;
  printf("Insira a sua idade: ");
  scanf("%d", &idade);
  printf("Insira o seu peso: ");
  scanf("%f", &peso);

if (idade>= 18 && idade<=65 && peso>=50){
  printf("\nVoce pode doar sangue");
}
else{
  printf("\nVoce nao pode doar sangue");
}
   
  return 0;
}
