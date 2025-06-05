#include <iostream>
#include <bits/stdc++.h>
#include "../matrixPrint.cpp"

using namespace std;

int main(void) {
    int width;
    cout << "Largura: ";
    cin >> width;

    int height;
    cout << "Altura: ";
    cin >> height;

    int **matriz = (int **) calloc(height, sizeof(int *));
    if(matriz == NULL) return 1;

    for(int i = 0; i < height; ++i) {
        matriz[i] = (int *) malloc(width * sizeof(int));
        if(matriz[i] == NULL) return 1;
    }

    matrixPrint((int *) &matriz[0], height, width);

    for(int i = 0; i < height; ++i) free(matriz[i]);
    free(matriz);

    return 0;
}