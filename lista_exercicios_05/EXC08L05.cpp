/*
8. Normalizador de Email
Contexto: Um sistema precisa de armazenar emails em minúsculas para evitar duplicados.
Desafio: Solicite um endereço de e-mail. Use strlwr() para converter o e-mail para minúsculas e exiba o resultado.
*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {

    char email1[20], email2[20];

    printf("Digite o seu 1o email: ");
    scanf(" %s", &email1);
    strcpy(email1, strlwr(email1));

    printf("Digite o seu 2o email: ");
    scanf(" %s", &email2);
    strcpy(email2, strlwr(email2));

    if (strcmp(email1, email2) == 0) {
        printf("Email duplicado.\n");
    } else {
        printf("Email cadastrado.\n");
    }

    system("pause");
    return 0;
}