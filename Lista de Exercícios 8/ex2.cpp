// Exercício 2 • Faça um programa que armazene todos os valores de um vetor passando pelo
// usuário. Peça ao usuário um número n, inicialmente, que representa quantos
// números serão armazenados.

#include <iostream>

using namespace std;

int main() {
    int n;
    int *v;

    // Obtenha valor do usuário
    cout << "Insira um numero: ";
    cin >> n;

    // Aloque a memória do vetor usando malloc
    v = (int *) malloc(n * sizeof(int));
    if(v == NULL) { // Caso falhe a alocação, encerre o programa
        cout << "ERRO DE MEMORIA!";
        return 1;
    }

    // Preencha o vetor com valores do usuário
    for(int i = 0; i < n; ++i) {
        cout << "v[" << i << "]: ";
        cin >> v[i];
    }

    // Imprima os valores do vetor, por verificação.
    cout << "{";
    for(int j = 0; j < n; ++j) cout << (j != 0 ? ", " : " ") << v[j];
    cout << " }";

    free(v);

    return 0;
}