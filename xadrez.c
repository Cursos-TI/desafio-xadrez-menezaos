#include <stdio.h>

void moverTorre(int movimentos) {
    printf("--- Movimento da Torre ---\n");
    for (int i = 0; i < movimentos; i++) {
        printf("Direita\n");
    }
    printf("\n");
}

void moverBispo(int movimentos) {
    printf("--- Movimento do Bispo ---\n");
    int movimentoemx = 0;
    while (movimentoemx < movimentos) {
        for (int y = 0; y < 1; y++) {
            printf("Cima, Direita\n");
        }
        movimentoemx++;
    }
    printf("\n");
}

void moverRainha(int movimentos_rainha) {
printf("--- Movimento da Rainha ---\n");
    int contador_rainha = 0;
    do {
        printf("Esquerda\n");
        contador_rainha++;
    } while (contador_rainha < movimentos_rainha);
    printf("\n");
}

int main() {
    const int movimentos_torre = 3;
    const int movimentos_bispo = 2;
    const int movimentos_rainha = 5;

    moverTorre(movimentos_torre);
    moverBispo(movimentos_bispo);
    moverRainha(movimentos_rainha);

   
    printf("--- Movimento do Cavalo ---\n");
    int contador_cavalo = 0;
    while (contador_cavalo < 1) {
        for (int i = 0; i < 2; i++) {
            printf("Cima\n");
        }
        printf("Direita\n");
        contador_cavalo++;
    }
    printf("\n");

    return 0;
}
