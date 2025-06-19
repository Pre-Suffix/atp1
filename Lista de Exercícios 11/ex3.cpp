// Exercício 3 • Crie um programa que gere cartelas de BINGO no formato .csv, onde cada linha é
// uma cartela com 5 números únicos por coluna (B-I-N-G-O):
//   ● Coluna B: números 1-15
//   ● Coluna I: números 16-30
//   ● Coluna N: números 31-45 (com um espaço livre no meio, "FREE")
//   ● Coluna G: números 46-60
//   ● Coluna O: números 61-75
#include <iostream>
#include <bits/stdc++.h>

using namespace std;

set<int> numerosSorteados;

int aleatorio(int min, int max) {
    int num = (rand() % (max - min + 1)) + min;
    int s = numerosSorteados.size();

    numerosSorteados.insert(num);

    if(numerosSorteados.size() == s) {
        return aleatorio(min, max);
    }

    return num;
}

int main() {
    srand(time(0));

    FILE *bingoCSV = fopen("bingo.csv", "w");
    if(!bingoCSV) return 1;

    fputs("B,I,N,G,O\n", bingoCSV);

    for(int i = 0; i < 25; ++i) {
        if(i % 5 != 0) fputs(",", bingoCSV);

        if(i == 12) {
            fprintf(bingoCSV, "FREE");
            continue;
        }

        int coluna = (i % 5) * 15;
        int numero = aleatorio(coluna + 1, coluna + 15);

        fprintf(bingoCSV, "%d", numero);

        if((i + 1) % 5 == 0) fputs("\n", bingoCSV);
    }

    fclose(bingoCSV);

    return 0;
}