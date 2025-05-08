// Exercício 2 • Faça uma função recursiva que retorne a soma de todos os números de 1 até n.
#include <iostream>

using namespace std;

int soma(int numero) {
    if(numero == 1) return 1;
    return numero + soma(numero - 1);
}

int main() {

    cout << "Insira um numero: ";

    int n;
    cin >> n;

    cout << "A soma de todos os valores ate n e: " << soma(n);

    return 0;
}