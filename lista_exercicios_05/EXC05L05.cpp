/*
5. Conversor de Caixa
Contexto: Um sistema precisa de padronizar a entrada do utilizador, convertendo tudo para maiúsculas.
Desafio: Solicite ao utilizador que digite o seu nome. Use a função strupr() para converter o nome para maiúsculas e exiba o resultado.
*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {

    char nome[40];

    printf("Digite o seu nome: ");
    fgets(nome, 40, stdin);

    printf("Nome Digitado: %s", strupr(nome));

    system("pause");
    return 0;
}