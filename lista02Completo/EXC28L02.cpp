/*
28. Solicite um valor e apresente 40% desse valor.
*/

#include <stdio.h>
#include <stdlib.h>

int main() {
	
	float valor;
	
	printf("Digite um valor:\n");
	scanf(" %f", &valor);
	
	printf("40%% de %f e: %f", valor, valor * 0.4);
	
	return 0;
}