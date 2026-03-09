/*
Contexto: Você está criando uma ficha de produto para um sistema de e-commerce. O programa deve
coletar o nome, o preço e a quantidade inicial em estoque de um novo produto.
Proposta: Escreva um programa que leia o nome de um produto (uma única palavra), a quantidade em
estoque (inteiro) e o seu preço unitário (float). Ao final, exiba um resumo com todas as informações
coletadas.
Resultado Esperado (Exemplo de Execução):
--- Cadastro de Novo Produto ---
Digite o nome do produto (uma palavra):
Teclado
Digite a quantidade em estoque:
30
Digite o preço unitário: R$
150.99
--- Resumo do Produto Cadastrado ---
Produto: Teclado
Estoque: 30 unidades
Preço: R$ 150.99
*/

#include <stdlib.h>
#include <stdio.h>

int main() {
	
	char nome[5]; //%s
	int qestoque; //%d
	float preco; //%f
	
	printf("--- Seja Bem-vindo ao Cadastro de Produto ---\nQual o nome do produto que quer cadastrar(em uma so palavra)?\n");
	scanf(" %s", &nome);
	printf("Qual a quantidade no estoque?\n");
	scanf(" %d", &qestoque);
	printf("Qual o preco unitario?\nR$");
	scanf(" %f", &preco);
	printf("--- Produto Cadastrado! ---\nProduto: %s\nEstoque: %d unidades\nPreco: R$%f", nome, qestoque, preco);
	
	return 0;
}
