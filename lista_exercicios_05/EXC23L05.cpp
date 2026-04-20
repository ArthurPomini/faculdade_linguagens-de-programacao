/*
23. Substituidor de Caracteres
Contexto:
Um sistema precisa de substituir todas as ocorrências de um caractere por outro.

Desafio:
Solicite uma frase, um caractere a ser substituído e um novo caractere.
Percorra a frase com um laço e, sempre que encontrar o caractere antigo, substitua-o pelo novo.
Exiba a frase modificada.
*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char frase[100];
char carAntigo;
char carNovo;

void solicitaFrase() {
    printf("Ola! Por favor, digite uma frase: ");
    fgets(frase, 100, stdin);

    printf("Digite um caracter de sua frase que gostaria de substituir: ");
    scanf(" %c", &carAntigo);

    printf("Agora, digite o caracter que ira no lugar do antigo: ");
    scanf(" %c", &carNovo);
}

void substituiCaracterEMostra() {
    int tamanho;

    tamanho = strlen(frase);
    for (int i=0; i<=tamanho; i++) {
        if (frase[i] == carAntigo)
            frase[i] = carNovo;
    }
    
    printf("Frase Nova: %s", frase);
}

int main() {
    solicitaFrase();
    substituiCaracterEMostra();

    system("pause");
    return 0;
}