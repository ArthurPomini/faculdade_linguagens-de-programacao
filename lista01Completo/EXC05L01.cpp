//Proposta: Crie um programa que colete as seguintes informações de um usuário: primeiro nome, idade
//e altura. Ao final, exiba todas as informações em uma única frase bem formatada.
//Exemplo de Execução:
//Digite seu primeiro nome:
//Carlos
//Digite sua idade:
//25
//Digite sua altura (em metros):
//1.82
//Cadastro realizado: Nome: Carlos, Idade: 25 anos, Altura: 1.82m.

#include <stdlib.h>
#include <stdio.h>

int main() {
    
    //variaveis
    char nome[40];
    int idade;
    float altura;
    
    printf("Para comecar a realizar o seu cadastro, digite o seu primeiro nome: \n");
    scanf(" %s", &nome);
    printf("Agora, digite a sua idade: \n");
    scanf(" %d", &idade);
    printf("Por ultimo, digite a sua altura: \n");
    scanf(" %f", &altura);
    printf("Cadastro realizado! Primeiro nome: %s, Idade: %d, Altura: %f.", nome, idade, altura);
    
    return 0;
}
