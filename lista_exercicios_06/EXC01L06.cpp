/*
Exercício 1.
Vetor + Função: Crie uma função int maiorElemento(int vetor[], int tamanho) que 
recebe um vetor de inteiros e seu tamanho, e retorna o maior valor presente no vetor
*/

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int maiorElemento(int vetor[10], int tamanho) {
    
    int ma;
    ma = vetor[0];
    for (int j=0; j<tamanho; j++) {
        if (vetor[j] > ma)
            ma = vetor[j];
    }

    return ma;
}

int main() {
    int vetor[10];
    int tamanho=10;

    srand(time(NULL));
    for (int i=0; i<tamanho; i++) {
        vetor[i] = rand() % 100;
    }

    int picles;
    picles = maiorElemento(vetor, tamanho);
    printf("O maior picles eh: %d\n", picles);

    system("pause");
    return 0;
}