// Exercício 2 • Faça uma função para arredondar valor para dada casas. Se casas não for
// fornecido, arredonde para 0 casas decimais (casas = 0).
#include <iostream>
#include <cmath>

using namespace std;

int main(int argc, char *argv[]) {
    if(argc < 2) {
        cout << "Erro de Sintaxe. Sintaxe correta: ex2 <VALOR> (CASAS)";
        return 1;
    }

    double valor = atof(argv[1]);
    int casas = argc > 1 ? atoi(argv[2]) : 0;

    valor *= pow(10, casas);
    valor = ((double) floor(valor)) / pow(10, casas);

    cout << valor << '\n';

    return 0;
}