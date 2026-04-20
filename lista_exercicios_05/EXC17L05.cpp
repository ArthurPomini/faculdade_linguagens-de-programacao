/*
17. Gerador de Username
Contexto: Um sistema precisa de sugerir um nome de utilizador a partir do nome e sobrenome de uma pessoa.
Desafio: Solicite o primeiro nome e o sobrenome em variáveis separadas.
Crie um nome de utilizador concatenando a primeira letra do nome com o sobrenome completo, tudo em minúsculas.
*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {

    char nome[20], snome[20];

    printf("Digite o seu primeiro nome: ");
    scanf(" %s", &nome);
    strcpy(nome, strlwr(nome)); 

    printf("Digite o seu sobrenome: ");
    scanf(" %s", &snome);
    strcpy(snome, strlwr(snome));

    nome[1] = '\0';
    strcat(nome, snome);
    printf("%s\n", nome);

    system("pause");
    return 0;
}