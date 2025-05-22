// Exercício 5 • Escreva uma função que use **dois ponteiros** para inverter a ordem dos elementos de um array.
#include <iostream>

using namespace std;

void inverter(int *x, int *y) {
    int t = *x;
    *x = *y;
    *y = t;
}

int main() {
    int T = 5;
    int A[T] = {1, 2, 3, 4, 5};
    
    // Imprima a array
    cout << "{ ";
    for(int i = 0; i < 5; ++i) cout << A[i] << (i == (T - 1) ? " }\n" : ", ");

    // Inverta 2 e 4
    cout << "Invertendo 2 e 4...\n";
    inverter(&A[1], &A[3]);

    // Imprima a array
    cout << "{ ";
    for(int i = 0; i < 5; ++i) cout << A[i] << (i == (T - 1) ? " }\n" : ", ");

    return 0;
}

// Nota: a biblioteca padrão <algorithm> do C++ inclui a função swap() que faz o mesmo papel. Usando-a, a chamada fica assim:
// swap(A[1], A[3]);