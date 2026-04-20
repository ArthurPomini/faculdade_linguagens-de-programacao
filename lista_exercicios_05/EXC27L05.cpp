/*
27. Ordenador de Palavras

-Contexto:
Um sistema precisa de ordenar duas palavras em ordem alfabética.

-Desafio:
Solicite duas palavras. Use strcmp() para determinar qual vem primeiro em ordem alfabética e exiba-as na ordem correta.
*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {
    char pal1[20];
    char pal2[20];

    printf("Digite uma palavra: ");
    scanf(" %s", &pal1);

    printf("Digite outra palavra: ");
    scanf(" %s", &pal2);

    int comp;
    comp = strcmp(pal1, pal2);

    if (comp == 1)
        printf("A palavra %s vem primeiro em ordem alfabetica.\n", pal2);
    else   
        if (comp == -1)
            printf("A palavra %s vem primeiro em ordem alfabetica.\n", pal1);
        else
            printf("As palavras sao iguais.\n");

    system("pause");
    return 0;
}