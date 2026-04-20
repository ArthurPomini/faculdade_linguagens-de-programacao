/*
7. Validador de Código de Produto
Contexto: Um sistema de inventário usa códigos de produto com um prefixo fixo.
Desafio: Solicite um código de produto. Use strncmp() para verificar se os primeiros 3 caracteres do código são "PRO". Informe se o prefixo é válido ou não.
*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {

    char prod[20];

    printf("Digite o codigo do produto: ");
    scanf(" %s", &prod);

    if (strncmp(strupr(prod), "PRO", 3) == 0) {
        printf("Produto Valido!\n");
    } else {
        printf("Produto Invalido\n");
    }

    system("pause");
    return 0;
}