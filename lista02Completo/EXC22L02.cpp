/*
22. Solicite o nome e a idade de 4 pessoas e calcule a média das idades.
*/

#include <stdio.h>
#include <stdlib.h>

int main() {
	
	char nome[20];
	int idade1, idade2, idade3, idade4;
	
	printf("Digite o seu nome:\n");
	scanf(" %s", &nome);
	printf("Ola %s! Digite a sua idade:\n", nome);
	scanf(" %d", &idade1);
	
	printf("Digite o seu nome:\n");
	scanf(" %s", &nome);
	printf("Ola %s! Digite a sua idade:\n", nome);
	scanf(" %d", &idade2);
	
	printf("Digite o seu nome:\n");
	scanf(" %s", &nome);
	printf("Ola %s! Digite a sua idade:\n", nome);
	scanf(" %d", &idade3);
	
	printf("Digite o seu nome:\n");
	scanf(" %s", &nome);
	printf("Ola %s! Digite a sua idade:\n", nome);
	scanf(" %d", &idade4);
	
	printf("A media das idades e de: %d", (idade1 + idade2 + idade3 + idade4) / 4);
	
	return 0;
}