/*
12. Validador de CPF (Formato)
Contexto: Um sistema de cadastro precisa de verificar se um CPF foi digitado no formato correto (XXX.XXX.XXX-XX).
Desafio: Solicite um CPF. Use strlen() para verificar se tem 14 caracteres.
Em seguida, use um laço for e if para verificar se os caracteres nas posições dos pontos e do traço estão corretos.
Informe se o formato é "Válido" ou "Inválido".
*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

int main() {

    char cpf[20];

    printf("Digite o seu CPF (com ponto e traco): ");
    scanf("%s", &cpf);

    int v=0, t=0;

    if (strlen(cpf) == 14) {
        for (int i=0; i<=strlen(cpf); i++) {
            if (cpf[i] == '.' && i == 3 || i == 7) {
                v++;
            } else {
                if (cpf[i] == '-' && i == 11) {
                    t++;
                } else {
                
                }
            }
        }
        if (v == 2 && t == 1) {
            printf("CPF Valido\n");
        } else {
            printf("CPF Invalido\n");
        }
        printf("\n");
    } else {
        printf("CPF Invalido\n");
    }

    system("pause");
    return 0;
}