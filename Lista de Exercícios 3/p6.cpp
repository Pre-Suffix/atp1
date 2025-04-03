// Exercício 6 • Escreva um programa que desenhe um triângulo de asterísco
#include <stdlib.h>
#include <stdio.h>

int main() {

    int n; 
    
    // Obtenha a altura do triângulo
    printf("Digite a altura do triangulo: ");
    scanf("%d", &n);

    if(n > 0 && n < 255) {

        printf("*\n");

        for(int i = 1; i < n; ++i) {
            printf("*");
            for(int j = 0; j < i - 1; ++j) printf("%c", i == n - 1 ? '*' : ' ');
            printf("*\n");
        }

    } else printf("Altura fora dos limites.\n");

    getchar(); // pausa a execução

    return 0;
}