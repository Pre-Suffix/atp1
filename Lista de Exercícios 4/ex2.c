// Identifique e corrija os erros cometidos em cada uma das instruções (Nota: pode haver mais de um erro por instrução).
#include <stdio.h>

int main(void) {

    // Variáveis para nenhum exercício dar erro
    int valor, somaDosNumeros, primeiroNumero, segundoNumero, maior, numero, umInteiro;
    int x = 5; int y = 10;

    // a) scanf( “d”, valor );
    scanf("%d", &valor);

    // b) printf( “O produto de %d e %d é %d”\n, x, y );
    printf("O produto de %d e %d é %d\n", x, y, x * y );

    // c) primeiroNúmero + segundoNúmero = somaDosNúmeros
    somaDosNumeros = primeiroNumero + segundoNumero;

    // d) if ( número => maior )
    //      maior == número;
    if (numero >= maior)
        maior = numero;

    // e) Scanf( “%d”, umInteiro );
    scanf("%d", &umInteiro);

    // f) printf( “Módulo de %d dividido por %d é\n”, x, y, x % y );
    printf("Modulo de %d dividido por %d e %d\n", x, y, x % y);

    // g) if ( x = y );
    //      printf( %d é igual a %d\n”, x, y );
    if(x == y)
        printf("%d e igual a %d\n", x, y);

    // h) print( “A soma é %d\n,” x + y );
    printf("A soma e %¨d\n", x + y);

    // i) Printf( “O valor que você digitou é: %d\n, &valor );
    printf("O valor que voce digitou e: %d\n", valor);

    return 0;
}