/*
21. Validador de Senha Forte
Contexto: Um sistema de segurança precisa de validar se uma senha atende a múltiplos critérios: tamanho, letras maiúsculas, minúsculas e números.
Desafio: Solicite uma senha.
Use laços e funções da <ctype.h> (isupper(), islower(), isdigit()) para verificar se a senha tem:
no mínimo 8 caracteres, pelo menos uma letra maiúscula, uma minúscula e um número.
Informe se a senha é "Forte" ou "Fraca".
*/
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

int main() {

    char senha[20];
    int tamanho;

    do {
        printf("Cadastre uma senha, ela deve possuir:\n- Minimo 8 caracteres\n- Letra Minuscula\n- Letra Maiuscula\n- Numero\nPor favor, digite a sua senha: ");
        scanf("%s", &senha);
        
        tamanho = strlen(senha);

        if (tamanho < 8) {
            printf("\nTamanho insuficiente, digite novamente.\n\n");
        }
    } while (tamanho < 8);

    int i, asc, maiusc=0, minusc=0, num=0;

    for (i=0; i<=tamanho - 1; i++) {
        
        // LETRA MAIUSC
        if (isupper(senha[i])) {
            maiusc += 1;
        } else {
            // LETRA MINUSC
            if (islower(senha[i])) {
                minusc += 1;
            } else {
                // NUMERO
                if (isdigit(senha[i])) {
                    num += 1;
                } else {
                    
                }
            }
        }
    }

    if (maiusc > 0 && minusc > 0 && num > 0) {
        printf("\nSua senha eh Forte.\n");
    } else {
        printf("\nSua senha eh Fraca.\n");
    }

    system("pause");
    return 0;
}