/*
Contexto: Você está em um restaurante com amigos e quer criar um programa simples para calcular o
valor da gorjeta do garçom.
Proposta: Escreva um programa que leia o valor total da conta (um número com casas decimais) e a
porcentagem da gorjeta que vocês desejam dar (ex: 10 para 10%). O programa deve calcular e exibir o
valor da gorjeta e o valor total da conta com a gorjeta.
Resultado Esperado (Exemplo de Execução):
--- Calculadora de Gorjeta ---
Digite o valor total da conta: R$
80.50
Digite a porcentagem da gorjeta (ex: 10):
10
Valor da gorjeta: R$ 8.05
Valor total a pagar: R$ 88.55
*/

#include <stdlib.h>
#include <stdio.h>

int main() {
	
	float conta, gorjeta;
	
	printf("Qual o valor total da conta? R$");
	scanf(" %f", &conta);
	printf("Qual a porcentagem da gorjeta? (ex: 10%%)");
	scanf(" %f", &gorjeta);
	printf("Valor da gorjeta: R$ %f\nValor total a pagar: R$ %f", gorjeta, conta + (conta * gorjeta/100));
	
	return 0;
}
