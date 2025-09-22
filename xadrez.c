#include <stdio.h>

int main() {
    const int movimentos_torre = 5;
    const int movimentos_bispo = 5;
    const int movimentos_rainha = 8;

    printf("--- Movimento da Torre ---\n");
    for (int i = 0; i < movimentos_torre; i++) {
        printf("Direita\n");
    }
    printf("\n");

    printf("--- Movimento do Bispo ---\n");
    int contador_bispo = 0;
    while (contador_bispo < movimentos_bispo) {
        printf("Cima, Direita\n");
        contador_bispo++;
    }
    printf("\n");

    printf("--- Movimento da Rainha ---\n");
    int contador_rainha = 0;
    do {
        printf("Direita\n");
        contador_rainha++;
    } while (contador_rainha < movimentos_rainha);
    printf("\n");

    return 0;
}
