#include <stdio.h>

// Desafio de Xadrez - MateCheck
// Nível mestre

//Função Recursiva da Torre
void moverTorre(int casas) {
    if (casas > 0){
        printf("Direita\n");
        moverTorre(casas - 1);
    }
}

//Função Recursiva da Rainha
void moverRainha(int casas) {
    if (casas > 0){
        printf("Esquerda\n");
        moverRainha(casas - 1);
    }
}

void moverBispo(int casas) {
    if (casas > 0){
        for (int i = 1; i > 0; i--) {
            printf("Cima ");
            for (int j = 1; j > 0; j--) {
                printf("Direita\n");
            }
        }
        moverBispo(casas - 1);
    }
}

int main() {
    printf("Movimento da Torre (5 casas para Direita):\n");
    moverTorre(5);

    printf("\nMovimento da Rainha (8 casas para a Esquerda):\n");
    moverRainha(8);

    printf("\nMovimento do Bispo (5 casas na Diagonal Cima Direita):\n");
    moverBispo(5);

    int i = 1;
    int Cima = 2;
    int Direita = 1;
    printf("\nMovimento do Cavalo (2 casas para Cima e 1 casa para a Direita):\n");
    while (i == Direita && Cima == 2) {
        for (int i = 1; i <= Cima && Direita == 1; i++) {
            printf("Cima\n");
        }
        printf("Direita\n");
        i++;
    }
    return 0;
}