/*
23. Solicite um número inteiro e apresente o resto da divisão por 2 (usar operador MOD ou %).
*/

#include <stdio.h>
#include <stdlib.h>

int main() {
	
	int num, resultado;
	
	printf("Digite um numero inteiro:\n");
	scanf(" %d", &num);
	
	resultado = num % 2;
	
	printf("O resto da divisao de %d por 2 e: %d", num, resultado);
	
	return 0;
}