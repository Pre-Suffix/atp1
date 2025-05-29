// Exercício 3 • Repita o exercício anterior, mas dessa vez o valor '-1' define que não haverá mais
// valores a serem armazenados no vetor (para tal, use o realloc)

#include <iostream>

using namespace std;

int main() {
    int *v = (int *) malloc(sizeof(int));
    int i = 0;
    int n = -1;

    if(v == NULL) { // Caso falhe a alocação, encerre o programa
        cout << "ERRO DE MEMORIA!";
        return 1;
    }

    // Informativo ao usuário
    cout << "Insira '-1' para sair.\n";

    // Laço infinito
    while(true) {
        // Obtenha o valor do usuário
        cout << "v[" << i << "]: ";
        cin >> n;

        // Caso o valor obtido seja -1, quebre o laço
        if(n == -1) break;

        realloc(v, (i + 1) * sizeof(int)); // Re-aloque a quantidade de memória requerida
        if(v == NULL) { // Caso falhe a alocação, encerre o programa
            cout << "ERRO DE MEMORIA!";
            return 1;
        }

        v[i] = n; // Insira o valor do usuário no vetor
        i++; // Preparação para o próximo laço
    }

    // Imprima os valores do vetor, por verificação.
    cout << "{";
    for(int j = 0; j < i; ++j) cout << (j != 0 ? ", " : " ") << v[j];
    cout << " }";

    free(v);

    return 0;
}