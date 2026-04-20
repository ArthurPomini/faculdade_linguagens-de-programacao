/*
6. Abreviação de Texto
Contexto: Um sistema de exibição de notícias precisa de mostrar apenas o início de um título longo.
Desafio: Crie uma string com um texto longo. Use strncpy() para copiar apenas os primeiros 20 caracteres para uma nova string e exiba o resultado.
*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {

    char titulo[100];

    printf("Digite o titulo da materia: ");
    fgets(titulo, 100, stdin);

    char tituloRed[20];

    strncpy(tituloRed, titulo, 20);
    printf("Materia Reduzida a 20 caracteres: %s\n", tituloRed);

    system("pause");
    return 0;
}