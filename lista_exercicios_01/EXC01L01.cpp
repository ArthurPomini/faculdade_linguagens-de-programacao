//Proposta: Escreva um programa que pergunte ao usuário o seu primeiro nome e, em seguida, exiba uma
//mensagem de boas-vindas personalizada com o nome que ele digitou.
//Exemplo de Execução:
//Digite seu primeiro nome:
//Aparecido
//Olá, Aparecido! Seja bem-vindo ao mundo da programação em C.

#include <stdlib.h>
#include <stdio.h>

int main() {
	
	char nome[40];
	
	printf("Digite seu primeiro nome: ");
	scanf(" %s", &nome);
	printf("Ola, %s! Seja bem-vindo ao mundo da programacao em C.", nome);
	return 0;
}

