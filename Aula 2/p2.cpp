#include <stdlib.h>
#include <stdio.h>

int main() {
    int temCarteira, bebeu;

    printf("Tem carteira? (0 = nao, 1 = sim) ");
    scanf("%d", &temCarteira);

    printf("Bebeste? (0 = nao, 1 = sim) ");
    scanf("%d", &bebeu);

    if(!bebeu && temCarteira) {
        printf("Pode dirigir!\n");
    } else if(bebeu > 1 || temCarteira > 1) {
        printf("Definitivamente nao pode dirigir! Era so 0 ou 1!!!\n");
    } else {
        printf("Nao pode dirgir!\n");
    }

    getchar();
    getchar();

    return 0;
}