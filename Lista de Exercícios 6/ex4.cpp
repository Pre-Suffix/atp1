// Exercício 4 • Escreva uma função que calcule base elevada por expoente usando recursão
// (assuma expoente positiva).
#include <iostream>

using namespace std;

int elevar(int base, int expoente) {
    if(expoente == 1) return base;
    return base * elevar(base, expoente - 1);
}

int main() {

    int base, expoente;
    cout << "base: ";
    cin >> base;
    cout << "expoente: ";
    cin >> expoente;

    cout << elevar(base, expoente);

    return 0;
}