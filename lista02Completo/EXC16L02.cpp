/*
16. Leia 3 notas e calcule a média aritmética.
*/

#include <stdio.h>
#include <stdlib.h>

int main() {
	
	float n1, n2, n3, media;
	
	printf("Vamos calcular sua media! Digite suas tres notas.\nNota1: ");
	scanf(" %f", &n1);
	printf("Nota2: ");
	scanf(" %f", &n2);
	printf("Nota3: ");
	scanf(" %f", &n3);
	
	media = (n1 + n2 + n3) / 3;
	
	printf("Sua media final e de: %f", media);
	
	return 0;
}