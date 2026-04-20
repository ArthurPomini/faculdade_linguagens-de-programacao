/*
30. Validador Numérico

-Contexto:
Um sistema precisa de garantir que uma entrada contém apenas dígitos numéricos.

-Desafio:
Solicite um texto. Use um laço para percorrer a string e a função isdigit() para
verificar cada caractere. Se encontrar algum caractere que não seja um número, pare e informe
que a entrada é "Inválida". Se percorrer tudo e só encontrar números, informe "Válida".
*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

int main() {
    char entrada[40];

    printf("Digite numeros (quantos preferir): ");
    scanf(" %s", &entrada);

    int tamanho;
    int x=0;
    tamanho = strlen(entrada);
    for (int i=0; i<tamanho; i++) {
        if (!isdigit(entrada[i]))
            x++;
    }

    if (x > 0)
        printf("Entrada Invalida.\n");
    else
        printf("Entrada Valida.\n");

    system("pause");
    return 0;
}