// Exercício 5 • Escreva um programa para ordenar três numeros inteiros
#include <stdlib.h>
#include <stdio.h>

int swap(int *a, int *b) { // inverte os dois valores por ponteiros
    int t;

    t = *a;
    *a = *b;
    *b = t;

    return 0;
}

int main() {
    // recolhe os numeros dos usuarios
    int x, y, z;
    printf("Insira o valor de x: ");
    scanf("%d", &x);

    printf("Insira o valor de y: ");
    scanf("%d", &y);

    printf("Insira o valor de z: ");
    scanf("%d", &z);

    if(x > y) swap(&x, &y); // se x > y, troque eles
    if(y > z) swap(&y, &z); // se y > z, troque eles
    if(x > y) swap(&x, &y); // se x > y, troque eles

    printf("%d, %d, %d\n", x, y, z);

    getchar(); // pausa a execução

    return 0;
}