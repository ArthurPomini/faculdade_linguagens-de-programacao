/*
6. Faça um programa para ler do teclado uma quantidade de segundos e
imprimir na tela a conversão para horas, minutos e segundos.
*/

#include <stdio.h>
#include <stdlib.h>

int main() {
	
	int valorDigitado, segundos, minutos, horas, resto;
	
	printf("--- Sistema de Conversao ---\nBem-vindo ao sistema de conversao. Aqui, voce pode converter um numero de segundos para minutos e horas.\nDigite um valor: ");
	scanf(" %d", &valorDigitado);
	
	//calculo
	horas = valorDigitado / 3600;
	resto = valorDigitado % 3600;
	minutos = resto / 60;
	segundos = resto % 60;
	
	printf("O valor digitado corresponde a: %d h %d m %d s", horas, minutos, segundos);
	
	return 0;
}