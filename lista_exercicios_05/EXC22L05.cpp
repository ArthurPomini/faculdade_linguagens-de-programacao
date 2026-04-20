/*
22. Contador de Palavras
Contexto: Um editor de texto precisa de contar o número de palavras numa frase.
Desafio: Solicite uma frase. Percorra a string com um laço. A lógica é: conte um espaço como
o final de uma palavra. Considere que a primeira palavra existe se a frase não estiver vazia.
Exiba a contagem total de palavras.
*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

int main() {
    
    char frase[100];

    printf("Digite uma frase e descubra quantas palavras ela possui: ");
    fgets(frase, 100, stdin);

    int npal=0;
    int dentro_palavra=0;
    int tamanho;
    tamanho = strlen(frase);

    for (int i = 0; i < tamanho; i++) {
        if (!isspace(frase[i]) && dentro_palavra == 0) {
            // Encontrou o início de uma nova palavra
            dentro_palavra = 1;
            npal++;
        } else if (isspace(frase[i])) {
            // Saiu de uma palavra
            dentro_palavra = 0;
        }
    }

    printf("A frase possui: %d palavras.\n", npal);

    system("pause");
    return 0;
}