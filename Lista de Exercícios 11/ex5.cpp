// Exercício 5 • Faça um menu interativo que leia o menu no menu.txt e imprima o boleto de um
// pedido de lanchonete num boleto.txt.
#include <iostream>
#include <bits/stdc++.h>

using namespace std;

int main() {
    FILE *menutxt = fopen("menu.txt", "r");
    if(!menutxt) return 1;

    int n;
    fscanf(menutxt, "%d", &n);
    
    vector<string> menu;

    char c = fgetc(menutxt);
    string menuItem = "";
    while(c != EOF) {
        if(c == '\n') {
            menu.push_back(menuItem);
            menuItem.clear();
        } else menuItem += c;

        c = fgetc(menutxt);
    }

    fclose(menutxt);

    if(!menuItem.empty()) menu.push_back(menuItem);

    int carrinho[menu.size()] = { 0 };

    for(int i = 0; i < menu.size(); ++i) {
        cout << '(' << i << ") - " << menu[i] << '\n';
    }
    cout << "Digite o numero correspondente ao item para adiciona-lo ao carrinho. (-1 para acabar o pedido).\n";

    int itens = 0;
    while(true) {
        int item = -1;
        cout << "\r(Itens: " << itens << ") ";
        cin >> item;

        if(item < 0 || item >= menu.size()) break;

        carrinho[item]++;
        itens++;
    }

    FILE *boleto = fopen("boleto.txt", "w");
    if(!boleto) return 1;

    for(int i = 0; i < menu.size(); ++i)
        if(carrinho[i] != 0) fprintf(boleto, "%dx %s\n", carrinho[i], menu[i].c_str());

    fclose(boleto);

    return 0;
}