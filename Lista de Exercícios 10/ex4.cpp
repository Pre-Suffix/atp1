// Exercício 4 •  Escreva um programa que aloque um array de inteiros dinamicamente. O tamanho do array deve ser
// fornecido por meio do teclado. Os elementos do array devem ser valores atribuídos a partir da entrada
// pelo teclado. Imprima os valores do array. Em seguida, realoque a memória do array à metade do
// número atual de elementos. Imprima os valores restantes do array para confirmar se eles correspondem
// aos valores da primeira metade do array original.
#include <iostream>
#include <cstdlib>

using namespace std;

int main() {
    int tamanho;
    cout << "Insira o tamanho do array: ";
    cin >> tamanho;

    if(tamanho < 1) return 1;

    int *array = (int *) malloc(tamanho * sizeof(int));
    if(array == NULL) return 1;

    for(int i = 0; i < tamanho; ++i) {
        cout << "array[" << i << "]: ";
        cin >> array[i];
    }

    cout << "Array:\n";
    for(int i = 0; i < tamanho; ++i) cout << array[i] << ' ';

    tamanho /= 2;
    realloc(array, tamanho * sizeof(int));
    if(array == NULL) return;

    cout << "\nArray:\n";
    for(int i = 0; i < tamanho; ++i) cout << array[i] << ' ';

    return 0;
}