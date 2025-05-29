// Exercício 4 • Dado um vetor dinâmico V de n inteiros, crie uma função que retorne um novo vetor
// S alocado dinamicamente que contenha apenas os elementos pares de V.

#include <iostream>

using namespace std;

int *pares(int *V, int n) {
    int *final = (int *) malloc(sizeof(int)); // Instancie o vetor com tamanho mínimo
    if(final == NULL) { // Caso falhe a alocação, retorne erro
        cout << "ERRO DE MEMORIA!";
        return {0};
    }

    int pares = 0;

    for(int i = 0; i < n; ++i) { // Para todo valor do vetor V:
        if(V[i] % 2 == 1) continue; // Se o valor do vetor for ímpar, pule para o próximo laço.

        pares++; // Aumente a quantidade de pares em 1.
        realloc(final, (pares + 1) * sizeof(int)); // Re-aloque o vetor final para caber o novo par encontrado.
        if(final == NULL) { // Caso falhe a alocação, retorne erro
            cout << "ERRO DE MEMORIA!";
            return {0};
        }

        final[pares] = V[i]; // Insira o par no vetor final.
    }

    final[0] = pares; // Defina como primeiro valor do vetor resposta o tamanho final do vetor.

    return final;
}

// Testes da função.
int main() {
    int n = 10;
    int V[n] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};

    cout << "{ " << V[0];
    for(int i = 1; i < n; ++i) cout << " , " << V[i];
    cout << " }";

    int *v_pares = pares(&V[0], n);

    if(v_pares[0] == 0) {
        cout << "Nao tem numeros pares no vetor.";
        return 0;
    }

    cout << "\n{ " << v_pares[1];
    for(int i = 2; i <= v_pares[0]; ++i) cout << " , " << v_pares[i];
    cout << " }";

    free(V); free(v_pares);

    return 0;
}