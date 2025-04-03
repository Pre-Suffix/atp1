// Exercício 4 • Escreva um programa que calcule até o n-ésimo termo de uma cadeia de fibonacci.
#include <stdlib.h>
#include <stdio.h>

int main() {

    int n, t;
    int x1 = 0;
    int x2 = 1;

    // Obtém um número do usuário
    printf("Insira um numero: ");
    scanf("%d", &n);

    if(n > 1) {
        printf("0, 1"); // Escreva o começo da cadeia

        for(int i = 1; i < n; ++i) {
            t = x2; // Coloque o atual valor da sequência em uma variável temporária
            x2 += x1; // Some os dois últimos valores para obter o atual
            x1 = t; // Coloque o valor da variável temporária na variável do último valor
            printf(", %d", x2); // Mande para o console o atual valor
        }
    } else if(n == 1) printf("0, 1");
    else printf("0");

    getchar(); // pausa a execução

    return 0;
}