#include <stdio.h>

#define TAMANHO_TABULEIRO 5
#define TAMANHO_NAVIO_VERTICAL 3
#define TAMANHO_NAVIO_HORIZONTAL 4

int main() {
    int tabuleiro[TAMANHO_TABULEIRO][TAMANHO_TABULEIRO] = {0};

    int x_navio_vertical = 1;
    int y_navio_vertical = 0;

    int x_navio_horizontal = 3;
    int y_navio_horizontal = 2;

    for (int i = 0; i < TAMANHO_NAVIO_VERTICAL; i++) {
        tabuleiro[y_navio_vertical + i][x_navio_vertical] = 1;
    }

    for (int i = 0; i < TAMANHO_NAVIO_HORIZONTAL; i++) {
        tabuleiro[y_navio_horizontal][x_navio_horizontal + i] = 1;
    }

    printf("Coordenadas do navio vertical (3 partes):\n");
    for (int i = 0; i < TAMANHO_NAVIO_VERTICAL; i++) {
        printf("Parte %d: (%d, %d)\n", i + 1, x_navio_vertical, y_navio_vertical + i);
    }

    printf("\nCoordenadas do navio horizontal (4 partes):\n");
    for (int i = 0; i < TAMANHO_NAVIO_HORIZONTAL; i++) {
        printf("Parte %d: (%d, %d)\n", i + 1, x_navio_horizontal + i, y_navio_horizontal);
    }

    printf("\nTabuleiro:\n");
    for (int i = 0; i < TAMANHO_TABULEIRO; i++) {
        for (int j = 0; j < TAMANHO_TABULEIRO; j++) {
            printf("%d ", tabuleiro[i][j]);
        }
        printf("\n");
    }

    return 0;
}
