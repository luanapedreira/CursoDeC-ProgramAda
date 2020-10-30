#include <stdio.h>

int main() {
  float raio, PI, area;

PI = 3.14;
  do {
    printf("Digite o valor do raio: ");
    scanf("%f", &raio);
    area = PI * raio * raio;
  } 
  while (raio <= 0);{
  printf("A area do circulo e: %.2f", area);
  }

return 0;
}
