/*
11. Calcule e apresente o volume de um cilindro: Volume = 3,1416 * R² * H
*/

#include <stdio.h>
#include <stdlib.h>

int main() {
	
	float pi, raio, altura, volume;
	
	pi = 3.1416;
	
	printf("Para calcular o volume do seu cilindro, digite o raio:\n");
	scanf(" %f", &raio);
	printf("Agora, digite a altura:\n");
	scanf(" %f", &altura);
	
	volume = pi * raio * raio * altura;
	
	printf("O volume do seu cilindro e: %f", volume);
	
	return 0;
}