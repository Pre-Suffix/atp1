// Exercício 1 • Peça ao usuário um número n, aloque um vetor de inteiros com n posições,
// preencha com valores sequenciais e imprima.

#include <iostream>

using namespace std;

int main() {
    int n;
    int *v;

    // Obtenha valor do usuário
    cout << "Insira um numero: ";
    cin >> n;

    // Aloque o vetor usando malloc
    v = (int *) malloc(n * sizeof(int));
    if(v == NULL) { // Caso falhe a alocação, encerre o programa
        cout << "ERRO DE MEMORIA!";
        return 1;
    }

    // Preencha o vetor
    for(int i = 0; i < n; ++i)
        v[i] = i + 1;

    // Imprima os valores do vetor v
    for(int i = 0; i < n; ++i)
        cout << i << ": " << v[i] << '\n';

    free(v);
    
    return 0;
}