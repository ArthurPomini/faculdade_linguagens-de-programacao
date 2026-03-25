/*
11. Considerando que a nota mínima de aprovação é 6,0 e a frequência mínima é 75%, solicitar os
dados e informar se o aluno está APROVADO ou REPROVADO.
*/

#include <stdio.h>
#include <stdlib.h>

int main() {
    float nota;
    int freq;
    char nome[20];

    printf("Qual o nome do aluno: ");
    scanf(" %s", nome);

    printf("Qual foi a sua nota?\n");
    scanf(" %f", &nota);

    printf("Qual foi a sua frequencia (em %%) ?\n");
    scanf(" %d", &freq);

    if (nota >= 6.0 && freq >= 75)
        printf("Aprovado!\n");
    else
        printf("Reprovado.\n");

    return 0;
}