/*
28. Gerador de Acrónimos

-Contexto:
Um sistema precisa de criar um acrónimo a partir de um nome de uma organização.

-Desafio:
Reutilize a lógica do "Extrator de Iniciais" (Exercício 16), mas, em vez de imprimir,
guarde as iniciais numa nova string para formar o acrónimo. Exiba o resultado final.
*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {
    char nomeComp[60];
    int tamanho;

    printf("Digite o seu nome completo: ");
    fgets(nomeComp, 60, stdin);
    
    tamanho = strlen(nomeComp);
    char acronimo[10];
    int j=0; 
    for (int i=0; i<tamanho; i++) {
        if (i == 0) {
            acronimo[j] = nomeComp[i];
            j++;
        }
        if (nomeComp[i] == ' ') {
            acronimo[j] = nomeComp[i+1];
            j++;
        } 
    }
    
    printf("As inicias do seu nome formam o acronimo %s.\n", strupr(acronimo));

    system("pause");
    return 0;
}