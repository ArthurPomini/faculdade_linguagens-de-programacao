//Proposta: Crie um programa que leia um número inteiro do usuário e, em seguida, calcule e exiba o
//dobro desse número.
//Exemplo de Execução:
//Digite um numero inteiro:
//15
//O dobro de 15 e: 30

#include <stdlib.h>
#include <stdio.h>

int main() {
	
	//variaveis
	int valor, valorDobro;
	
	printf("Digite o valor que queira dobrar: ");
	scanf("%d", &valor);
	valorDobro = valor * 2;
	printf("O dobro de %d e: %d \n", valor, valorDobro);
	system("pause");
	
	return 0;
}

