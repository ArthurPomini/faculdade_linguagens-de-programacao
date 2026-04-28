// 20. Um hemocentro precisa de um programa rápido para a triagem inicial de doadores. As regras
// básicas são: ter entre 18 e 69 anos E pesar 50kg ou mais. Crie um programa que leia a idade e o
// peso de um potencial doador. Use uma estrutura if com o operador lógico && (E) para verificar
// se ambas as condições são atendidas e informe se a pessoa está apta para a próxima fase da
// triagem.

#include <stdio.h>
#include <stdlib.h>

int main() {
    int idade;
    int peso;

    printf("Ola Doador. Por favor, nos informe a sua idade: ");
    scanf(" %d", &idade);
    printf("Agora, o seu peso: ");
    scanf(" %d", &peso);

    if ((idade >= 18 && idade < 70) && peso > 50)
        printf("\nVoce esta apto para doar sangue! Contamos com sua ajuda.\n");
    else
        printf("\nInfelizmente voce nao esta apto para doar sangue...\n");
    
    system("pause");
    return 0;
}