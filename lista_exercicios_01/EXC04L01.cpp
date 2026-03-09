//Proposta: Escreva um programa que peça ao usuário para digitar a primeira letra do seu nome e seu
//sexo (M para Masculino, F para Feminino). Em seguida, exiba a letra e o sexo digitados.
//Exemplo de Execução:
//Digite a primeira letra do seu nome:
//J
//Digite seu sexo (M/F):
//M
//A inicial do seu nome e J e seu sexo e M.

#include <stdio.h>
#include <stdlib.h>


int main() {
	
	char letra[2], sexo[2];
	
	printf("Digite a primeira letra do seu nome: \n");
	scanf(" %s", &letra);
	printf("Digite o seu sexo(m/f): \n");
	scanf(" %s", &sexo);
	printf("A inicial do seu nome e %s e seu sexo e %s.", letra, sexo );
	return 0;
}

