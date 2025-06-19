// Exercício 1 • Escreva um programa que receba de argumento, dois números (inicio e fim) e
// imprima todos os números primos nesse intervalo.
#include <iostream>
#include <bits/stdc++.h>

using namespace std;

int primo(int n) {
    if(n <= 1) return 0; // se n menor que 2, retorne falso
    else if(n == 2) return 1; // se n for 2, retorne verdadeiro
    else if((n & 1) == 0) return 0; // se n for par, retorne falso

    for(int i = 3; i <= sqrt(n); i += 2) { 
        if((n % i) == 0) return 0;
    }

    return 1;
}

int main(int argc, char *argv[]) {
    if(argc < 3) {
        cout << "Erro de Sintaxe. Sintaxe correta: ex1 <INICIO> <FIM>";
        return 1;
    }

    int inicio = atoi(argv[1]);
    int fim = atoi(argv[2]);

    for(int i = inicio; i <= fim; ++i) {
        if(primo(i)) cout << i << ' ';
    }


    return 0;
}