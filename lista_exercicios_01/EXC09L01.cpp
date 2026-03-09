/*
Contexto: Uma loja quer um programa simples para registrar a avaliação do atendimento. As opções
são: 'B' para Bom, 'R' para Regular e 'P' para Péssimo.
Proposta: Crie um programa que peça ao usuário para avaliar o atendimento digitando uma das três
letras. O programa deve ler o caractere e exibir uma mensagem de agradecimento confirmando a
avaliação.
Resultado Esperado (Exemplo de Execução):
--- Avaliação de Atendimento ---
Por favor, avalie nosso atendimento (B - Bom, R - Regular, P -
Péssimo):
B
Obrigado por sua avaliação: B.
*/

#include <stdlib.h>
#include <stdio.h>

int main() {
	
	char avaliar[5];
	
	printf("--- Sistema de Avaliacao ---\nOla Cliente! A sua avaliacao e muito importante para nos.\nDigite B para Bom, R para Regular e P para Pessimo: ");
	scanf(" %s", &avaliar);
	printf("Obrigado por sua avaliacao: %s", avaliar);
	
	return 0;
}
