// Exercício 5 • Simule uma matriz 3x3 preenchida com 0, usando um único vetor alocado
// dinamicamente. Imprima o vetor no formato de matriz.

#include <iostream>

using namespace std;

int main(void) {
    // Aloque um vetor de ponteiros de int como base para a matriz
    int tamanho = 3;
    int **matriz = (int **) malloc(tamanho * sizeof(int));

    if(matriz == NULL) { // Caso falhe a alocação, encerre o programa
        cout << "ERRO DE MEMORIA!";
        return 1;
    }
    
    // Preencha o vetor com vetores, formando uma matriz.
    for(int i = 0; i < tamanho; ++i) {
        matriz[i] = (int *) calloc(tamanho, sizeof(int));
        if(matriz[i] == NULL) { // Caso falhe a alocação, encerre o programa
            cout << "ERRO DE MEMORIA!";
            return 1;
        }   
    }

    // Imprima todas as linhas da matriz
    for(int y = 0; y < tamanho; ++y) {
        cout << "[ ";
        for(int x = 0; x < tamanho; ++x) {
            cout << matriz[y][x] << ' ';
        }
        cout << "]\n";
    }
    
    free(matriz);

    return 0;
}

int _main() {
    // Aloque uma matriz quadrada baseada em um vetor de int com tamanho definido pela variável tamanho.
    int tamanho = 3;
    int *matriz = (int *) calloc(tamanho * tamanho, sizeof(int));

    if(matriz == NULL) { // Caso falhe a alocação, encerre o programa
        cout << "ERRO DE MEMORIA!";
        return 1;
    }

    // Imprima todas as linhas da matriz
    for(int y = 0; y < tamanho; ++y) {
        cout << "[ ";
        for(int x = 0; x < tamanho; ++x) {
            cout << matriz[y + (x * tamanho)] << ' ';
        }
        cout << "]\n";
    }

    free(matriz);

    return 0;
}