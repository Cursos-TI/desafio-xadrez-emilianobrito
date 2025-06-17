#include <stdio.h>

// Desafio de Xadrez - MateCheck
// Nível novato

int main() {
    int i;
    //Movimento da Torre (5 casas para a Direita) - Usando FOR 
    printf("Movimento da Torre (5 casas para a Direita):\n");

    for (i = 1; i <= 5; i++) {
        printf("Direita\n");
    }

    //Movimento do Bispo (5 casas na Diagonal Cima Direita) - Usando WHILE 
    i = 1;
    printf("\nMovimento do Bispo (5 casas na Diagonal Cima Direita):\n");

    while (i <= 5) {
        printf("Cima Direita\n");
        i++;
    }

    //Movimento da Rainha (8 casas para a Esquerda) - Usando DO-WHILE 
    i = 1;
    printf("\nMovimento da Rainha (8 casas para a Esquerda):\n");

    do {
        printf("Esquerda\n");
        i++;
    } while (i <= 8);

    return 0;
}
