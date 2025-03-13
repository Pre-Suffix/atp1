// PROGRAMA 2!!!
#include <stdlib.h>
#include <stdio.h>

int main(int argc, char *argv[]) {

    if(argc == 1) {
        char nome[51];

        printf("Qual %c seu nome? ", 130);
        scanf("%50s", nome);
        printf("Ol%c %s! Bem-vindo a UNESP!\n", 160, nome);
        getchar();
    } else {
        printf("Ol%c %s! Bem-vindo a UNESP!\n", 160, argv[1]);
    }

    getchar();

    return 0;
}