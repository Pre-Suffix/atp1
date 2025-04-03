// Exercício 6 • Escreva um programa que dado os lados de um triângulo classifique seu tipo
// (equilátero, isósceles, escaleno ou inválido).
#include <stdlib.h>
#include <stdio.h>

void swap(float *a, float *b) { // inverte os dois valores por ponteiros
   
    float t = *a;
    *a = *b;
    *b = t;
    
    free(&t);
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

    if(c >= (a + b)) { // se o maior lado for maior ou igual que a soma dos dois outros lados, retorne inválido
        printf("Nao e possivel um triangulo com esses lados.\n");
    } else if(a == b && b == c) { // se o triângulo tem lados iguais, retorne equilátero
        printf("O triangulo e equilatero!\n");
    } else if(a == b || b == c) { // se dois lados forem iguais, retorne isóceles
        printf("O triangulo e isoceles!\n");
    } else { // se nenhuma condição anterior for cumprida, retorne escaleno
        printf("O triangulo e escaleno!\n");
    }

    getchar(); // pausa a execução

    return 0;
}