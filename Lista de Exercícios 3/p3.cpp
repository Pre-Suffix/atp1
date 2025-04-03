// Exercício 3 • Escreva um programa de calculadora que realiza operações básicas (soma, subtração, multiplicação e divisão) com dois números inteiros, controlado por um menu interativo
#include <stdlib.h>
#include <stdio.h>

int main() {

    int n1, n2;
    char op = '0';

    // Obtenção do primeiro número do usuário
    printf("Insira o primeiro numero: ");
    scanf("%d", &n1);

    // Obtenção da operação do usuário.
    // Loop só sai quando a operação inserida pelo usuário é válida
    while(op != '*' &&  op != '/' && op != '-' && op != '+') {
        printf("Insira a operacao (+, -, *, /): ");
        scanf("%c", &op);    
    }

    // Obtenção do segundo número do usuário
    printf("Insira o segundo numero: ");
    scanf("%d", &n2);

    if(n2 == 0 && op == '/') { // Em caso de divisão por zero, retorne indefinido.
        printf("Indefinido.\n");
    } else if(op == '+') { // Em caso de soma, some os dois valores
        printf("%d + %d = %d\n", n1, n2, n1 + n2);
    } else if(op == '-') { // Em caso de subtração, subtraia os valores
        printf("%d - %d = %d\n", n1, n2, n1 - n2);
    } else if(op == '/') { // Em caso de divisão, divida os valores, convertidos em float
        printf("%d / %d = %f\n", n1, n2, (float) n1 / (float) n2);
    } else if(op == '*') { // Em caso de multiplicação, multiplique os valores
        printf("%d * %d = %d\n", n1, n2, n1 * n2);
    }

    getchar(); // pausa a execução

    return 0;
}