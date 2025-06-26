// Exercício 4 • Usando int, faça uma struct para representar números decimais com até 4 casas e
// faça funções para somar, subtrair e imprimir o valor.
#include <iostream>
#include <cmath>

using namespace std;

typedef struct decimal {
    int inteiro = 0;
    int casas[4] = { 0 };

    void imprimir() {
        cout << this->inteiro << '.';
        for(int i = 0; i < 4; ++i) cout << this->casas[i];
        cout << '\n';
    }

    void somar(double valor) {
        if(valor < 0) return this->subtrair(valor * -1);

        valor *= 10000;

        for(int i = 3; i >= 0; --i) {
            this->casas[i] += (int) floor(valor) % 10;

            if(this->casas[i] > 9) {
                if(i == 0) this->inteiro += this->casas[i] / 10;
                else this->casas[i - 1] += this->casas[i] / 10;

                this->casas[i] %= 10;
            }

            valor *= 0.1;
        }

        this->inteiro += (int) floor(valor);
    }

    void subtrair(double valor) {
        if(valor < 0) return this->somar(valor * -1);

        valor *= 10000;

        for(int i = 3; i >= 0; --i) {
            int n = (int) floor(valor) % 10;

            if(n <= this->casas[i]) this->casas[i] -= n;
            else {
                this->casas[i] -= (n - 10);

                if(i == 0) this->inteiro--;
                else this->casas[i - 1]--;
            }

            valor *= 0.1;
        }

        this->inteiro -= (int) floor(valor);

        // Numeros negativos quebram o algoritmo, prefiri não incluí-los.
        if(this->inteiro < 0) {
            this->inteiro = 0;
            for(int i = 0; i < 3; ++i) this->casas[i] = 0;
        }
    }

} Decimal;

int main() {
    Decimal numero;

    numero.imprimir();

    numero.somar(88.7723);
    numero.subtrair(3.0001);

    numero.imprimir();

    return 0;
}