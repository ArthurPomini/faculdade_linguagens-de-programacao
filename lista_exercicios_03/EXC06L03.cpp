/*
6. Solicitar dois valores distintos e informar qual é o maior.
*/

#include <stdio.h>
#include <stdlib.h>

int main() {
    int v1, v2;

    printf("Digite o valor 1: ");
    scanf(" %d", &v1);
    printf("Digite o valor 2: ");
    scanf(" %d", &v2);

    if (v1 > v2) {
        printf("%d eh maior que %d.\n", v1, v2);
    } else {
        printf("%d eh maior que %d.\n", v2, v1);
    }

    system("pause");
    return 0;
}