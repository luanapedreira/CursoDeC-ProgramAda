#include <stdio.h>

int main() {
  int qdd, dias, anos, meses;

  printf("Digite a quantidade de dias que voc� viveu: ");
  scanf("%d", &qdd);

 anos= qdd/365;
 meses= (qdd-(anos*365))/30;
 dias= qdd-(anos*365)-(meses * 30);
 
 printf ("Voc� tem %d anos, %d meses e %d dias", anos, meses, dias);
 
 return 0;
}
