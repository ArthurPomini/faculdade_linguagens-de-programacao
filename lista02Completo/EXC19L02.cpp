/*
19. Leia 2 números e apresente a décima parte da subtração entre eles,
usando uma terceira variável.
*/

#include <stdio.h>
#include <stdlib.h>

int main() {
	
	int n1, n2, decParte;
	
	printf("Digite dois numeros inteiros:\nNumero 1:");
	scanf(" %d", &n1);
	printf("Numero 2:");
	scanf(" %d", &n2);
	
	decParte = (n1 - n2) / 10;
	
	printf("A decima parte da subtracao de %d e %d e de: %d", n1, n2, decParte);
	
	return 0;
}