/*
1. Crie um programa em C que permita fazer a conversão cambial entre
Reais e Dólares. Considere como taxa de câmbio US$1,0 = R$5,30. Leia
um valor em Reais e mostre o correspondente em Dólares.
*/

#include <stdio.h>
#include <stdlib.h>

int main() {
	
	//variaveis
	int moeda;
	float valor, cotDolar, cotReal;
	
	//cotacao das moedas
	cotDolar = 1.00;
	cotReal = 5.30;
	
	printf("--- Bem-vindo ao conversor de moedas! ---\nPor favor, digite 1 para Dolar ou 2 para Real:\n");
	scanf(" %d", &moeda);
	
	//se o valor selecionado for 1, sera selecionado dolar, senao sera valor 2, sera selecionado real, senao o programa da erro e pede para tentar novamente mais tarde.
	if(moeda == 1) {
		printf("Dolar escolhido! Agora, digite o valor que quer converter:\n");
		scanf(" %f", &valor);
		printf("DOLAR ----------> REAL\n$ %f ----------> R$ %f", valor, valor * cotReal);
		
		
	} else if(moeda == 2) {
		printf("Real escolhido! Agora, digite o valor que quer converter:\n");
		scanf(" %f", &valor);
		printf("REAL ----------> DOLAR\nR$ %f ----------> $ %f", valor, valor / cotReal);
		
	} else {
		printf("Opcao invalida! Tente novamente mais tarde.");
		exit(0);
		
	}
	
	return 0;
}