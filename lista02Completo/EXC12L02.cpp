/*
12. Calcule e apresente o volume de um cone: Volume = (3,1416 * R² * H) / 3
*/

#include <stdio.h>
#include <stdlib.h>

int main() {
	
	float pi, raio, altura, volume;
	
	pi = 3.1416;
	
	printf("Para calcular o volume do seu cone, digite o raio:\n");
	scanf(" %f", &raio);
	printf("Agora, digite a altura:\n");
	scanf(" %f", &altura);
	
	volume = (pi * raio * raio * altura) / 3;
	
	printf("O volume do seu cone e: %f", volume);
	
	return 0;
}