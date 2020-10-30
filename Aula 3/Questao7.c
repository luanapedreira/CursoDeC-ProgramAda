#include <stdio.h>
#define TOTALALUNO 50
#define TOTALNOTA 5

int main() {
  float notas[TOTALALUNO][TOTALNOTA], media[TOTALALUNO], soma = 0, nota1, nota2, nota3, nota4, nota5, maiormedia;
  int aluno, nota, qtd = 0;

  for(aluno = 0; aluno < TOTALALUNO; aluno++){
    for(nota = 0; nota < TOTALNOTA; nota++) {
      printf("\nInsira a %d nota do aluno %d: ", nota + 1, aluno + 1);
      scanf("%f", &notas[aluno][nota]);
    }
  } 

  for(aluno = 0; aluno < TOTALALUNO; aluno++){
    nota1 = notas[aluno][0];
    nota2 = notas[aluno][1];
    nota3 = notas[aluno][2];
    nota4 = notas[aluno][3];
    nota5 = notas[aluno][4];
    soma = nota1 + nota2 + nota3 + nota4 + nota5;
    media[aluno] = soma / 5;
      
    if (media[aluno] > maiormedia) {
      maiormedia = media[aluno];
    }
    if(media[aluno] >= 7){
      qtd = qtd +1;
    }
  }

  for(aluno = 0; aluno < TOTALALUNO; aluno++){
      printf("\nA media do aluno %d foi: %5.1f\n", aluno + 1, media[aluno]);
  }

  printf("\nA maior nota foi do aluno %d, com media: %.1f.", aluno, maiormedia);
  printf("\nA quantidade de alunos com nota maior ou igual a 7 foi: %d", qtd);

  return 0;
}
