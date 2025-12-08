/*
17. Leia 3 números inteiros e calcule a multiplicação entre eles.
*/

#include <stdio.h>
#include <stdlib.h>

int main() {
	
	int n1, n2, n3;
	
	printf("Digite tres numeros inteiros:\nNumero 1:");
	scanf(" %d", &n1);
	printf("Numero 2:");
	scanf(" %d", &n2);
	printf("Numero 3:");
	scanf(" %d", &n3);
	
	printf("A multiplicacao entre %d, %d e %d e de: %d", n1, n2, n3, n1 * n2 * n3);
	
	return 0;
}