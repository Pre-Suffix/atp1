// Escreva uma instrução ou um conjunto de instruções para realizar cada uma das seguintes tarefas:
#include <stdio.h>
#include <math.h>

int main(void) {

    // a) Somar os inteiros ímpares entre 1 e 99 usando uma estrutura for. Considere que as variáveis inteiras soma e contador
    // tenham sido declaradas.
    int soma = 0;
    for(int contador = 1; contador <= 99; contador += 2) soma += contador; 

    // b) Imprima o valor 333,546372 em uma largura de campo de 15 caracteres com precisões de 1, 2, 3, 4 e 5. Alinhe a saída
    // à esquerda. Quais são os cinco valores impressos?
    float n1 = 333.546372;
    printf("%0.1f\n%0.2f\n%0.3f\n%0.4f\n%0.5f\n", n1, n1, n1, n1, n1);

    // c) Calcule o valor de 2.5 elevado à potência 3 usando a função pow. Imprima o resultado com uma precisão de 2 em uma
    // largura de campo de 10 posições. Qual é o valor impresso?
    double n2 = pow(2.5, 3);
    printf("%0.2f\n", n2);

    // d) Imprima os inteiros de 1 a 20 usando um loop while e a variável contadora x. Considere que a variável x tenha sido
    // declarada, mas não inicializada. Imprima somente cinco inteiros por linha.
    // Dica: use o cálculo x % 5. Quando o resultado for 0, imprima um caractere de nova linha, senão imprima um caractere de
    // tabulação.
    int x;
    x = 1;
    while(x <= 20) {
        printf("%d", x);
        if(x % 5 == 0) printf("\n");
        else printf(" ");

        ++x;
    }

    // e) Repita o exercício d) usando uma estrutura for.
    for(int X = 1; X <= 20; ++X) {
        printf("%d", X);

        if(X % 5 == 0) printf("\n");
        else printf(" ");
    }

    return 0;
}