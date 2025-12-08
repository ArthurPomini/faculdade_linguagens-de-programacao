/*
10. Calcule e apresente o perímetro de um círculo: Perímetro = 3,1416 *
D, onde D = 2 * R
*/

#include <stdio.h>
#include <stdlib.h>

int main() {
	
	float pi, raio, diam, perim;
	
	pi = 3.1416;
	
	printf("Para calcular o perimetro do seu circulo, digite o raio:\n");
	scanf(" %f", &raio);
	
	diam = 2 * raio;
	perim = pi * diam;
	
	printf("O perimetro do seu circulo e: %f", perim);
	
	return 0;
}