// EXERCÍCIO 8 • Use a biblioteca <math.h> e o método pow(base, expoente) para refazer o exercício anterior.
#include <stdlib.h>
#include <stdio.h>
#include <math.h>

int main() {

    float r;
    float pi = 3.14159;

    printf("Coloque o valor do raio: ");
    scanf("%f", &r);

    printf(
        "raio: %f\n%crea: %f", r, 160,
        pi * powf(r, 2)
    );

    getchar();

    return 0;
}