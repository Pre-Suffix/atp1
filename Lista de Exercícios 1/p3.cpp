// EXERCÍCIO 3 • Escreva um programa que realize a soma de dois números “quebrados” que são dados de entrada pelo usuário.
#include <stdlib.h>
#include <stdio.h>

int main() {

    float x, y;

    printf("Coloque o valor de x: ");
    scanf("%f", &x);

    printf("Coloque o valor de y: ");
    scanf("%f", &y);

    printf("x: %f\ny: %f\nx + y: %f\n", x, y, x + y);

    getchar();

    return 0;
}