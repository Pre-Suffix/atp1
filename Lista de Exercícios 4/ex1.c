// Escreva uma única instrução C para executar cada uma das seguintes alternativas:
#include <stdio.h>

int main(void) {

    // a) Declarar as variáveis c, estaVariavel, q76354 e numero para que tenham o tipo int
    int c, estaVariavel, q76354, numero;

    // b) Pedir que o usuário digite um inteiro. Terminar a mensagem com um sinal de dois pontos (:)
    // seguido por um espaço, e deixar o cursor posicionado após o espaço.
    printf("Digite um numero inteiro: ");

    // c) Ler um inteiro do teclado e armazenar o valor digitado na variável inteira a.
    scanf("%d", &c);

    // d) Se o número não for igual a 7, exibir "A variável número não é igual a 7".
    printf(c != 7 ? "A variavel numero nao e igual a 7.\n" : "");

    // e) Imprimir a mensagem "Este é um programa em C." em uma linha.
    printf("Este e um programa em C.\n");

    // f) Imprimir a mensagem "Este é um programa em C." em duas linhas, de modo que a primeira linha
    // termine em "C".
    printf("Este e um programa em C\n.\n");

    // g) Imprimir a mensagem "Este é um programa em C." com cada palavra em uma linha separada.
    printf("Este\ne\num\nprograma\nem\nC.\n");

    // h) Imprimir a mensagem "Este é um programa em C." com as palavras separadas por tabulações.
    printf("Este\te\tum\tprograma\tem\tC.\n");

    return 0;
}