/*
19. Cifra de César Simples
Contexto: A Cifra de César é uma técnica de criptografia simples que substitui cada letra por outra, algumas posições à frente no alfabeto.
Desafio: Solicite uma palavra.
Percorra a string com um laço e, para cada letra, adicione 1 ao seu valor ASCII para "deslocá-la" (ex: 'a' vira 'b').
Exiba a palavra criptografada.
*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {

    char palavra[20];
    int asc=0;

    printf("Digite uma palavra para criptografar: ");
    scanf("%s", palavra);

    printf("Palavra Criptografada:\n");
    for (int i=0; i<strlen(palavra); i++) {
        asc = palavra[i];
        asc += 1;
        palavra[i] = asc;
        printf("%c", palavra[i]);
    }
    
    printf("\n");

    system("pause");
    return 0;
}