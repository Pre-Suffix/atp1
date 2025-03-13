// EXERCÍCIO 5 • Escreva um programa que calcule a soma, subtração, multiplicação e divisão de ‘a’ por ‘b’.
#include <stdlib.h>
#include <stdio.h>

int main() {

    int x, y;

    printf("Coloque o valor de x: ");
    scanf("%d", &x);

    printf("Coloque o valor de y: ");
    scanf("%d", &y);

    printf(
        "x: %d\ny: %d\nx + y: %d\nx - y: %d\nx * y: %d\nx / y: %f\n", 
        x, y, 
        x + y,
        x - y,
        x * y,
        ((float) x) / ((float) y)
    );

    getchar();

    return 0;
}