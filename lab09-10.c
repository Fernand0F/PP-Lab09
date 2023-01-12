#include <stdio.h>

void main() {
    int vet[5], i;

    for (i = 0; i < 5; i++) {
        printf("Digite um numero inteiro: ");
        scanf("%d", vet + i*sizeof(int));
    }

    for (i = 0; i < 5; i++) {
        printf("\n%d", 2**(vet + i*sizeof(int)));
    }
}