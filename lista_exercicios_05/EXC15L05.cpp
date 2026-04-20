/*
15. Sanitizador de Texto
Contexto: Um sistema precisa de remover todos os espaços de uma string para criar um nome de utilizador ou um URL.
Desafio: Solicite uma frase. Percorra a string com um laço e crie uma nova string contendo apenas os caracteres que não são espaços. Exiba a string resultante.
*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

int main() {

    char url[40];

    printf("Digite uma frase para ser a URL de seu site: ");
    fgets(url, 40, stdin);

    for (int i=0; i<=strlen(url); i++) {
        if (url[i] != ' ') {
            printf("%c", url[i]);
        } 
    }

    printf("\n");

    system("pause");
    return 0;
}