#include <stdio.h>

int main() {
 int placa, digito;
 printf("Digite a parte numerica da placa do carro: ");
 scanf ("%d", &placa);

 digito= placa % 10;

 if (digito == 1 || digito == 2){
   printf ("Voce nao pode circular na segunda-feira");
 }
 else if (digito == 3 || digito == 4){
   printf ("Voce nao pode circular na terca-feira");
 }
 else if (digito == 5 || digito == 6){
   printf ("Voce nao pode circular na quarta-feira");
 }
else if (digito == 7 || digito == 8){
   printf ("Voce nao pode circular na quinta-feira");
 }
else if (digito == 9 || digito == 0){
   printf ("Voce nao pode circular na sexta-feira");
 }
 
  return 0;
}
