/*
20. Extrator de Domínio de Email
Contexto: Um sistema de análise de dados precisa de extrair apenas o domínio de um endereço de e-mail.
Desafio: Solicite um e-mail. Use a função strchr() para encontrar a posição do caractere '@'.
Exiba a parte da string que vem depois do '@'.
*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {

    char email[30];

    printf("Digite o seu email: ");
    scanf("%s", &email);

    printf("%s", strchr(email, '@') + 1);

    system("pause");
    return 0;
}