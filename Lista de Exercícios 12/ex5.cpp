// Exercício 5 • Adapte o menu interativo feito na lista de exercícios anterior e crie uma struct menu
// com uma lista de uma struct produto, crie uma função para inicializar um produto e
// atualize o exercício.
#include <iostream>
#include <cstdio>
#include <string.h>

using namespace std;

typedef struct produto {
    char nome[100];
    int quantia;
    produto *proximo;

    void adicionar(char nome[100]) {
        produto *atual = this;
        while(atual->proximo != NULL) atual = atual->proximo;

        strcpy(atual->nome, nome);
        atual->quantia = 0;
        
        produto *proximo = (produto *) malloc(sizeof(produto));

        proximo->proximo = NULL;
        proximo->quantia = 0;

        atual->proximo = proximo;
    }

    void imprimir() {
        produto *atual = this;
        for(int i = 0; atual->proximo != NULL; ++i) {
            cout << '(' << i << ") - " << atual->nome << '\n';
            atual = atual->proximo;
        }
    }

    int tamanho() {
        produto *atual = this;
        int i = 0;
        for(; atual->proximo != NULL; ++i) atual = atual->proximo;

        return i;
    }
    
    void adicionarQuantia(int index) {
        produto *atual = this;
        for(int i = 0; i < index && this->proximo != NULL; ++i) atual = atual->proximo;

        atual->quantia++;
    }

    void liberar() {
        if(this->proximo != NULL) {
            this->proximo->liberar();
        }

        free(this);
    }

} Produto;

Produto *iniciar() {
    Produto *menu = (Produto *) malloc(sizeof(produto));

    menu->quantia = 0;
    menu->proximo = NULL;
    strcpy(menu->nome, "");
}

int main() {
    FILE *menutxt = fopen("menu.txt", "r");
    if(!menutxt) return 1;

    int n;
    fscanf(menutxt, "%d", &n);
    
    Produto *menu = iniciar();

    char c = fgetc(menutxt);
    char menuItem[100];
    int i = 0;
    for(; c != EOF; ++i) {
        if(c == '\n' || i == 99) {
            menuItem[i] = '\0';
            i = -1;
            menu->adicionar(menuItem);
        } else menuItem[i] = c;

        c = fgetc(menutxt);
    }

    fclose(menutxt);

    menuItem[i] = '\0';
    menu->adicionar(menuItem);

    int size = menu->tamanho();
    
    menu->imprimir();
    cout << "Digite o numero correspondente ao item para adiciona-lo ao carrinho. (-1 para acabar o pedido).\n";

    int itens = 0;
    while(true) {
        int item = -1;
        cout << "\r(Itens: " << itens << ") ";
        cin >> item;

        if(item < 0 || item >= size) break;

        menu->adicionarQuantia(item);
        itens++;
    }

    FILE *boleto = fopen("boleto.txt", "w");
    if(!boleto) return 1;

    Produto *atual = menu;
    while(atual->proximo != NULL) {
        if(atual->quantia > 0) {
            fprintf(boleto, "%dx %s\n", atual->quantia, atual->nome);
        }

        atual = atual->proximo;
    }

    menu->liberar();
    fclose(boleto);

    return 0;
}
