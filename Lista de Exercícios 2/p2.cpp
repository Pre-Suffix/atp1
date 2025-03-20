// Exercício 2 • Escreva um programa que retorne o valor absoluto de um inteiro
#include <stdlib.h>
#include <stdio.h>

int main() {

    int x;

    printf("Insira um numero: "); // recolhe um número do usuário
    scanf("%d", &x);

    if(x < 0) { // se o número é negativo, retorne o negativo dele, se não retorne ele
        printf("|x| = %d\n", -x);
    } else {
        printf("|x| = %d", x);
    }

    getchar(); // pausa a execução

    return 0;
}