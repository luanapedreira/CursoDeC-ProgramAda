#include <stdio.h>

int main() {
float peso;
int gotas;

printf ("Digite o peso da crian�a: ");
scanf ("%f", &peso);

gotas = peso/2 * 5;

printf("A quantidade de gotas a ser tomada �: %d", gotas);
return 0;
}
