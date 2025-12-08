/*
8 Calcule e apresente a área de um triângulo: Área = (base * altura) / 2
*/

#include <stdio.h>
#include <stdlib.h>

int main() {
	
	float area, base, altura;
	
	printf("Bem vindo a calculadora de triangulos! Digite a base e altura do seu triangulo:\n");
	scanf(" %f", &base);
	scanf(" %f", &altura);
	
	area = (base * altura) / 2;
	
	printf("A Area do seu triangulo e: %f", area);
	
	return 0;
}