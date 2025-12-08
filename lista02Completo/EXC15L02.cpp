/*
15. Calcule e apresente o volume de uma esfera: Volume = (4/3) * 3,1416 * R³
*/

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main() {
	
	float vol, raio, pi;
	
	pi = 3.1416;
	
	printf("Para calcular o volume da sua esfera, digite o seu raio:\n");
	scanf(" %f", &raio);
	
	vol = (4.0 / 3.0) * pi * pow(raio, 3);
	
	printf("O volume do seu prisma e: %f", vol);
	
	return 0;
}