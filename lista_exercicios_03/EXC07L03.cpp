/*
7. Solicitar dois valores e apresentar o maior e o menor. Caso sejam iguais, informar ao usuário.
*/

#include <stdio.h>
#include <stdlib.h>

int main() {

    int v1, v2;

    printf("Ola! Digite o primeiro valor: ");
    scanf(" %d", &v1);

    printf("Agora, digite o segundo valor: ");
    scanf(" %d", &v2);

    if (v1 == v2) {
        printf("Os valores digitados sao iguais.\n");
    } else {
        if (v1 > v2) {
            printf("O primeiro valor digitado eh maior que o segundo.\n");
        } else {
            printf("O segundo valor digitado eh maior que o primeiro.\n");
        }
    }

    return 0;
}