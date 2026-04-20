/*
3. Criador de Nome de Ficheiro
Contexto: Um programa precisa de criar um nome de arquivo juntando um nome base com a sua extensão.
Desafio: Crie um programa com uma string char nome_arquivo[50] = "relatorio_";. Solicite ao utilizador o mês (ex: "setembro").
Use strcat() para juntar o mês ao nome do arquivo e, em seguida, junte a extensão ".txt". Exiba o nome final do arquivo.
*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {

    char nome_arquivo[50]="relatorio_";
    char mes[20];

    printf("Digite o nome do mes que deseja fazer o relatorio: ");
    scanf(" %s", &mes);

    strcat(nome_arquivo, strlwr(mes));
    strcat(nome_arquivo, ".txt");

    printf("Relatorio Criado: %s\n", nome_arquivo);

    system("pause");
    return 0;
}