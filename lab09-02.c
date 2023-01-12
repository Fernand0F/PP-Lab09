#include <stdio.h>

void main() {
    int x, y;

    if (&x > &y) {
        printf("Maior endereco (x): %d", &x);
    }
    else {
        printf("Maior endereco (y): %d", &y);
    }
}