/*
16. Extrator de Iniciais

-Contexto:
Um sistema precisa de extrair as iniciais de um nome completo.

-Desafio:
Solicite um nome completo. A primeira letra é sempre uma inicial.
Depois, percorra a string com um laço e, sempre que encontrar um espaço, a próxima letra também será uma inicial. Exiba todas as iniciais juntas.
*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {

    char nomeComp[50];

    printf("Digite o seu nome completo: ");
    fgets(nomeComp, 50, stdin);

    printf("Iniciais do seu nome:\n");
    
    int i;

    for (i=0; i<=strlen(nomeComp); i++) {
        if (i == 0) {
            printf("%c\n", nomeComp[i]);
        }
        if (nomeComp[i] == ' ') {
            printf("%c\n", nomeComp[i+1]);
        }
    }

    system("pause");
    return 0;
}