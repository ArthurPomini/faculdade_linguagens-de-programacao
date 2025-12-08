/*
5. Uma empresa contrata um encanador a R$ 45,00 por dia. Faça um
programa que solicite o número de dias trabalhados pelo encanador e
imprima a quantia líquida que deverá ser paga, sabendo que são
descontados 8% para imposto de renda.
*/

#include <stdio.h>
#include <stdlib.h>

int main() {
	
	float encanador, valorPago;
	int diaTrabalhado;
	
	printf("Quantos dias o encanador trabalhou? \n");
	scanf(" %d", &diaTrabalhado);
	encanador = 45.00;
	valorPago = encanador * diaTrabalhado / 0.08;
	
	printf("O total a ser pago ao encanador e de: %f", valorPago);
	
	return 0;
}