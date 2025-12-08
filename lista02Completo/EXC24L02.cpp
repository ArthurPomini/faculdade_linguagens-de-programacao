/*
24. Solicite o nome, idade, profissão e salário de uma pessoa. Apresente
os dados e o valor descontado do salário com base em um plano de saúde
de 1,3%.
*/

#include <stdio.h>
#include <stdlib.h>

int main() {
	
	char nome[20], profissao[20];
	int idade;
	float salario, reajuste;
	
	printf("Bem-vindo! Escreva o seu nome:\n");
	scanf(" %s", &nome);
	printf("Escreva a sua idade:\n");
	scanf(" %d", &idade);
	printf("Escreva sua profissao:\n");
	scanf(" %s", &profissao);
	printf("Escreva o seu salario:\n");
	scanf(" %f", &salario);
	
	reajuste = salario - (13.0 / 1000.0) * salario;
	
	printf("--- Salario Reajustado! ---\nNome: %s\nIdade: %d\nProfissao: %s\nSalario antes do ajuste: %f\nSalario reajustado: %f\n", nome, idade, profissao, salario, reajuste);
	
	return 0;
}