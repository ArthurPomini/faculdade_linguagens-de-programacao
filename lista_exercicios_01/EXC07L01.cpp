/*
Contexto: Você está desenvolvendo um programa para o controle de estoque de uma pequena loja. O
programa precisa calcular o total de itens restantes após uma venda.
Proposta: Crie um programa que leia a quantidade atual de um produto no estoque e a quantidade que
foi vendida. Calcule e exiba a quantidade de itens que restaram no estoque.
Resultado Esperado (Exemplo de Execução):
--- Controle de Estoque ---
Digite a quantidade atual do produto em estoque:
50
Digite a quantidade vendida:
12
Estoque atualizado: restam 38 unidades do produto.
*/

#include <stdlib.h>
#include <stdio.h>

int main() {
    
    //variaveis
    int qestoque, qvendido;
    
    printf("--- Controle de Estoque ---\nDigite a quantidade atual do produto em estoque: \n");
    scanf(" %d", &qestoque);
    printf("Digite a quantidade vendida: \n");
    scanf(" %d", &qvendido);
    
    if(qestoque < qvendido) {
    	printf("O estoque !");
	} else {
		printf("Estoque atualizado: restam %d unidades do produto", qestoque - qvendido);
	};
    
    return 0;
}
