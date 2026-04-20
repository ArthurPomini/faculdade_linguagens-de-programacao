/*
Exercício 3: Cadastro de Produtos

Crie um programa que utilize a seguinte struct:

typedef struct {
int codigo;
char nome[50];
float preco;
int quantidade;
} Produto;

Crie uma procedure cadastrarProduto(Produto *p) que receba um ponteiro para um Produto e
peça ao usuário para preencher seus dados (código, nome, preço, quantidade).

Crie uma procedure imprimirProduto(Produto p) que receba um Produto (por valor) e imprima
seus dados de forma organizada.

Crie uma function calcularValorTotal(Produto p) que retorne o valor total do produto em
estoque (preço * quantidade).

Na main, declare um Produto, chame cadastrarProduto() e imprimirProduto(), e por fim
imprima o valor total em estoque
*/

#include <stdio.h>
#include <stdlib.h>

typedef struct {
    int codigo;
    char nome[50];
    float preco;
    int quantidade;
} Produto;

void cadastrarProduto(Produto *p) {
    printf("---{ CADASTRO DE PRODUTOS }---\n\n");
    printf("Codigo: ");
    scanf(" %d", &p->codigo);
    printf("Nome: ");
    scanf(" %49s", p->nome);
    printf("Preco: ");
    scanf(" %f", &p->preco);
    printf("Quantidade: ");
    scanf(" %d", &p->quantidade);
}

void imprimirProduto(Produto p) {
    printf("=== PRODUTO SELECIONADO ===\n\n");
    printf("Codigo: %d\n", p.codigo);
    printf("Nome: %s\n", p.nome);
    printf("Preco: %.2f\n", p.preco);
    printf("Quantidade: %d\n", p.quantidade);
}

float calcularValorTotal(Produto p) {
    return p.preco * p.quantidade;
}

int main() {

    Produto p;

    cadastrarProduto(&p);
    imprimirProduto(p);
    float valorTotal = calcularValorTotal(p);
    printf("\nO valor total do produto eh %.2f.\n", valorTotal);

    return 0;
}