 // EXERCÍCIO 4 • Escreva um programa que receba dois valores e troque os mesmos (a = 1 e b = 2, mas no final, a == 2 e b == 1);
#include <stdlib.h>
#include <stdio.h>

int main() {

    int x, y;

    printf("Coloque o valor de x: ");
    scanf("%d", &x);

    printf("Coloque o valor de y: ");
    scanf("%d", &y);

    x += y;
    y -= x;
    x += y;
    y *= -1;

    printf("x: %d\ny: %d\n", x, y);

    getchar();

    return 0;
}