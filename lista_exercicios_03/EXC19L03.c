// 19. Crie um programa que exiba um menu de especialidades médicas (1-Clínico Geral, 2-Cardiologia,
// 3-Dermatologia, 4-Ortopedia). O programa deve ler a opção do usuário e usar switch case para
// confirmar o agendamento para a especialidade escolhida.

#include <stdio.h>
#include <stdlib.h>

int main() {
    int op;

    printf("### Especialidades Medicas ###\n\n");
    printf("1-Clinico Geral\n");
    printf("2-Cardiologista\n");
    printf("3-Dermatologista\n");
    printf("4-Ortopedista\n");
    printf("\nQual opcao voce deseja?\nR: ");
    scanf(" %d", &op);

    switch (op) {
        case 1:
            printf("\nClinico Geral Agendado!\n");
            break;
        case 2:
            printf("\nCardiologista Agendado!\n");
            break;
        case 3:
            printf("\nDermatologista Agendado!\n");
            break;
        case 4:
            printf("\nOrtopedista Agendado!\n");
            break;
        default:
            printf("\nOpcao Invalida.\n");
    }

    system("pause");
    return 0;
}