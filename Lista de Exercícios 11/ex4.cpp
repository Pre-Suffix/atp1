// Exercício 4 • Faça um programa que calcule a soma de duas matrizes quadradas de inteiros que
// são passadas em um arquivo matriz.txt, a primeira linha do arquivo indica as
// dimensões da matriz
#include <iostream>
#include <bits/stdc++.h>

using namespace std;

/**
 * Aloca uma matriz dinamicamente
 */
int **aloqueMatriz(int colunas) {
    int **R = (int **) malloc(colunas * sizeof(int *));
    if(R == NULL) return NULL;

    for(int i = 0; i < colunas; ++i) {
        R[i] = (int *) malloc(colunas * sizeof(int));
        if(R[i] == NULL) return NULL;
    }

    return R;
}

/**
 * Retorna o tamanho de qualquer inteiro
 */
int numberLength(int number) {
    // log10(0) é indefinido, mas 0 tem tamanho 1.
    if(number == 0) return 1;

    // Ache o tamanho do inteiro como um valor positivo.
    int r = floor(log10(abs(number)) + 1);

    // Se o número for negativo, adicione um ao tamanho devido ao sinal de negativo.
    if(number < 0) r++;

    return r;
}

/**
 * Imprime uma matriz bi-dimensional para stdout
 */
void matrixPrint(int **matrix, int height, int width) {
    int maxLength = width * height; // Último índice do inteiro.
    int columnLength[width] = {0}; // Vetor com os valores de enchimento para cada coluna

    // Conversão de um vetor de ponteiros para um vetor uni-dimensional
    int *sMatrix = (int *) malloc(height * width * sizeof(int));
    if(sMatrix == NULL) return;

    for(int i = 0; i < maxLength; ++i) sMatrix[i] = matrix[i / width][i % width];
    
    // Acha o valor de enchimento para cada coluna baseando-se no número de maior tamanho
    for(int i = 0; i < width; ++i) {
        for(int j = i; j < maxLength; j += width) { 
            if(numberLength(sMatrix[j]) > columnLength[i])
                columnLength[i] = numberLength(sMatrix[j]);
        }
    }

    // Delimitadores da matriz para Terminais Windows
    // 0: │, 1: ┐, 2: └, 3: ┘. 4: ┌
    const char bars[5] = {
        (char) 179, 
        (char) 191, 
        (char) 192, 
        (char) 217, 
        (char) 218
    };

    // Rotina para imprimir cada valor da matriz
    for(int i = 0; i < maxLength; ++i) {

        // Imprimir o delimitador do lado esquerdo da matriz caso precise
        if(i % width == 0) {

            if(height == 1) std::cout << '[';
            else if(i == 0) std::cout << bars[4]; 
            else if(i == ((width * height) - width)) std::cout << bars[2];
            else std::cout << bars[0];

            std::cout << ' ';
        }

        // Imprime um número da matriz
        std::cout << sMatrix[i] << ' ';

        // Imprime enchimento caso necessário
        int nLen = numberLength(sMatrix[i]);
        if(columnLength[i % width] - nLen > 0)
            std::cout << std::string(columnLength[i % width] - nLen, ' ');

        // Imprimir o delimitador do lado direito da matriz caso precise
        if((i + 1) % width == 0) {

            if(height == 1) std::cout << ']';
            else if(i == (width - 1)) std::cout << bars[1];
            else if(i == (width * height) - 1) std::cout << bars[3];
            else std::cout << bars[0];

            std::cout << '\n';
        }
    }

}

void liberarMatriz(int **matriz, int linhas) {
    for(int i = 0; i < linhas; ++i) free(matriz[i]);
    free(matriz);
}

int main() {
    FILE *matriz = fopen("matriz.txt", "r");
    if(!matriz) return 1;

    int size, valor;
    fscanf(matriz, "%d", &size);

    int **matrizSomada = aloqueMatriz(size);

    for(int i = 0; i < (size * size); ++i) {
        fscanf(matriz, "%d", &valor);
        matrizSomada[i / size][i % size] = valor;
    }
    
    for(int i = 0; i < (size * size); ++i) {
        fscanf(matriz, "%d", &valor);
        matrizSomada[i / size][i % size] += valor;
    }

    matrixPrint(matrizSomada, size, size);

    liberarMatriz(matrizSomada, 3);
    fclose(matriz);

    return 0;
}