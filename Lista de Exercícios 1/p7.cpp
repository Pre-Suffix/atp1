// EXERCÍCIO 7 • Escreva um programa que calcule a área de um círculo dado seu raio.
#include <stdlib.h>
#include <stdio.h>

int main() {

    float r;
    float pi = 3.14159;

    printf("Coloque o valor do raio: ");
    scanf("%f", &r);

    printf(
        "raio: %f\n%crea: %f", r, 160,
        pi * r * r
    );

    getchar();

    return 0;
}