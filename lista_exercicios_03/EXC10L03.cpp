/*
10. Solicitar 3 números distintos e apresentar o maior e o menor.
*/

#include <stdio.h>
#include <stdlib.h>

int main() {

    int v1;
    int v2;
    int v3;

    printf("Ola! Digite tres numeros de valores distintos:\n");
    printf("Valor 1: ");
    scanf(" %d", &v1);
    printf("Valor 2: ");
    scanf(" %d", &v2);
    printf("Valor 3: ");
    scanf(" %d", &v3);

    int maior;
    int menor;

    // PEGA MAIOR NUMERO
    if (v1 > v2 && v1 > v3) {
        maior = v1;
    } else {
        if (v2 > v1 && v2 > v3) {
            maior = v2;
        } else {
            maior = v3;
        }
    }

    // PEGA MENOR NUMERO
    if (v1 < v2 && v1 < v3) {
        menor = v1;
    } else {
        if (v2 < v1 && v2 < v3) {
            menor = v2;
        } else {
            menor = v3;
        }
    }

    printf("RESULTADO DA COLETA DE DADOS:\n");
    printf("Maior valor digitado: %d.\n", maior);
    printf("Menor valor digitado: %d.\n", menor);

    return 0;
}