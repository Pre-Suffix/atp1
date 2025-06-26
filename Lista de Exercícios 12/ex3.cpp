// Exercício 3 • Faça uma struct para representar matrizes de inteiros pela lógica de nós.
#include <iostream>

using namespace std;

typedef struct no {
    int valor;
    struct no *proximo;

    void adicionar(int valor) {
        if(this->proximo == NULL) {
            this->valor = valor;

            this->proximo = (no *) malloc(sizeof(no));
            this->proximo->proximo = NULL;

            return;
        }

        this->proximo->adicionar(valor);
    }

    void imprimir() {
        if(this->proximo == NULL) return;

        cout << this->valor << ' ';

        this->proximo->imprimir();
    }

    void liberar() {
        if(this->proximo != NULL) {
            this->proximo->liberar();
        }

        free(this);
    }

    int tamanho() {
        int i = 0;
        no *atual = this;
        for(; atual->proximo != NULL; ++i) atual = atual->proximo;

        return i;
    }

} No;

No *iniciar() {
    No *lista = (No *) malloc(sizeof(No));
    lista->proximo = NULL;

    return lista;
}

int main() {
    No lista = *iniciar();

    cout << lista.tamanho() << '\n';

    for(int i = 1; i <= 10; ++i)
        lista.adicionar(i * 5);

    lista.imprimir();

    cout << '\n' << lista.tamanho();

    lista.liberar();

    return 0;
}