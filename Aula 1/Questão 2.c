#include <stdio.h>

int main () {
	float Km, ag1, ag2;
	
	printf("Quantos quil�metros ser�o percorridos? ");
	scanf("%f", &Km);
	
	ag1 = 62+(1.40*Km);
	ag2 = 80+(1.20*Km);
	
	printf("A primeira ag�ncia ir� cobrar %.2f e a segunda ag�ncia %.2f.", ag1, ag2);
	return 0;
}
