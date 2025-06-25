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

// Vetor de inteiros para verificar se o número já foi sorteado
int numerosSorteados[100] = { 0 };

// Sorteador de números únicos
int aleatorio(int min, int max) {
    // Gere um número baseado na função rand();
    int num = (rand() % (max - min + 1)) + min;

    // Se o número obtido já foi sorteado, sorteie outro.
    if(numerosSorteados[num] == 1) {
        return aleatorio(min, max);
    }

    // Defina o número obtido como sorteado
    numerosSorteados[num] = 1;
    
    return num;
}

int main() {
    srand(time(0)); // Defina a semente do gerador de números para o tempo atual. (Melhora a aleatoriedade)

    // Abra um arquivo "bingo.csv" no modo escrita. Caso não abra, pare a execução.
    FILE *bingoCSV = fopen("bingo.csv", "w"); 
    if(!bingoCSV) return 1;

    // Prepare o arquivo definindo as colunas
    fputs("B,I,N,G,O\n", bingoCSV);

    // Para todos os 25 quadrados da cartela, preencha o valor.
    for(int i = 0; i < 25; ++i) {
        // Se não estiver na primeira coluna, insira uma vírgula antes do número
        if(i % 5 != 0) fputs(",", bingoCSV);

        // Se for o quadrado do meio, preencha com "FREE" e pule para o próximo valor
        if(i == 12) {
            fputs("FREE", bingoCSV);
            continue;
        }

        // Calcule a coluna e obtenha um número aleatório baseando-se nos limites da coluna
        int coluna = (i % 5) * 15;
        int numero = aleatorio(coluna + 1, coluna + 15);

        // Insira o número no quadrado
        fprintf(bingoCSV, "%d", numero);

        // Se estiver na última coluna, pule para a próxima linha.
        if((i + 1) % 5 == 0) fputs("\n", bingoCSV);
    }

    // Feche o arquivo
    fclose(bingoCSV);

    return 0;
}
