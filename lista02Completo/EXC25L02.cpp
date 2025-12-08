/*
25. Solicite 5 números e calcule a média ponderada, com pesos: 2, 4, 2, 5
e 3.
*/

#include <stdio.h>
#include <stdlib.h>

int main() {
	
	float n1, n2, n3, n4, n5, mediaTotal;
	
	printf("Digite um numero inteiro: ");
	scanf(" %f", &n1);
	printf("Digite outro numero inteiro: ");
	scanf(" %f", &n2);
	printf("Digite outro numero inteiro: ");
	scanf(" %f", &n3);
	printf("Digite outro numero inteiro: ");
	scanf(" %f", &n4);
	printf("Digite outro numero inteiro: ");
	scanf(" %f", &n5);
	
	mediaTotal = ((n1 * 2) + (n2 * 4) + (n3 * 2) + (n4 * 5) + (n5 * 3)) / 16; 
	
	printf("A media ponderada com os pesos 2, 4, 2, 5 e 3, respectivamente, e de: %f", mediaTotal);
	
	return 0;
}