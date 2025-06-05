// Exercício 3 • Verifique se um número está presente em uma matriz e retorne sua posição (linha,
// coluna).
#include <iostream>

using namespace std;

int main() {
    int linhas = 3;
    int colunas = 3;
    int matriz[linhas][colunas] = {
        {6, 8, 9},
        {1, 2, 3},
        {4, 0, 2}
    };

    int numero;
    cout << "Insira um numero: ";
    cin >> numero;

    bool presente = false;

    // Para cada valor da matriz, verifique se ele é igual ao numero do usuário.
    // Se for, mude o valor da booleana "presente" e saia do laço.
    for(int i = 0; i < linhas * colunas; ++i) {
        if(matriz[i / colunas][i % colunas] == numero) {
            presente = true;
            break;
        }
    }

    if(presente) cout << "Esse numero esta na matriz!";
    else cout << "Esse numero nao esta na matriz.";

    return 0;
}