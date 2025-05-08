// Exercício 3 • Faça uma função recursiva que retorne a quantidade de dígitos de um número inteiro
#include <iostream>

using namespace std;

int digitos(int n) {
    if(n < 10) return 1;
    return 1 + digitos(n / 10);
}

int main() {

    int n;
    cout << "numero: ";
    cin >> n;
    cout << digitos(n);

    return 0;
}