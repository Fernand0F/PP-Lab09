#include <stdio.h>

void main() {
    int i = 1, *pi;
    float r = 1.5, *pr;
    char c = 'a', *pc;

    pi = &i;
    pr = &r;
    pc = &c;

    printf("Inteiro...........: %d", i);
    printf("\nReal..............: %.2f", r);
    printf("\nChar..............: %c", c);

    *pi = 2;
    *pr = 2.5;
    *pc = 'b';

    printf("\n\nInteiro modificado: %d", i);
    printf("\nReal modificado...: %.2f", r);
    printf("\nChar modificado...: %c", c);
}