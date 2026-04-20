/*
13. Inversor de Palavras
Contexto: Um programa divertido que inverte a ordem das letras de uma palavra.
Desafio: Solicite uma palavra. Crie uma segunda string vazia.
Use um laço for que percorra a palavra original de trás para a frente e adicione cada caractere à nova string para formar a palavra invertida.
Exiba o resultado.
*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

int main() {

    char palavra[20];

    printf("Digite uma palavra e veja-a invertida: ");
    scanf("%s", &palavra);

    for (int i=strlen(palavra) - 1; i>=0; i--) {
        printf("%c", palavra[i]);
    }
    printf("\n");

    system("pause");
    return 0;
}