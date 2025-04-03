// Exercício 5 • Escreva um programa que calcule uma cadeia de fibonacci até n
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

        while(true) {
            t = x2; // Coloque o atual valor da sequência em uma variável temporária
            x2 += x1; // Some os dois últimos valores para obter o atual
            x1 = t; // Coloque o valor da variável temporária na variável do último valor
            if(x2 > n) break;
            printf(", %d", x2); // Mande para o console o atual valor
        }
    } else printf("0");

    getchar(); // pausa a execução

    return 0;
}