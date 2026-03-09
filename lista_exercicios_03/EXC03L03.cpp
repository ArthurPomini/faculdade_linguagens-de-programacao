/*
3. Sobre um jogo, solicitar o número de moedas coletadas. Se for múltiplo de 50, informar que o
jogador ganhou uma vida extra; caso contrário, informar quantas moedas faltam para ganhar a
próxima vida.
*/

#include <stdio.h>
#include <stdlib.h>

int main() {

    int moedas;

    printf("Quantas moedas voce coletou?\n");
    scanf(" %d", &moedas);

    if ((moedas % 50) == 0) {
        printf("Voce conseguiu uma vida extra!\n");
    } else {
        printf("Faltam %d moedas para voce conseguir uma vida extra.\n", 50 - moedas);
    }
    
    system("pause");
    return 0;
}