#include <stdio.h>

int main() {
float peso;
int gotas;

printf ("Digite o peso da criança: ");
scanf ("%f", &peso);

gotas = peso/2 * 5;

printf("A quantidade de gotas a ser tomada é: %d", gotas);
return 0;
}
