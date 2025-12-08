/*
35. Solicite o nome, idade, cidade e salário. Apresente todos os dados
com o salário reajustado em 9,45%.
*/

#include <stdio.h>
#include <stdlib.h>

int main() {
	
	char nome[20], cidade[20];
	int idade;
	float salario, reajuste;
	
	printf("--- Sistema de Aumento ---\nBem vindo ao sistema de aumento de salario. Para comecar, digite o seu nome:\n");
	scanf(" %s", &nome);
	printf("Por favor, digite a sua idade:\n");
	scanf(" %d", &idade);
	printf("Por favor, digite a sua cidade:\n");
	scanf(" %s", &cidade);
	printf("Ola Sr(a) %s, por favor, digite o seu salario atual:\nR$ ", nome);
	scanf(" %f", &salario);
	
	reajuste = salario + (salario * 0.0945);
	
	printf("--- Dados Salvos ---\n");
	printf("Nome: %s\n", nome);
	printf("Idade: %d\n", idade);
	printf("Cidade: %s\n", cidade);
	printf("Salario Antes: %f\n", salario);
	printf("Salario Reajustado: %f\n", reajuste);
	
	return 0;
}