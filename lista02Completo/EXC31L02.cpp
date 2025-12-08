/*
31. Solicite o nome e salário de uma pessoa. Apresente o salário reduzido em 12,6%.
*/

#include <stdio.h>
#include <stdlib.h>

int main() {
	
	char nome[20];
	float salario, reajuste;
	
	printf("--- Sistema de Aumento ---\nBem vindo ao sistema de aumento de salario. Para comecar, digite o seu nome:\n");
	scanf(" %s", &nome);
	printf("Ola Sr(a) %s, por favor, digite o seu salario atual:\nR$ ", nome);
	scanf(" %f", &salario);
	
	reajuste = salario - (salario * 0.126);
	
	printf("--- ERROR 404 ---\nParabens %s! O seu novo salario com aumento e de: R$ %f.\nAs alteracoes ja foram realizadas e nao podem ser revertidas. Volte sempre.", nome, reajuste);
	
	
	return 0;
}