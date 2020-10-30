#include <stdio.h>

int main() {
  int qtd = 0, qtd1=0;
  float nota, soma = 0, media;
  printf("Digite uma nota entre 0 e 10: ");
  scanf("%f", &nota);
  	
	if (nota>= 7){
   	  qtd1= qtd1 + 1;
 	}
  	while (nota >= 0 &&  nota <= 10){
      soma = soma + nota; 
      qtd = qtd + 1;
    if(nota >= 7){
      qtd1 = qtd1 +1;
    }
    
    printf("Digite uma nota entre 0 e 10: ");
    scanf("%f", &nota);
   }
   media = (float) soma / qtd;
   printf("A media das notas inseridas eh: %.1f.\nA quantidade de notas maiores ou iguais a 7 eh: %d", media, qtd1);

return 0;
}
