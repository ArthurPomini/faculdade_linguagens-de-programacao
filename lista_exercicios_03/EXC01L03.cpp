/*
1. Solicitar o nickname e a idade de um jogador. Informar se ele pode participar de um campeonato
que exige idade mínima de 16 anos.
*/

#include <stdio.h>
#include <stdlib.h>

int main() {
    int idade;

    printf("===Cadastro do Campeonato===\n");
    printf("Digite a sua idade: ");
    scanf("%d", &idade);

    if (idade < 16) {
        printf("Sinto muito, a idade minima permitida para participar do campeonato eh de 16 anos.\n");
    } else {
        printf("Cadastro realizado, boa sorte!\n");
    }

    system("pause");
    return 0;
}