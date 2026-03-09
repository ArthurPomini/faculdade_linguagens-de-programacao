/*
2. Solicitar a pontuação final de um jogador em uma partida. Informar se ele atingiu o recorde da
semana (pontuação mínima de 10.000 pontos).
*/

#include <stdio.h>
#include <stdlib.h>

int main() {

    int pont;

    printf("Ola! Digite a sua pontuacao final da sua ultima partida jogada: ");
    scanf(" %d", &pont);

    if (pont >= 10000)
        printf("Parabens! Voce atingiu o recorde da semana.\n");
    else
        printf("Voce nao atingiu o recorde semanal...\n");

    system("pause");
    return 0;
}