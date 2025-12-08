/*
34. Solicite dois valores, calcule a soma entre eles e apresente o resto da
divisão por 3.
*/

#include <stdio.h>
#include <stdlib.h>

int main() {
	
	int val1, val2, calculo;
	
	printf("Digite um valor:\n");
	scanf(" %d", &val1);
	printf("Digite outro valor:\n");
	scanf(" %d", &val2);
	
	calculo = (val1 + val2) % 3;
	printf("O resto da divisao da soma dos dois valores e: %d", calculo);
	
	return 0;
}