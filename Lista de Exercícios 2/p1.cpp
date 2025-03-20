// Exercício 1 • Escreva um programa que imprime se um inteiro é positivo ou negativo.
#include <stdlib.h>
#include <stdio.h>

int main() {

    int x;

    printf("Insira um numero: "); // recolhe um número do usuário
    scanf("%d", &x);

    if(x < 0) { // verifica se o número é positivo ou não, e imprime o resultado
        printf("O numero e negativo!\n");
    } else {
        printf("O numero e positivo!\n");
    }

    getchar(); // pausa a execução

    return 0;
}