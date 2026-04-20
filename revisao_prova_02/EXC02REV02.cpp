/*
Crie um programa que:

-Declare uma matriz 5x5 de inteiros (#define TAM 5).

-Tenha uma procedure preencherMatriz(int mat[][TAM], int linhas) que preencha a matriz com
números aleatórios de 1 a 10.

-Tenha uma procedure imprimirMatriz(int mat[][TAM], int linhas) que imprima a matriz
formatada.

-Tenha uma function somarDiagonalPrincipal(int mat[][TAM], int tam) que retorne a soma dos
elementos da diagonal principal.

-Tenha uma function somarAbaixoDiagonal(int mat[][TAM], int tam) que retorne a soma de
todos os elementos que estão abaixo da diagonal principal.

-Na main, chame as funções e imprima a matriz, a soma da diagonal e a soma dos elementos
abaixo dela.
*/

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define tam 5

void preencherMatriz(int mat[][tam], int linhas) {
    srand(time(NULL));
    for (int i=0; i<linhas; i++) {
        for (int j=0; j<tam; j++) {
            mat[i][j] = (rand() % 10) + 1;
        }
    }
}

void imprimirMatriz(int mat[][tam], int linhas) {
    printf("--- MATRIZ 5x5 ---\n");
    for (int i=0; i<linhas; i++) {
        for (int j=0; j<tam; j++) {
            printf("%d  ", mat[i][j]);
        }
        printf("\n");
    }
}

int somarDiagonalPrincipal(int mat[][tam], int linhas) {
    int somaDP=0;
    for (int i=0; i<linhas; i++) {
        somaDP += mat[i][i];
    }

    return somaDP;
}

int somarAbaixoDiagonal(int mat[][tam]) {
    int somaAD=0;
    int x=0;
    for (int i=1; i<=4; i++) {                // linha
        for (int j=0; j<=x; j++) {            // coluna
            somaAD += mat[i][j];
        }
        x++;
    }

    return somaAD;
}

int main() {
    int linhas=5;
    int mat[linhas][tam];

    preencherMatriz(mat, linhas);
    imprimirMatriz(mat, linhas);
    int somaDP = somarDiagonalPrincipal(mat, linhas);
    int somaAD = somarAbaixoDiagonal(mat);

    printf("\nA soma da diagonal principal eh %d.\n", somaDP);
    printf("A soma dos valores abaixo da diag. principal eh %d.\n", somaAD);

    return 0;
}