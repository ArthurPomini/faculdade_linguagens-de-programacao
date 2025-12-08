/*
9 Calcule e apresente a área de um círculo: Área = 3,1416 * R² (R² significa R * R)
*/

#include <stdio.h>
#include <stdlib.h>

int main() {
	
	float pi, raio, area;
	
	pi = 3.1416;
	
	printf("Para calcular a area do seu circulo, digite o raio:\n");
	scanf(" %f", &raio);
	
	area = pi * raio * raio;
	
	printf("A area do seu circulo e: %f", area);
	
	return 0;
}