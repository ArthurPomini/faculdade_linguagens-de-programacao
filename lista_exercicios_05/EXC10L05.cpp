/*
10. Jogo de Adivinhar a Palavra Secreta
Contexto: Um jogo simples onde o jogador tem de adivinhar uma palavra secreta.
Desafio: Defina uma palavra secreta no código. Peça ao jogador para adivinhar a palavra.
Use strcmp() para verificar se o palpite está correto e exiba uma mensagem de vitória ou derrota.
*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {

    char secret[]="secreta";
    char dig[20];

    printf("Descubra a palavra secreta: ");
    scanf(" %s", &dig);

    strcpy(dig, strlwr(dig));

    if (strcmp(dig, secret) == 0) {
        printf("Parabens! Voce descobriu a palavra secreta.\n");
    } else {
        printf("Errado.\n");
    }

    system("pause");
    return 0;
}