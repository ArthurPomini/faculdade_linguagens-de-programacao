/*
13. Calcule e apresente o volume de uma pirâmide: Volume = (L * L) * (H / 3)
*/

#include <stdio.h>
#include <stdlib.h>

int main() {
	
	float volume, lateral, altura;
	
	printf("Para calcular o volume da sua piramide, digite a lateral:\n");
	scanf(" %f", &lateral);
	printf("Agora, digite a altura:\n");
	scanf(" %f", &altura);
	
	volume = (lateral * lateral) * (altura / 3);
	
	printf("O volume da sua piramide e: %f", volume);
	
	return 0;
}