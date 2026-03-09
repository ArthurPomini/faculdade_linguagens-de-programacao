/*
5. Solicitar um valor numérico e apresentar a mensagem: “Valor positivo”, “Valor negativo” ou
“Zero”.
*/

#include <stdio.h>
#include <stdlib.h>

int main() {

    int valor;

    printf("Digite um valor numerico: ");
    scanf(" %d", &valor);

    if (valor == 0) {
        printf("Zero.\n");
    } else {
        if (valor > 0) {
            printf("Valor positivo.\n");
        } else {
            printf("Valor negativo.\n");
        }
    }

    return 0;
}