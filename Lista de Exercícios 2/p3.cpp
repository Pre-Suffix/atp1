// Exercício 3 • Escreva um programa que verifique se um número é par ou ímpar.
#include <stdlib.h>
#include <stdio.h>

int main() {

    int x;

    printf("Insira um numero: "); // recolhe um número do usuário
    scanf("%d", &x);

    if((x & 1) == 0) { // se o último bit da variável x for 0, retorne par, senão retorne ímpar
        printf("%d e par.\n", x);
    } else {
        printf("%d e impar\n", x);
    }

    getchar(); // pausa a execução

    return 0;
}