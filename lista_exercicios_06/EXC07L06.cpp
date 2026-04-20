/*
Exercicio 2.3.
Soma de Diagonal: Crie uma função int somaDiagonalPrincipal(int matriz[][10], int 
ordem) que recebe uma matriz quadrada e sua ordem, e retorna a soma dos 
elementos da sua diagonal principal.
*/

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int somaDiagonalPrincipal(int matriz[][10]) {
    int soma=0;
    
    for (int i=0; i<10; i++) {
        soma += matriz[i][i];
    }

    return soma;
}

int main() {
    int matriz[10][10];
    int res;

    srand(time(NULL));
    for (int i=0; i<10; i++) {
        matriz[i][i] = rand() % 100;
    }

    res = somaDiagonalPrincipal(matriz);
    printf("Resultado da soma das diagonais principais da matriz: %d.", res);
    return 0;
}