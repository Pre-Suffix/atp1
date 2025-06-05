// Exercício 4 • Calcule a soma dos elementos da diagonal principal de uma matriz 3x3.
#include <iostream>

using namespace std;

int main() {
    int matriz[3][3] = {
        {1, 2, 3},
        {4, 5, 6},
        {7, 8, 9}
    };
    int soma = 0;

    for(int i = 0; i < 3; ++i) soma += matriz[i][i];

    cout << soma;

    return 0;
}