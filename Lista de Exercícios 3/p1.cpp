// Exercício 1 • Escreva um programa que calcule o valor fatorial dado a entrada usando laços.
#include <stdlib.h>
#include <stdio.h>

int main() {

    int n;
    int x = 1;

    // Obtém um número do usuário
    printf("Insira um numero: ");
    scanf("%d", &n);

    // Calcula o Fatorial
    for(int i = 1; i <= n; ++i) {
        x *= i;
    }

    printf("%d! = %d\n", n, x);

    getchar(); // pausa a execução

    return 0;
}