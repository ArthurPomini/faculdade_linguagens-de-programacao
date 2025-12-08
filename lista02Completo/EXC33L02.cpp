/*
33. Solicite dois valores e calcule: Soma dos dois, com desconto de 58%
*/

#include <stdio.h>
#include <stdlib.h>

int main() {
	
	float val1, val2, calculo;
	
	printf("Digite um valor:\n");
	scanf(" %f", &val1);
	printf("Digite outro valor:\n");
	scanf(" %f", &val2);
	
	calculo = (val1 + val2) * 0.42;
	printf("A soma dos dois valores, com um desconto de 58%% e de: %f", calculo);
	
	
	return 0;
}