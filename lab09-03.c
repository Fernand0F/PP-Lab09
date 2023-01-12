#include <stdio.h>
#include <string.h>

void main() {
    int x, y, *py = &y, *px = &x;

    printf("Digite um valor inteiro: ");
    scanf("%d", &x);

    printf("Digite outro valor inteiro: ");
    scanf("%d", &y);

    if (px > py) {
        printf("Valor de maior endereco: %d", x);
    }
    else {
        printf("Valor de maior endereco: %d", y);
    }
}