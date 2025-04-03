// Exercício 2 • Escreva um programa que calcule se a entrada é primo ou não
#include <stdlib.h>
#include <stdio.h>
#include <math.h>

int isPrime(long long int n) {
    if(n <= 1) return 0; // se n menor que 2, retorne falso
    else if(n == 2) return 1; // se n for 2, retorne verdadeiro
    else if((n & 1) == 0) return 0; // se n for par, retorne falso

    // verifique todo número impar i de 3 até a raiz quadrade de n se n é divisível por i
    // e retorne falso se isso for verdadeiro para qualquer caso
    for(long long int i = 3; i <= sqrt(n); i += 2) { 
        if((n % i) == 0) return 0;
    }

    // retorne verdadeiro se nenhuma condição foi cumprida
    return 1;
}

int main() {

    // obtém número do usuário
    long long n;
    printf("Insira um valor: ");
    scanf("%lld", &n);

    // verifica se o número é primo, retorne o resultado ao console
    if(isPrime(n) == 1) {
        printf("%lld e primo!\n", n);
    } else {
        printf("%lld nao e primo!\n", n);
    }

    getchar(); // pausa a execução

    return 0;
}