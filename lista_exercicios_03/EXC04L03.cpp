/*
4. Solicitar o nível de energia do personagem (0 a 100). Se for menor que 30, informar “Energia
crítica”; se for entre 30 e 70, informar “Energia estável”; se for acima de 70, informar “Energia
máxima”.
*/

#include <stdio.h>
#include <stdlib.h>

int main() {

    int energ;

    printf("Digite o nivel de energia de seu personagem (0 a 100): ");
    scanf(" %d", &energ);

    if (energ < 30) {
        printf("Energia critica!\n");
    } else {
        if (energ > 70) {
            printf("Energia maxima.\n");
        } else {
            printf("Energia estavel.\n");
        }
    }

    system("pause");
    return 0;
}