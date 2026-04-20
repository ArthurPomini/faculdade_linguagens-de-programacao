/*
24. Extrator de Nome e Sobrenome
-Contexto:
Um sistema precisa de separar um nome completo em nome e sobrenome.

-Desafio:
Solicite um nome completo. Use strchr() para encontrar a posição do primeiro espaço.
Copie a parte antes do espaço para a variável nome e a parte depois do espaço para a variável
sobrenome. Exiba ambos separadamente.
*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char nomeCompleto[40];
char nome[20];
char sobrenome[20];

void solicitaNomeCompleto() {
    printf("Digite o seu nome completo: ");
    fgets(nomeCompleto, 40, stdin);
}

void separaNomeSobrenome() {
    if (strchr(nomeCompleto, ' ') != NULL) {
        // pegar nome
        int tamanho;
        tamanho = strlen(nomeCompleto);
        for (int i=0; i<=tamanho; i++) {
            if (nomeCompleto[i] == ' ') {
                break;
            } else {
                nome[i] = nomeCompleto[i];
            }
        }
        int tamanhoNome;
        int x=0;
        tamanhoNome = strlen(nome);
        // pega sobrenome
        for (int i=tamanhoNome+1; i<=tamanho; i++) {
            sobrenome[x] = nomeCompleto[i];
            x++;
        }
        printf("Nome Completo: %s\n", nomeCompleto);
        printf("Nome: %s\n", nome);
        printf("Sobrenome: %s\n", sobrenome);
    } else {
        printf("Error!\n");
    }

}

int main() {

    solicitaNomeCompleto();
    separaNomeSobrenome();


    system("pause");
    return 0;
}