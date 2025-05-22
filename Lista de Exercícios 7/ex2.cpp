// Exercício 2 • Crie um programa que:
//     - Declare dois vetores A e B de tamanho 5;
//     - Leia os valores para ambos os vetores;
//     - Imprima os valores de maneira intercalada (A[0], B[0], A[1], B[1], ...).
#include <iostream>

using namespace std;

int main() {
    // Declare dois vetores A e B de tamanho 5
    int A[5];
    int B[5];

    // Leia os valores para ambos os vetores
    for(int i = 0; i < 5; ++i)
        cout << "A[" << i << "]: " << A[i] << '\n';
    
    for(int i = 0; i < 5; ++i)
        cout << "B[" << i << "]: " << B[i] << '\n';

    // Imprima os valores de maneira intercalada
    for(int i = 0; i < 5; ++i) {
        cout << "A[" << i << "]: " << A[i] << '\n';
        cout << "B[" << i << "]: " << B[i] << '\n';
    }
    

    return 0;
}