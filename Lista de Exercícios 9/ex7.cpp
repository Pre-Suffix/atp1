// Exercício 7 • Faça uma função para liberar o espaço alocado pela matriz (a quantidade de linha
// entra como parâmetro).
#include <iostream>

using namespace std;

void liberarMatriz(int **matriz, int linhas) {
    for(int i = 0; i < linhas; ++i) free(matriz[i]);
    free(matriz);
}