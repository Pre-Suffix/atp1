// Exercício 8 • Faça uma função para o usuário preencher uma matriz dinâmica.
#include <iostream>

void preencherMatriz(int **matriz, int colunas, int linhas, int preenchimento) {
    int maxLength = colunas * linhas;
    for(int i = 0; i < maxLength; ++i) matriz[i / colunas][i % colunas] = preenchimento;
}