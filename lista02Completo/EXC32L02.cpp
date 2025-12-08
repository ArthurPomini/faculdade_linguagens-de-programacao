/*
32. Solicite nome, idade e sexo (M, F ou O). Calcule e apresente apenas o
valor do aumento salarial de 24,5%.
*/

#include <stdio.h>
#include <stdlib.h>

int main() {
	
	char nome[20], sexo[20];
	float salario, reajuste;
	
	printf("--- Sistema de Aumento ---\nBem vindo ao sistema de aumento de salario. Para comecar, digite o seu nome:\n");
	scanf(" %s", &nome);
	printf("Por favor, digite o seu sexo (M, F ou O):\n");
	scanf(" %s", &sexo);
	printf("Ola Sr(a) %s, por favor, digite o seu salario atual:\nR$ ", nome);
	scanf(" %f", &salario);
	
	reajuste = salario + (salario * 0.245);
	
	printf("--- Transacao Realizada com Sucesso ---\nParabens %s! O seu novo salario com aumento de 24,5%% e de: R$ %f.\nAs alteracoes ja foram realizadas e nao podem ser revertidas. Volte sempre.", nome, reajuste);
	
	
	return 0;
}