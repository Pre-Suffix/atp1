// Exercício 1 • Crie uma função que recebe duas matrizes 3x3 e retorna a soma delas.
#include <iostream>

// biblioteca feita por mim para imprimir matrizes :)
#include "matrixPrint.cpp"

using namespace std;

int **somaMatrizes(int A[3][3], int B[3][3]) {
    int **R = (int **) malloc(3 * sizeof(int *));
    if(R == NULL) return NULL;

    for(int i = 0; i < 3; ++i) {
        R[i] = (int *) malloc(3 * sizeof(int));
        if(R[i] == NULL) return NULL;
    }

    for(int i = 0; i < 9; ++i)
        R[i / 3][i % 3] = A[i / 3][i % 3] + B[i / 3][i % 3];

    return R;
}

int main() {
    int m1[3][3];
    int m2[3][3];

    cout << "Digite os 9 valores da primeira matriz:\n";
    for(int i = 0; i < 9; ++i) {
        cin >> m1[i / 3][i % 3];
    }

    cout << "Digite os 9 valores da segunda matriz:\n";
    for(int i = 0; i < 9; ++i) {
        cin >> m2[i / 3][i % 3];
    }

    int **soma = somaMatrizes(m1, m2);

    cout << "Soma das matrizes:\n";
    matrixPrint2D(soma, 3, 3);

    free(soma);

    return 0;
}