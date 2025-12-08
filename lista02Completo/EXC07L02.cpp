/*
7. Solicite o nome e o salário de uma pessoa. Calcule e apresente o novo
salário com um aumento de 28,5%.

*/

#include <stdio.h>
#include <stdlib.h>

int main() {
	
	char nome[20];
	float salario;
	
	printf("Bom dia funcionario! Qual o seu salario?\n");
	scanf(" %f", &salario);
	printf("O seu novo salario e de: %f", salario * 1.285);
	
	return 0;
}