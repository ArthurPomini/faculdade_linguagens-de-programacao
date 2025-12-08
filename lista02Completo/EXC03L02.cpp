/*
2. Elabore um algoritmo que receba, por meio do teclado, dois valores,
um para a variável “a” e um para a variável “b”. Em seguida, faça os
passos que julgar necessário para que ao final, a variável “a” possua o
valor que inicialmente estava em “b” e a variável “b” possua o valor que
inicialmente estava em “a”. Traduza seu algoritmo para a linguagem C e
exiba os valores na tela.

*/
#include <stdio.h>
#include <stdlib.h>

int main() {
	
	int a, b;
	
	printf("Digite o valor da variavel A:\n");
	scanf(" %d", &a);
	
	printf("Digite o valor da variavel B\n");
	scanf(" %d", &b);
	
	a = a + b;
	b = a - b;
	a = a - b;
	
	printf("O valor de A e: %d\nO valor de B e: %d\n", a, b);
	system("pause");
}
