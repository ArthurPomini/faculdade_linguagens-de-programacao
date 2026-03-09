/*
9. Solicitar 3 números distintos e apresentar o maior.
*/

#include <stdio.h>
#include <stdlib.h>

int main() {

    int v1, v2, v3;

    printf("Ola! Digite tres numeros de valores distintos:\n");
    printf("Valor 1: ");
    scanf(" %d", &v1);
    printf("Valor 2: ");
    scanf(" %d", &v2);
    printf("Valor 3: ");
    scanf(" %d", &v3);

    if (v1 > v2 && v1 > v3) {
        printf("O primeiro valor eh o maior dentre os tres.\n");
    } else {
        if (v2 > v1 && v2 > v3) {
            printf("O segundo valor eh o maior dentre os tres.\n");
        } else {
            printf("O terceiro valor eh o maior dentre os tres.\n");
        }
    }
    return 0;
}