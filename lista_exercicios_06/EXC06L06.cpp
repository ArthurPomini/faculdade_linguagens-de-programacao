/*
Exercicio 2.2.
Estatísticas de Vetor: Crie uma procedure void calcularEstatisticas(int vetor[], int 
tamanho, float *media, int *maior, int *menor) que recebe um vetor e três ponteiros. 
A procedure deve calcular a média, o maior e o menor valor do vetor e armazenar os 
resultados nas variáveis apontadas pelos ponteiros
*/

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <time.h>

void calcularEstatisticas(int vetor[], int tamanho, float *media, int *maior, int *menor) {
    int somaTotal=0;

    for (int i=0; i<tamanho; i++) {
        vetor[i] = rand() % 100;
        somaTotal += vetor[i];
        printf("%d\n", vetor[i]);
    }

    *maior = vetor[0];
    *menor = vetor[0];
    *media = somaTotal / tamanho;

    for (int j=0; j<tamanho; j++) {
        if (vetor[j] > *maior)
            *maior = vetor[j];
        if (vetor[j] < *menor)
            *menor = vetor[j];
    }

    printf("\nMedia do vetor: %.0f\n", *media);    
    printf("\nMaior valor do vetor: %d\n", *maior);
    printf("\nMenor valor do vetor: %d\n", *menor);

}

int main() {
    setlocale(LC_ALL, "Portuguese_Brazil");
    srand(time(NULL));

    int vetor[10];
    int tamanho=10;
    float media;
    int maior;
    int menor;

    calcularEstatisticas(vetor, tamanho, &media, &maior, &menor);

    system("pause");
    return 0;
}