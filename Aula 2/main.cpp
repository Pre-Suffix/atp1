#include <stdio.h>
#include <stdlib.h>

int main() {

    float nota;
    printf("Qual a nota do alun@?: ");
    
    scanf("%f", &nota);
    
    if(nota >= 5) {
        printf("Foste aprovado!\n");
    } else {

        printf("Esta de recuperacao! Qual nota tirou? ");
        
        float notaRec;
        scanf("%f", &notaRec);

        nota += notaRec;
        nota *= 0.5;

        if(nota < 5) {
            printf("Putz, nao recuperaste.");
        } else {
            printf("Parabens! Recuperaste.");
        }
    }

    return 0;
}