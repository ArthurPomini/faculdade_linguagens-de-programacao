/*
4. Matriz + Função: Crie uma função int somarElementos(int matriz[][5], int linhas) que 
recebe uma matriz de inteiros e retorna a soma de todos os seus elementos.
*/

#include <stdio.h>
#include <stdlib.h>

int somarElementos(int matriz[][5], int linhas) {
    int soma=0;
    
    printf("Digite os elementos da matriz:\n");
    for (int i=0; i<linhas; i++) {
        for (int j=0; j<5; j++) {
            printf("%dx%d: ", i+1, j+1);
            scanf(" %d", &matriz[i][j]);
            soma += matriz[i][j];
        }
        printf("\n");
    }

    return soma;
}

int main() {
    int linhas;
    printf("Digite o numero de linhas da matriz: ");
    scanf(" %d", &linhas);
    
    int matriz[linhas][5];
    int resultado = somarElementos(matriz, linhas);
    printf("A soma dos elementos da matriz eh: %d", resultado);

    return 0;
}