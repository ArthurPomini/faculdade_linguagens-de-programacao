/*
18. Comparador Insensível a Caixa
Contexto: Um sistema de login não deve diferenciar maiúsculas de minúsculas.
Desafio: Solicite duas palavras. Converta ambas para minúsculas usando strlwr() (ou um laço
com tolower()) em cópias das strings originais e, em seguida, use strcmp() para compará-las.
Informe se são iguais.
*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {

    char p1[20], p2[20];

    printf("Digite uma palavra: ");
    scanf("%s", &p1);
    strcpy(p1, strlwr(p1));

    printf("Digite outra palavra: ");
    scanf("%s", &p2);
    strcpy(p2, strlwr(p2));

    if (strcmp(p1, p2) == 0) {
        printf("As palavras sao iguais!\n");
    } else {
        printf("As palavras NAO sao iguais.\n");
    }

    system("pause");
    return 0;
}