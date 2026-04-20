/*
Exercicio 3.
Matriz + Procedure: Crie uma procedure void preencherMatriz(int matriz[][5], int 
linhas) que recebe uma matriz de inteiros e o número de linhas, e solicita ao usuário 
que digite os valores para preenchê-la.
*/

#include <stdio.h>
#include <stdlib.h>

void preencherMatriz(int matriz[][5], int linhas) {
    printf("Preencha os valores da matriz: \n");
    for (int i=0; i<linhas; i++) {
        for (int j=0; j<5; j++) {
            printf("%dx%d: ", i+1, j+1);
            scanf(" %d", &matriz[i,j]);
        }
        printf("\n");
    }
}

int main() {
    int linhas;
    int matriz[linhas][5];

    printf("Digite o numero de linhas da matriz: ");
    scanf(" %d", &linhas);
    preencherMatriz(matriz, linhas);

    return 0;
}