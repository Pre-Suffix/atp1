// Exercício 6 • Faça uma função que aloque uma matriz com as linhas e colunas desejadas pelo usuário.
#include <iostream>

using namespace std;

int **aloqueMatriz(int colunas, int linhas) {
    int **R = (int **) malloc(linhas * sizeof(int *));
    if(R == NULL) return NULL;

    for(int i = 0; i < linhas; ++i) {
        R[i] = (int *) malloc(colunas * sizeof(int));
        if(R[i] == NULL) return NULL;
    }

    return R;
}