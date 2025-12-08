/*
4. Escreva um programa que leia um valor de despesa de restaurante, o
valor da gorjeta (em porcentagem) e o número de pessoas para dividir a
conta. Imprima o valor que cada um deve pagar. Assuma que a conta será
dividida igualmente.
*/

#include <stdio.h>
#include <stdlib.h>

int main() {
	
	int numPessoas;
	float gorjeta, conta, contaTotal;
	
	printf("Digite o numero de pessoas presentes: \n");
	scanf(" %d", &numPessoas);
	printf("Digite o valor da conta: \n");
	scanf(" %f", &conta);
	printf("Digite o valor da gorjeta (em porcentagem): \n%%");
	scanf(" %f", &gorjeta);
	
	contaTotal = ((gorjeta / 100) + 1) * conta / numPessoas;
	
	printf("O valor que cada pessoa devera pagar e de: %f", contaTotal);
		
	return 0;
}