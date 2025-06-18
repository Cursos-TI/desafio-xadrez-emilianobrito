#include <stdio.h>

// Desafio de Xadrez - MateCheck
// Nívelaventureiro

int main() {
    int i;
    int casa = 5;
    //Movimento da Torre (5 casas para a Direita) - Usando FOR 
    printf("Movimento da Torre (5 casas para a Direita):\n");

    for (i = 1; i <= casa; i++) {
        printf("Direita\n");
    }

    //Movimento do Bispo (5 casas na Diagonal Cima Direita) - Usando WHILE 
    i = 1;
    printf("\nMovimento do Bispo (5 casas na Diagonal Cima Direita):\n");

    while (i <= casa) {
        printf("Cima Direita\n");
        i++;
    }

    //Movimento da Rainha (8 casas para a Esquerda) - Usando DO-WHILE 
    i = 1;
    casa = 8;
    printf("\nMovimento da Rainha (8 casas para a Esquerda):\n");

    do {
        printf("Esquerda\n");
        i++;
    } while (i <= casa);

    //Movimento do Cavalo (2 casas para Baixo, 1 para Esquerda) - Usando WHILE e FOR
    i = 1;
    int casasBaixo = 2;
    int casasEsquerda = 1;
    printf("\nMovimento do Cavalo (2 casas para Baixo, 1 para a Esquerda):\n");
    while (i == casasEsquerda) {
        for (int i = 1; i <= casasBaixo; i++) {
            printf("baixo\n");
        }
        printf("Esquerda\n");
        i++;
    }

    return 0;
}

