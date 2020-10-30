#include "stdio.h"
int main() {
  int voto, cand1 = 0, cand2 = 0, cand3 = 0, cand4 = 0, branco = 0, nulo = 0, contador, maiorvoto = 0;
  float pcand1, pcand2, pcand3, pcand4;
  printf("Digite 1 para votar no primeiro candidato.");
  printf("\nDigite 2 para votar no segundo candidato.");
  printf("\nDigite 3 para votar no terceiro candidato.");
  printf("\nDigite 4 para votar no quarto candidato.");
  printf("\nDigite 5 para votar em branco.");
  printf("\nDigite qualquer outro numero para votar nulo.");
  
  for (contador = 1; contador <= 2000; contador++){
    printf("\nInsira o numero do seu voto: ");
    scanf("%d", &voto);
    switch (voto){
      case 1:
        cand1++;
        if(cand1 > maiorvoto)
          maiorvoto = cand1;
        break;
      case 2:
        cand2++;
        if(cand2 > maiorvoto)
          maiorvoto = cand2;
        break;
      case 3:
        cand3++;
        if(cand3 > maiorvoto)
          maiorvoto = cand3;
        break;
      case 4:
        cand4++;
        if(cand4 > maiorvoto)
          maiorvoto = cand4;
        break;
      case 5:
        branco++;
        break;
      default:
        nulo++;
        break;
    }
  }
  pcand1 = (float) cand1 / 2000 * 100;
  pcand2 = (float) cand2 / 2000 * 100;
  pcand3 = (float) cand3 / 2000 * 100;
  pcand4 = (float) cand4 / 2000 * 100;

  printf("\nO candidato 1 teve %.2f%% de votos.\nO candidato 2 teve %.2f%% votos.\nO candidato 3 teve %.2f%% de votos.\nO candidato 4 teve %.2f%% de votos\nTiveram %d votos em branco.\nTiveram %d votos nulos", pcand1, pcand2, pcand3, pcand4, branco, nulo);
  
  if(cand1 == maiorvoto){
    printf("\nO primeiro candidato obteve a maior quantidade de votos.");
  }
  if(cand2 == maiorvoto){
    printf("\nO segundo candidato obteve a maior quantidade de votos");
  }
  if(cand3 == maiorvoto){
    printf("\nO terceiro candidato obteve a maior quantidade de votos");
  }
  if(cand4 == maiorvoto){
    printf("\nO quarto candidato obteve a maior quantidade de votos");
  }

  return 0;
}