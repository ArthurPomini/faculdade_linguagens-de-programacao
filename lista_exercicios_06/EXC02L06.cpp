/*
Exercicio 2.
Vetor + Procedure: Crie uma procedure void imprimirVetor(int vetor[], int tamanho) 
que recebe um vetor de inteiros e seu tamanho, e imprime todos os seus elementos 
na tela.
*/

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void imprimirVetor(int vetor[], int tamanho) {
    printf("\n--- VETOR ---\n");
    for (int i=0; i<tamanho; i++) {
        printf("%d\n", vetor[i]);
    }
}

int main() {
    int vetor[10];
    int tamanho=10;

    srand(time(NULL));
    for (int i=0; i<tamanho; i++) {
        vetor[i] = rand() % 100;
    }

    imprimirVetor(vetor, tamanho);

    system("pause");
    return 0;
}