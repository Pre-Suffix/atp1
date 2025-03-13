// Exercício 6 • Escreva um pseudocódigo (português extruturado) para verificar se aluno passou de ano (considere 3 avaliações de mesmo peso).
//                           ^ putz kkk
#include <stdlib.h>
#include <stdio.h>

int main() {

    float n1, n2, n3, m;

    printf("Digite a primeira nota: ");
    scanf("%f", &n1);

    printf("Digite a segunda nota: ");
    scanf("%f", &n2);

    printf("Digite a terceira nota: ");
    scanf("%f", &n3);

    m = (n1 + n2 + n3) / 3;

    if(m >= 5) {
        printf("O aluno passou de ano! Sua media foi de %f\n", m);
    } else {
        printf("O aluno nao passou de ano. Sua media foi de %f\n", m);
    }

    getchar();

    return 0;
}