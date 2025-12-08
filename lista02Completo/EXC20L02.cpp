/*
20. Faça o mesmo exercício anterior sem utilizar uma terceira variável.
*/

#include <stdio.h>
#include <stdlib.h>

int main() {
	
	int n1, n2;
	
	printf("Digite dois numeros inteiros:\nNumero 1:");
	scanf(" %d", &n1);
	printf("Numero 2:");
	scanf(" %d", &n2);
	
	printf("A decima parte da subtracao de %d e %d e de: %d", n1, n2, (n1 - n2) / 10);
	
	return 0;
}