// Exercício 5 • Escreva uma função que use **dois ponteiros** para inverter a ordem dos elementos de um array.
#include <iostream>

using namespace std;

void inverter(int *start, int *end) {
    int lim = (end - start - 1) / 2;
    for(int i = 0; i <= lim; ++i) {
        swap(*(start + i), *(end - i));
    }
}

int main() {
    int T = 6;
    int A[T] = {1, 2, 3, 4, 5, 6};
    
    // Imprima a array
    cout << "{ ";
    for(int i = 0; i < T; ++i) cout << A[i] << (i == (T - 1) ? " }\n" : ", ");

    // Inverta a array
    inverter(&A[0], &A[T - 1]);

    // Imprima a array
    cout << "{ ";
    for(int i = 0; i < T; ++i) cout << A[i] << (i == (T - 1) ? " }\n" : ", ");

    return 0;
}