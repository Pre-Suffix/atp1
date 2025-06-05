// Exercício 5 • Implemente o produto vetorial de duas matrizes 3x3.
#include <iostream>

// biblioteca feita por mim para imprimir matrizes :)
#include "matrixPrint.cpp"

using namespace std;

int main() {
    int matriz1[3][3] = {
        {1, 2, 3},
        {4, 5, 6},
        {7, 8, 9}
    };

    int matriz2[3][3] = {
        {9, 8, 7},
        {6, 5, 4},
        {3, 2, 1}
    };

    int produto[3][3];

    for(int i = 0; i < 9; ++i) {
        int linha = i / 3;
        int coluna = i % 3;

        produto[linha][coluna] = (
            matriz1[linha][0] * matriz2[0][coluna] +
            matriz1[linha][1] * matriz2[1][coluna] +
            matriz1[linha][2] * matriz2[2][coluna]  
        );
    }

    matrixPrint((int *) &produto[0][0], 3, 3);

    return 0;
}