/*
1. Verificador de Comprimento de Senha
Contexto: Um sistema de login precisa de garantir que as senhas tenham um tamanho mínimo para serem consideradas seguras.
Desafio: Crie um programa que solicite ao utilizador uma senha. Use strlen() para verificar se a senha tem 8 ou mais caracteres e informe ao utilizador se a senha é "Válida" ou "Inválida".
*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {

    char senha[20];

    printf("Cadastre a sua senha: ");
    scanf(" %s", &senha);

    if (strlen(senha) < 8) {
        printf("Senha Invalida.\n");
    } else {
        printf("Senha Valida.\n");
    }

    system("pause");
    return 0;
}