#include <stdio.h>

int main() {
  float cachorro, racao;
  int dias;

  printf ("Digite o peso do cachorro em quilos: ");
  scanf("%f", &cachorro);
  printf ("Digite o peso da racao em quilos: ");
  scanf("%f", &racao);

  if (cachorro<=5 && cachorro>0){
    dias=racao*1000/60;
    printf("\nO pacote de racao ira durar %d dias", dias);
  }
  else if (cachorro<=10 && cachorro>5){
      dias=racao*1000/95;
      printf ("\nO pacote de racao ira durar %d dias", dias);
  }
  else if (cachorro<=15 && cachorro>11){
    dias=racao*1000/135;
    printf ("\nO pacote de racao ira durar %d dias", dias);
  }
  else if (cachorro<=20 && cachorro>=16){
    dias=racao*1000/170;
    printf ("\nO pacote de racao ira durar %d dias", dias);
  } 
  else if (cachorro>= 21){
    dias=racao*1000/215;
    printf ("\nO pacote de racao ira durar %d dias", dias);
  }
  
  return 0;
}
