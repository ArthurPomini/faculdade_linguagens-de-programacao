/*
21. Leia 5 números fornecidos pelo usuário e calcule a soma total.
*/

#include <stdio.h>
#include <stdlib.h>

int main() {
	
	int n1, n2, n3, n4, n5;
	
	printf("Digite dois numeros inteiros:\nNumero 1:");
	scanf(" %d", &n1);
	printf("Numero 2:");
	scanf(" %d", &n2);
	printf("Numero 3:");
	scanf(" %d", &n3);
	printf("Numero 4:");
	scanf(" %d", &n4);
	printf("Numero 5:");
	scanf(" %d", &n5);
	
	printf("A soma desses numeros e de: %d", n1 + n2 + n3 + n4 + n5);
	
	return 0;
}