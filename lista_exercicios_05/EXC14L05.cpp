/*
14. Verificador de Palíndromo
Contexto: Um palíndromo é uma palavra que se lê da mesma forma de trás para a frente.
Desafio: Reutilize a lógica do exercício anterior para criar uma versão invertida da palavra.
Em seguida, use strcmp() para comparar a palavra original com a invertida e informe se ela é ou não um palíndromo.
*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

int main() {

    char palavra[20];

    printf("Digite uma palavra e descubra se ela eh um palindromo: ");
    scanf("%s", &palavra);

    char palavraInv[20];
    int j=0;

    for (int i=strlen(palavra) - 1; i>=0; i--) {
        palavraInv[j] = palavra[i];
        j++;
    }

    palavraInv[j] = '\0';

    printf("\n");
    printf("Palavra Digitada: %s\n", palavra);
    printf("Palavra Invertida: %s\n", palavraInv);

    if (strcmp(palavraInv, palavra) == 0) {
        printf("A palavra EH um palindromo!\n");
    } else {
        printf("A palavra NAO eh um palindromo.\n");
    }

    system("pause");
    return 0;
}