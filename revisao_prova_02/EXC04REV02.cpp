/*
Usando a struct abaixo, crie um programa para gerenciar uma frota de 10 carros:

typedef struct {
char modelo[30];
char marca[30];
int ano;
float preco;
} Carro;

Crie uma procedure cadastrarFrota(Carro frota[], int tam) que use um loop para pedir ao
usuário os dados de todos os 10 carros.

Crie uma procedure imprimirFrota(Carro frota[], int tam) que imprima os dados de todos os
carros.

Crie uma function buscarMaisCaro(Carro frota[], int tam) que retorne o índice (a posição no
vetor) do carro mais caro.

Crie uma procedure imprimirPorAno(Carro frota[], int tam, int ano_busca) que imprima todos
os carros fabricados no ano_busca.

Na main, crie o vetor de 10 Carros, chame cadastrarFrota(), imprimirFrota(), depois encontre e
imprima os dados do carro mais caro (usando o índice retornado pela função 3), e por fim
peça ao usuário um ano e chame imprimirPorAno().
*/

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

typedef struct {
    char modelo[30];
    char marca[30];
    int ano;
    float preco;
} Carro;

void cadastrarFrota(Carro frota[], int tam) {
    system("cls");
    
    printf("=== CADASTRO DOS CARROS ===\n");
    for (int i=0; i<tam; i++) {
        printf("\nCarro %d\n", i+1);
        printf("\tModelo: ");
        scanf(" %29s", frota[i].modelo);
        printf("\tMarca: ");
        scanf(" %29s", frota[i].marca);
        printf("\tAno: ");
        scanf(" %4d", &frota[i].ano);
        printf("\tPreço: ");
        scanf(" %f", &frota[i].preco);
    }
}

void imprimirFrota(Carro frota[], int tam) {
    system("cls");
    
    printf("=== CARROS CADASTRADOS ===\n");
    for (int i=0; i<tam; i++) {
        printf("\nCarro %d:\n", i+1);
        printf("\tModelo: %s\n", frota[i].modelo);
        printf("\tMarca: %s\n", frota[i].marca);
        printf("\tAno: %4d\n", frota[i].ano);
        printf("\tPreço: %.2f\n", frota[i].preco);
    }
}

int buscarMaisCaro(Carro frota[], int tam) {
    float maior = frota[0].preco;
    for (int i=0; i<tam; i++) {
        if (frota[i].preco > maior)
            maior = frota[i].preco;
    }
    return maior;
}

void imprimirPorAno(Carro frota[], int tam, int ano_busca) {
    system("cls");

    int x;
    printf("=== BUSCAR CARROS DO ANO %4d ===\n", ano_busca);
    for (int i=0; i<tam; i++) {
        if (frota[i].ano == ano_busca) {
            printf("\nCarro %d\n", i+1);
            printf("\tModelo: %s\n", frota[i].modelo);
            printf("\tMarca: %s\n", frota[i].marca);
            printf("\tAno: %d\n", frota[i].ano);
            printf("\tPreço: %.2f\n", frota[i].preco);
        } else {
            x++;
        }
    }
    if (x > 2) {
        printf("\nVeículos de %4d NÃO encontrados.\n", ano_busca);
    }
}

int main() {
    setlocale(LC_ALL, "Portuguese_Brazil");

    Carro frota[3];
    int tam=3;
    int opcao;
    float maior=0;

    do {
        system("cls");

        printf("+--------------WEBMOTORS--------------+\n");
        printf("| 1 - Cadastrar Frota de Carros       |\n");
        printf("| 2 - Imprimir Frota de Carros        |\n");
        printf("| 3 - Buscar o Carro Mais Caro        |\n");
        printf("| 4 - Buscar Carro por Ano            |\n");
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
                cadastrarFrota(frota, tam);
                system("pause");
                break;
            case 2:
                imprimirFrota(frota, tam);
                system("pause");
                break;
            case 3:
                maior = buscarMaisCaro(frota, tam);
                printf("\nO carro de maior valor custa: %.2f.\n", maior);
                system("pause");
                break;
            case 4:
                int ano_busca;
                printf("\nAno do carro: ");
                scanf(" %4d", &ano_busca);
                imprimirPorAno(frota, tam, ano_busca);
                system("pause");
            default:
                printf("\nOpção Inválida.\n");       
        }
    } while (opcao != 0);


    return 0;
}