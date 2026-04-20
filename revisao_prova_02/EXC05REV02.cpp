/*
Exercício 5: Persistência de Produtos

Baseado no Exercício 3, modifique seu programa:

Crie um vetor global (ou na main) Produto estoque[50]; e uma variável int totalProdutos = 0;.

Crie um Menu na main com as seguintes opções:

Cadastrar Produto: Chama a cadastrarProduto() (do ex. 3) e armazena o novo
produto no vetor estoque na posição totalProdutos. Incrementa totalProdutos.

Listar Produtos: Percorre o vetor estoque (de 0 a totalProdutos) e chama
imprimirProduto() para cada um.

Salvar Estoque: Cria uma procedure salvarEstoque(Produto estoque[], int total) que
abre um arquivo estoque.dat em modo "wb" e usa fwrite para salvar o vetor estoque
(do índice 0 até total) no disco.

Carregar Estoque: Cria uma function carregarEstoque(Produto estoque[]) que abre
estoque.dat em modo "rb" e usa fread (em um loop) para preencher o vetor estoque.
A função deve retornar o número de produtos que foram lidos, atualizando a variável
totalProdutos na main.
Sair.

O programa deve carregar o estoque (opção 4) automaticamente ao inicia
*/

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

typedef struct {
    int codigo;
    char nome[50];
    float preco;
    int quantidade;
} Produto;

void cadastrarProduto(Produto estoque[], int total) {
    system("cls");

    printf("---{ CADASTRO DE PRODUTOS }---\n\n");
    printf("Codigo: ");
    scanf(" %d", &estoque[total].codigo);
    printf("Nome: ");
    scanf(" %49s", estoque[total].nome);
    printf("Preco: ");
    scanf(" %f", &estoque[total].preco);
    printf("Quantidade: ");
    scanf(" %d", &estoque[total].quantidade);
}

void imprimirProduto(Produto estoque[], int total) {
    system("cls");

    printf("=== LISTANDO PRODUTOS ===\n\n");
    for (int i=0; i<total; i++) {
        printf("Produto %d\n", i+1);
        printf("\tCodigo: %d\n", estoque[i].codigo);
        printf("\tNome: %s\n", estoque[i].nome);
        printf("\tPreco: %.2f\n", estoque[i].preco);
        printf("\tQuantidade: %d\n", estoque[i].quantidade);
    }
    system("pause");
}


void salvarEstoque(Produto estoque[], int total) {
    system("cls");

    printf("\nSalvando Estoque...\n\n");
    for (int i=0; i<total; i++) {
        printf("Produto %d\n", i+1);
        printf("\tCodigo: %d\n", estoque[i].codigo);
        printf("\tNome: %s\n", estoque[i].nome);
        printf("\tPreco: %.2f\n", estoque[i].preco);
        printf("\tQuantidade: %d\n", estoque[i].quantidade);
    }
    
    FILE *arquivo = fopen("estoque.dat", "wb");

    if (arquivo == NULL) {
        printf("\nErro no arquivo!\n");
        return;
    }

    fwrite(estoque, sizeof(Produto), total, arquivo);
    fclose(arquivo);
    printf("\nEstoque salvo com sucesso!\n");
    system("pause");
}

int carregarEstoque(Produto estoque[]) {
    FILE *arquivo = fopen("estoque.dat", "rb");

    if (arquivo == NULL) {
        printf("\nArquivo vaziou ou corrompido.\n");
        system("pause");
        return 0;
    }

    int contador = 0;
    
    while (fread(&estoque[contador], sizeof(Produto), 1, arquivo) == 1) {
        contador++;
    }

    fclose(arquivo);

    return contador;
}

int main() {
    setlocale(LC_ALL, "Portuguese_Brazil");

    Produto estoque[50];
    int totalProdutos = 0;
    int opcao;
    int lidos=0;

    do {
        system("cls");

        printf("+------------MENU PRODUTOS------------+\n");
        printf("| 1 - Cadastrar Produto               |\n");
        printf("| 2 - Listar Produtos                 |\n");
        printf("| 3 - Salvar Estoque                  |\n");
        printf("| 4 - Carregar Estoque                |\n");
        printf("| 0 - Sair                            |\n");
        printf("+-------------------------------------+\n");
        printf("\n");
        
        printf("  Opção: ");
        scanf(" %1d", &opcao);

        switch(opcao) {
            case 0:
                printf("\nSaindo do sistema...\n");
                break;
            case 1:
                cadastrarProduto(estoque, totalProdutos);
                totalProdutos++;
                break;
            case 2:
                imprimirProduto(estoque, totalProdutos);
                break;
            case 3:
                salvarEstoque(estoque, totalProdutos);
                break;
            case 4:
                lidos = carregarEstoque(estoque);
                printf("\nSucesso! Foram carregados %d produtos.\n", lidos);
                system("pause");
                break;
            default:
                printf("\nOpção Inválida.\n");       
        }
    } while (opcao != 0);


    return 0;
}