/*
2. Comparador de Nomes
Contexto: Um sistema de cadastro precisa de verificar se um nome de utilizador já existe.
Desafio: Crie um programa que tenha um nome de utilizador "admin" guardado. Solicite ao utilizador que digite um nome.
Use strcmp() para verificar se o nome digitado é igual a "admin" e informe o resultado.
*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {

    char nomeDig[20];

    printf("Cadastre o seu nome: ");
    scanf(" %s", &nomeDig);

    if (strcmp(nomeDig, "admin") == 0) {
        printf("Nome ja existente.\n");
    } else {
        printf("Nome cadastrado.\n");
    }

    system("pause");
    return 0;
}