// Exercício 1 • main pode ser chamada recursivamente?
// Escreva um programa que contenha uma função main.
// Inclua um variável global count inicializada como 0.
// Pós-incremente e imprima o valor de count cada vez que main for chamada.
// Execute seu programa. O que acontece?
#include <iostream>

using namespace std;

int count = 0;

int main() {

    cout << count;
    count++;

    if(count < 10) main();

    return 0;
}

// Resultado: O programa roda normalmente, devido a condição de saída.