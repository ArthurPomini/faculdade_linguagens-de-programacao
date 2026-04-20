/*
9. Contador de Caracteres Simples
Contexto: Um sistema de mensagens precisa de mostrar ao utilizador quantos caracteres ele já digitou.
Desafio: Solicite uma mensagem curta. Use strlen() para contar os caracteres e exiba a contagem para o utilizador.
*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {

    char sms[20];

    printf("Digite uma mensagem: ");
    fgets(sms, 20, stdin);

    printf("A sua mensagem possui %d caractere(s).", strlen(sms) - 1);

    system("pause");
    return 0;
}