// Escreva um programa que peça ao usuário que digite dois inteiros, obtenha os números e
// depois imprima o maior número seguido das palavras 'é maior'. Se os números forem iguais,
// imprima a mensagem "Esses números são iguais". Use apenas a forma de seleção única da
// instrução if que você aprendeu neste capítulo.
#include <stdio.h>

int main(void) {

    int x, y;
    printf("Digite dois inteiros: ");
    scanf("%d %d", &x, &y);

    if(x > y) printf("%d e maior.\n", x);
    else if(x < y) printf("%d e maior.\n", y);
    else printf("Esses numeros sao iguais.\n");
    
    return 0;
}