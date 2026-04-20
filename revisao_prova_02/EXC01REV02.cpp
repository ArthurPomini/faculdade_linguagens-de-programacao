/*
Exercicio 1.1.
Crie um programa que:

-Tenha uma procedure preencherVetor(int vet[], int tam) que preencha um vetor com números
inteiros aleatórios de 1 a 100.

-Tenha uma procedure imprimirVetor(int vet[], int tam) que imprima o vetor.

-Tenha uma function calcularMedia(int vet[], int tam) que retorne a média (float) dos valores
no vetor.

-Tenha uma function encontrarMaior(int vet[], int tam) que retorne o maior valor presente no
vetor.

-Na main, declare um vetor de 20 posições, chame as funções para preenchê-lo, imprimi-lo, e
depois exiba a média e o maior valor encontrado
*/

#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <locale.h>

void preencheVetor(int vet[], int tam) {
    srand(time(NULL));
    for (int i=0; i<tam; i++) {
        vet[i] = rand() % 100;
    }
}

void imprimirVetor(int vet[], int tam) {
    printf("VETOR DE 20 CASAS\n");
    for (int i=0; i<tam; i++) {
        printf("%d  -  %d\n", i, vet[i]);
    }
}

float calcularMedia(int vet[], int tam) {
    float media=0;
    int soma=0;

    for (int i=0; i<tam; i++) {
        soma += vet[i];
    }

    media = soma / tam;
    return media;
}

int encontrarMaior(int vet[], int tam) {
    int maior;

    maior = vet[0];
    for (int i=0; i<tam; i++) {
        if (vet[i] > maior)
            maior = vet[i];
    }

    return maior;
}

int main() {
    setlocale(LC_ALL, "Portuguese_Brazil");

    int vet[20];
    int tam=20;

    preencheVetor(vet, tam);
    imprimirVetor(vet, tam);
    float media = calcularMedia(vet, tam);
    int maior = encontrarMaior(vet, tam);

    printf("\nA média dos valores do vetor é %.2f.\n", media);
    printf("O maior valor do vetor é %d.\n", maior);
    
    return 0;
}