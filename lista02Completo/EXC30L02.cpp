/*
30. Solicite três valores e apresente a soma de: 46% do primeiro + 31% do segundo + 14% do terceiro.
*/

#include <stdio.h>
#include <stdlib.h>

int main() {
	
	float val1, val2, val3, valFinal;
	
	printf("Digite um valor:\n");
	scanf(" %f", &val1);
	printf("Digite outro valor:\n");
	scanf(" %f", &val2);
	printf("Digite um terceiro valor:\n");
	scanf(" %f", &val3);
	
	valFinal = (val1 * 0.46) + (val2 * 0.31) + (val3 * 0.14);
	printf("Tirando 46%% do primeiro valor, 31%% do segundo e 14%% do terceiro, obtemos: %f", valFinal);
	
	return 0;
}