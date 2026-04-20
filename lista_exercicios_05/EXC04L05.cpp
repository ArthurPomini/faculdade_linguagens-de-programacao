/*
4. Cópia de Segurança
Contexto: Um sistema precisa de criar uma cópia de uma configuração importante antes de a modificar.
Desafio: Crie um programa com uma string char config_original[] = "USER=root;PASS=123";.
Use strcpy() para copiar esta configuração para uma nova variável char config_backup[50]; e exiba ambas para mostrar que a cópia foi bem-sucedida.
*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {

    char config_original[]="USER=root;PASS=123";
    char config_backup[50]="";

    printf("Config Original Antes: %s\n", config_original);
    printf("Config Backup Antes: %s\n", config_backup);

    strcpy(config_backup, config_original);

    printf("Config Original Depois: %s\n", config_original);
    printf("Config Backup Depois: %s\n", config_backup);

    system("pause");
    return 0;
}