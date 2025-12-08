//Proposta: Desenvolva um programa que leia duas notas de um aluno (números de ponto flutuante, ex:
//7.5) e calcule a média aritmética simples. Ao final, exiba as notas e a média calculada.
//Exemplo de Execução:
//Digite a primeira nota:
//8.0
//Digite a segunda nota:
//9.5
//A media entre 8.00 e 9.50 e: 8.75

#include <stdlib.h>
#include <stdio.h>

int main() {
	
	//variaveis
	float nota1, nota2, media;
	
	printf("Digite a primeira nota: ");
	scanf(" %f", &nota1);
	printf("Digite a segunda nota: ");
	scanf(" %f", &nota2);
	media = (nota1 + nota2) / 2;
	printf("A media entre as notas e: %f", media);
	
	system("pause");
	return 0;
}

