/*
25. Jogo da palavra (Estrutura)

-Contexto:
Criar a lógica principal para o clássico jogo de adivinhar a palavra.

-Desafio:
Defina uma palavra secreta. Crie uma string "display" com o mesmo tamanho, preenchida com _.
Crie um laço while que continue enquanto o jogador tiver tentativas e a palavra não for descoberta.
Dentro do laço, peça uma letra, verifique se ela existe na palavra secreta e atualize o "display"
*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

char palavraSecreta[6] = "BANHO";
char display[6] = "_____";

void jogo() {
    printf("\n--- JOGO DE ADIVINHACAO ---\n");
    printf("\nDica: A palavra secreta possui 5 letras!\n");

    int tentativas=10;
    char letra;

    while (strcmp(palavraSecreta, display) != 0 && tentativas != 0) {
        printf("\nVoce possui %d tentativas.", tentativas);
        printf("\nPalavra: %s\n", display);
        printf("\nDigite uma letra: ");
        scanf(" %c", &letra);
        letra = toupper(letra);

        int tamanho;
        tamanho = strlen(display);

        for (int i=0; i<tamanho; i++) {
            if (letra == palavraSecreta[i]) {
                display[i] = letra;
                break;
            }
        }
        tentativas--;
    }
    if (strcmp(palavraSecreta, display) == 0) {
        printf("\nPalavra: %s\n", display);
        printf("\nParabens! Voce conseguiu decifrar a palavra secreta.\n");
    }
    else
        printf("\nNao foi dessa vez...\n");
}

int main() {

    jogo();

    system("pause");
    return 0;
}