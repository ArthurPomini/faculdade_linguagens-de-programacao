/*
26. Verificador de Substring
-Contexto:
Um sistema de busca precisa de verificar se uma palavra existe dentro de uma frase.

-Desafio:
Solicite uma frase e uma palavra a ser procurada.
Use a função strstr() para verificar se a palavra está contida na frase e informe o resultado.
*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {

    char frase[100];
    char busca[15];

    printf("Digite uma frase: ");
    fgets(frase, 100, stdin);

    printf("\n===Frase Digitada===\n%s", frase);

    printf("\nDigite uma palavra que gostaria de buscar na frase que digitou: ");
    scanf(" %s", &busca);

    char *resultado;
    resultado = strstr(frase, busca);

    if (resultado != NULL)
        printf("Palavra Encotrada!\n");
    else
        printf("Palavra Nao Encontrada...\n");

    return 0;
}