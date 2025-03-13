// EXERCÍCIO 1 • Escreva um programa que realize a soma de dois números inteiros que são dados de entrada pelo usuário.
#include <stdlib.h>
#include <stdio.h>

int main() {

    int x, y, r;

    printf("Coloque o valor de x: ");
    scanf("%d", &x);

    printf("Coloque o valor de y: ");
    scanf("%d", &y);

    r = x + y;

    printf("x: %d\ny: %d\nx + y: %d\n", x, y, r);

    getchar();

    return 0;
}