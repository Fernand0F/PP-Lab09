#include <stdio.h>

void main() {
    int vet[5], i;

    for (i = 0; i < 5; i++) {
        printf("Digite um numero inteiro: ");
        scanf("%d", &vet[i]);
    }

    for (i = 0; i < 5; i++) {
        if (!(vet[i]%2)) {
            printf("\n%d", &vet[i]);
        }
    }
}