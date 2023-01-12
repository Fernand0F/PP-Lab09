#include <stdio.h>

void troca(int *a, int *b) {
    *a = 2*(*a);
    *b = 2*(*b);
}

void main() {
    int a, b;

    printf("Digite um numero inteiro para a variavel A: ");
    scanf("%d", &a);

    printf("Digite um numero inteiro para a variavel B: ");
    scanf("%d", &b);

    troca(&a, &b);

    printf("\nDobro de A: %d", a);
    printf("\nDobro de B: %d", b);
}