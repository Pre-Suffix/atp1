// EXERCÍCIO 2 • Use incremento para realizar o exercício anterior com apenas duas variáveis.
#include <stdlib.h>
#include <stdio.h>

int main() {

    int x, y;

    printf("Coloque o valor de x: ");
    scanf("%d", &x);

    printf("Coloque o valor de y: ");
    scanf("%d", &y);

    printf("x: %d\ny: %d\nx + y: %d\n", x, y, x + y);

    getchar();

    return 0;
}