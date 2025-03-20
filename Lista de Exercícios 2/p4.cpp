// Exercício 4 • Considere uma nação onde para se aposentar é preciso no mínimo 65 anos de vida, ou 30 de serviços, ou então 60 anos
// de vida com 25 de serviços. Escreva um programa para verificar se pode-se aposentar, utilizando-se de operadores lógicos.
#include <stdlib.h>
#include <stdio.h>

int main() {

    int idade, servico;

    // obtenha idade e tempo de serviço do usuário
    printf("Qual a sua idade? ");
    scanf("%d", &idade);

    printf("Qual seu tempo de servico? ");
    scanf("%d", &servico);

    if(idade >= 65) { // Maiores de 65 anos podem se aposentar
        printf("Voce pode se aposentar por idade!\n");
    } else if(servico >= 30) { // Pessoas que já serviram 30 anos podem se aposentar
        printf("Voce pode se aposentar por tempo de servico!\n");
    } else if(idade >= 60 && servico >= 25) { // Pessoas com mais de 60 anos podem se aposentar, desde que já tenham servido 25 anos
        printf("Voce pode se aposentar por idade e tempo de servico!\n");
    } else {
        printf("Voce ainda nao pode se aposentar.\n");
    }

    getchar(); // pausa a execução

    return 0;
}