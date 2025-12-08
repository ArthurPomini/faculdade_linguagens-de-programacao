/*
Contexto: Você foi contratado para criar um sistema simples para gerar crachás de um evento de
tecnologia. O programa deve solicitar o nome do participante e a empresa onde ele trabalha.
Proposta: Crie um programa que leia o primeiro nome do participante e o nome da empresa. Em
seguida, exiba os dados formatados como um crachá.
Resultado Esperado (Exemplo de Execução):
*** Sistema de Credenciamento Tech Conference ***
Digite seu primeiro nome:
Maria
Digite o nome da sua empresa:
InovaTech
=========================
Crachá Gerado:
Nome: Maria
Empresa: InovaTech
=========================
*/

#include <stdlib.h>
#include <stdio.h>

int main() {
    
    //variaveis
    char nome[20], empresa[20];
    
    printf("###Sistema de Credenciamento Unicesumar### \nDigite o seu primeiro nome: \n");
    scanf(" %s", &nome);
    printf("Digite o nome da sua empresa: \n");
    scanf(" %s", &empresa);
    printf("=========================\nCracha Gerado:\nNome: %s\nEmpresa: %s\n=========================\n", nome, empresa);
    
    return 0;
}
