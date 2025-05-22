// Exercício 3 • Crie uma função que verifique se um elemento x está presente no vetor A de tamanho T.
#include <iostream>

using namespace std;

bool presente(int x, int *A, int T) {
    // Itere em todos os itens do vetor, e se o valor for x, retorne verdade
    for(int i = 0; i < T; ++i) {
        if(*(A + i) == x) return true;
    }

    return false;
}

int main() {
    int Arr1[5] = {5, 4, 3, 2, 1};
    int Arr2[5] = {6, 7, 8, 9, 0};

    // Testes
    cout << presente(7, &Arr1[0], 5) << '\n';
    cout << presente(7, &Arr2[0], 5) << '\n';

    return 0;
}