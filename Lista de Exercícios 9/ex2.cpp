// Exercício 2 • Escreva uma função que calcula a transposta de uma matriz 3x3.
#include <iostream>

// biblioteca feita por mim para imprimir matrizes :)
#include "matrixPrint.cpp"

using namespace std;

int **obterTransposta(int matriz[3][3]) {
    int **R = (int **) malloc(3 * sizeof(int *));
    if(R == NULL) return NULL;

    for(int i = 0; i < 3; ++i) {
        R[i] = (int *) malloc(3 * sizeof(int));
        if(R[i] == NULL) return NULL;
    }

    for(int i = 0; i < 9; ++i)
        R[i % 3][i / 3] = matriz[i / 3][i % 3];

    return R;
}

int main() {
    int matriz[3][3];

    cout << "Digite os 9 valores da matriz:\n";
    for(int i = 0; i < 9; ++i) {
        cin >> matriz[i / 3][i % 3];
    }

    int **transposta = obterTransposta(matriz);

    matrixPrint2D(transposta, 3, 3);

    for(int i = 0; i < 3; ++i) free(transposta[i]);
    free(transposta);

    return 0;
}