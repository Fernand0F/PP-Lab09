#include <stdio.h>

void main() {
    float vet[3][3];
    int i, j;

    for (i = 0; i < 3; i++) {
        for (j = 0; j < 3; j++) {
            printf("%d\n", &vet[i][j]);
        } 
    } 
}