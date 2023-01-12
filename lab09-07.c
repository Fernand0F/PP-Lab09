#include <stdio.h>

void troca(int *a, int *b) {
    *a += *b;
}

void main() {
    int a, b;

    printf("Digite um numero inteiro para a variavel A: ");
    scanf("%d", &a);

    printf("Digite um numero inteiro para a variavel B: ");
    scanf("%d", &b);

    troca(&a, &b);

    printf("\nA: %d", a);
    printf("\nB: %d", b);
}