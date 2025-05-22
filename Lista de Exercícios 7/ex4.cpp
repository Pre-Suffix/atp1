// Exercício 4 • Faça uma função que dados dois vetores A e B de tamanho T, imprima os elementos que estão em ambos os vetores.
#include <iostream>

using namespace std;

bool presente(int x, int *A, int T) {
    // Itere em todos os itens do vetor, e se o valor for x, retorne verdade
    for(int i = 0; i < T; ++i) {
        if(*(A + i) == x) return true;
    }

    return false;
}

void interseccao(int *A, int *B, int T) {
    // Itere por todos os valores de A, e verifique para cada se está presente em B.
    // Se estiver, imprima.
    for(int i = 0; i < T; ++i) {
        if(presente(*(A + i), B, T)) 
            cout << *(A + i) << '\n';
    }
}

int main() {
    int T = 10;
    int A[T] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    int B[T] = {3, 5, 7, 9, 11, 13, 15, 17, 19, 21};

    interseccao(&A[0], &B[0], T);

    return 0;
}