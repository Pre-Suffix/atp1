// Exercício 1 • Faça um programa que imprime um número aleatório de 2 até 12 (incluso).
#include <stdlib.h>
#include <stdio.h>
#include <time.h>

int main() {
    srand(time(NULL));
    printf("%d", (rand() % 11) + 2);

    getchar(); // pausa a execução

    return 0;
}