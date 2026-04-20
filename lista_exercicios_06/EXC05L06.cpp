/*
Exercicio 2.1.
Busca em Vetor: Crie uma função int buscarValor(int vetor[], int tamanho, int 
valorBuscado) que retorna o índice da primeira ocorrência de valorBuscado no vetor, 
ou -1 se o valor não for encontrado.
*/

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int buscaValor(int vetor[], int tamanho, int valorBuscado) {
    for (int i=0; i<tamanho; i++) {
        if (vetor[i] == valorBuscado) {
            return i;
        }
    }
    return -1;
}

int main() {
    srand(time(NULL));

    int vetor[10];
    int tamanho=10;
    int valorBuscado;
    for (int i=0; i<tamanho; i++) {
        vetor[i] = rand() % 100;
    }
    printf("Digite um valor para buscar no vetor: ");
    scanf(" %d", &valorBuscado);

    if (buscaValor(vetor, tamanho, valorBuscado) == -1) {
        printf("Valor nao encontrado.\n");
    } else {
        printf("Valor encontrado!\n");
    }

    return 0;
}