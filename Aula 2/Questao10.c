#include <stdio.h>

int main() {
  int num, soma = 0, soma1 = 0, qtd = 0, qtd1 = 0, qtd2, soma2;
  float media, mediapar, mediaimpar;
  printf("Digite um numero positivo: ");
  scanf("%d", &num);

while (num > 0){
  soma = soma + num;
  qtd = qtd + 1;
    
if (num % 2 == 0){
  soma1 = soma1 + num; 
  qtd1 = qtd1 + 1;
}
printf("Digite um numero positivo: ");
scanf("%d", &num);
}

soma2 = soma - soma1;
qtd2 = qtd - qtd1;
mediapar = (float) soma1/ qtd1;
mediaimpar = (float) soma2 / qtd2;
media = (float) soma / qtd; 

printf("A media dos numeros digitados eh %.2f\nA media dos numeros pares eh %.2f\nA media dos numeros impares eh %.2f", media, mediapar, mediaimpar);
 
return 0;
}
