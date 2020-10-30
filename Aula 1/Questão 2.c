#include <stdio.h>

int main () {
	float Km, ag1, ag2;
	
	printf("Quantos quilômetros serão percorridos? ");
	scanf("%f", &Km);
	
	ag1 = 62+(1.40*Km);
	ag2 = 80+(1.20*Km);
	
	printf("A primeira agência irá cobrar %.2f e a segunda agência %.2f.", ag1, ag2);
	return 0;
}
