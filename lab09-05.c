#include <stdio.h>

void troca(int *a, int *b) {
    int temp;
    if (*b > *a) {
        temp = *a;
        *a = *b;
        *b = temp;
    }
}

void main() {
    int a, b;

    printf("Digite um numero inteiro para a variavel A: ");
    scanf("%d", &a);

    printf("Digite um numero inteiro para a variavel B: ");
    scanf("%d", &b);

    troca(&a, &b);

    printf("\nMaior valor (variavel A): %d", a);
    printf("\nMenor valor (variavel B): %d", b);
}