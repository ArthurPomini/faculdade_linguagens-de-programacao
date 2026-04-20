/*
29. Removedor de Vogais

-Contexto:
Um programa divertido que remove todas as vogais de um texto.

-Desafio:
Solicite uma frase. Percorra a string com um laço e crie uma nova string contendo
apenas os caracteres que não são vogais. Exiba o resultado.
*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

int main() {
    char frase[60];
    int tamanho;

    printf("Digite uma frase: ");
    fgets(frase, 60, stdin);

    tamanho = strlen(frase);
    char naoVogais[50];
    int j=0;
    for (int i=0; i<tamanho; i++) {
        if (toupper(frase[i]) != 'A' && toupper(frase[i]) != 'E' && toupper(frase[i]) != 'I' && toupper(frase[i]) != 'O' && toupper(frase[i]) != 'U'){
            naoVogais[j] = frase[i];
            j++;
        }
    }

    printf("A frase escrita sem vogais fica: %s\n", naoVogais);

    system("pause");
    return 0;
}