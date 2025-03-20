// Exercício 8 • Escreva um programa que verifique se o triângulo dado é retângulo.
#include <stdlib.h>
#include <stdio.h>

int swap(float *a, float *b) { // inverte os dois valores por ponteiros
    float t;

    t = *a;
    *a = *b;
    *b = t;

    return 0;
}

int main() {

    float a, b, c;

    // recolhe os valores dos lados do triângulo
    printf("Insira o valor do primeiro lado: ");
    scanf("%f", &a);

    printf("Insira o valor do segundo lado: ");
    scanf("%f", &b);

    printf("Insira o valor do terceiro lado: ");
    scanf("%f", &c);

    // ordena os lados do triângulo de menor para maior
    if(a > b) swap(&a, &b); // se x > y, troque eles
    if(b > c) swap(&b, &c); // se y > z, troque eles
    if(a > b) swap(&a, &b); // se x > y, troque eles

    if(c*c == (a*a + b*b)) { // se o triângulo obedecer o teorema de pitágoras, retorne retângulo
        printf("O triangulo e retangulo!\n");
    } else { // se não, retorne não é retângulo
        printf("O triangulo nao e retangulo.\n");
    }

    getchar(); // pausa a execução

    return 0;
}