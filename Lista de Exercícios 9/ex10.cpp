// Exercício 10 • Usando as funções dos exercícios 6, 7, 8 e 9, faça um programa que realize o
// produto vetorial de duas matrizes alocadas dinamicamente (quando o produto
// vetorial for possível).
#include <iostream>

// biblioteca feita por mim para imprimir matrizes :)
#include "matrixPrint.cpp" // ex9 - matrixPrint2D

// Importe os outros exercícios
#include "ex6.cpp" // aloqueMatriz
#include "ex7.cpp" // liberarMatriz
#include "ex8.cpp" // preencherMatriz

using namespace std;

int main() {
    int linhasMatriz1, colunasMatriz1;
    cout << "Insira Linhas e Colunas da Primeira Matriz:\n";
    cin >> linhasMatriz1 >> colunasMatriz1;

    int **m1 = aloqueMatriz(colunasMatriz1, linhasMatriz1);
    if(m1 == NULL) return 1;

    cout << "Insira valores da primeira matriz:\n";
    for(int i = 0; i < linhasMatriz1; ++i) {
        for(int j = 0; j < colunasMatriz1; ++j)
            cin >> m1[i][j];
    }

    int linhasMatriz2, colunasMatriz2;
    cout << "Insira Linhas e Colunas da Segunda Matriz:\n";
    cin >> linhasMatriz2 >> colunasMatriz2;

    if(colunasMatriz1 != linhasMatriz2) {
        cout << "Produto vetorial impossivel.";   
        return 1;
    }

    int **m2 = aloqueMatriz(colunasMatriz2, linhasMatriz2);
    if(m1 == NULL) return 1;

    cout << "Insira valores da segunda matriz:\n";
    for(int i = 0; i < linhasMatriz2; ++i) {
        for(int j = 0; j < colunasMatriz2; ++j)
            cin >> m2[i][j];
    }


    int **mf = aloqueMatriz(colunasMatriz2, linhasMatriz1);
    if(mf == NULL) return 1;

    preencherMatriz(mf, colunasMatriz2, linhasMatriz1, 0);
    for(int i = 0; i < linhasMatriz1; ++i) {
        for(int j = 0; j < colunasMatriz2; ++j) {
            for(int k = 0; k < linhasMatriz2; ++k) 
                mf[i][j] += m1[i][k] * m2[k][j];
        }
    }

    cout << "M1 x M2:\n";
    matrixPrint2D(mf, linhasMatriz1, colunasMatriz2);

    liberarMatriz(m1, linhasMatriz1);
    liberarMatriz(m2, linhasMatriz2);
    liberarMatriz(mf, linhasMatriz1);
    
    return 0;
}