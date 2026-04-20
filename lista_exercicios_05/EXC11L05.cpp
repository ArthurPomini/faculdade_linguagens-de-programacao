/*
11. Contador de Vogais
Contexto: Um programa de análise de texto precisa de contar o número de vogais numa frase.
Desafio: Solicite uma frase. Use um laço for para percorrer a string caractere por caractere (usando strlen() como limite).
Dentro do laço, use if e tolower() (da <ctype.h>) para verificar se cada caractere é uma vogal. Ao final, exiba a contagem total.
*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

int main() {

    char frase[60];

    printf("Digite uma frase: ");
    fgets(frase, 60, stdin);

    char vogal[]="aeiou";
    int numVog;

    for (int i=0; i<=strlen(frase) - 1; i++) { // verifica caractere por caractere
        for (int x=0; x<=strlen(vogal); x++) { // laço para comparar o caractere com uma vogal
            if (tolower(frase[i]) == vogal[i]) {
                numVog++;
                break;
            }
        }
    }

    printf("O numero total de vogais eh: %d.\n", numVog);

    system("pause");
    return 0;
}