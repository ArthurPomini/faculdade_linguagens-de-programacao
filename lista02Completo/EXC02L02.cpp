/*
3. Faça um programa em C para trocar o valor de duas variáveis inteiras
sem utilizar nenhuma variável auxiliar.
*/

#include <stdio.h>
#include <stdlib.h>

int main() {
	
	int a, b, c;
	
	printf("--- Inversao de Valores ---\nDigite um valor para A:\n");
	scanf(" %d", &a);
	printf("Digite um valor para B:\n");
	scanf(" %d", &b);
	
	printf("Valores Registrados! Aperte Enter para realizar a inversao dos valores.\n");
	
	c=a;
	a=b;
	b=c;
	
	printf("Inversao realizada com sucesso! Seus novos valores sao:\nA: %d\nB: %d", a, b);
	
	return 0;
}