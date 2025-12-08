/*
18. Leia 3 números e calcule: (primeiro número + terceiro número) * segundo número
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
	
	printf("O calculo para: (numero 1 + numero 3) * numero 2", n1, n2, n3);
	printf(" e de: %d", (n1 + n3) * n2);
	
	return 0;
}