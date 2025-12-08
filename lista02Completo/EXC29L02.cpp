/*
29. Solicite dois valores e apresente a soma com acréscimo de 18%.
*/

#include <stdio.h>
#include <stdlib.h>

int main() {
	
	float val1, val2, valFinal;
	
	printf("Digite um valor:\n");
	scanf(" %f", &val1);
	printf("Digite outro valor:\n");
	scanf(" %f", &val2);
	
	valFinal = (val1 + val2) * 1.18;
	printf("A soma dos valores %f e %f, mais um acrescimo de 18%% e de: %f", val1, val2, valFinal);
	
	return 0;
}