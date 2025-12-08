/*
14. Calcule e apresente o volume de um prisma: Volume = L1 * L2 * L3
*/

#include <stdio.h>
#include <stdlib.h>

int main() {
	
	float vol, l1, l2, l3;
	
	printf("Para calcular o volume do seu prisma, digite a lateral 1, 2 e 3\nL1: ");
	scanf(" %f", &l1);
	printf("L2: ");
	scanf(" %f", &l2);
	printf("L3: ");
	scanf(" %f", &l3);
	
	vol = l1 * l2 * l3;
	
	printf("O volume do seu prisma e: %f", vol);
	
	return 0;
}