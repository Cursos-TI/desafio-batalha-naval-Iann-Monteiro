#include <stdio.h>

#define TAMANHO_TABULEIRO 10
#define TAMANHO_NAVIO_VERTICAL 3
#define TAMANHO_NAVIO_HORIZONTAL 4
#define TAMANHO_NAVIO_DIAGONAL1 3
#define TAMANHO_NAVIO_DIAGONAL2 4

int main() {
    int tabuleiro[TAMANHO_TABULEIRO][TAMANHO_TABULEIRO] = {0};

    int x_navio_vertical = 1;
    int y_navio_vertical = 0;

    int x_navio_horizontal = 5;
    int y_navio_horizontal = 2;

    int x_navio_diagonal1 = 6;
    int y_navio_diagonal1 = 5;

    int x_navio_diagonal2 = 3;
    int y_navio_diagonal2 = 7;

    for (int i = 0; i < TAMANHO_NAVIO_VERTICAL; i++) {
        tabuleiro[y_navio_vertical + i][x_navio_vertical] = 3;
    }

    for (int i = 0; i < TAMANHO_NAVIO_HORIZONTAL; i++) {
        tabuleiro[y_navio_horizontal][x_navio_horizontal + i] = 3;
    }

    for (int i = 0; i < TAMANHO_NAVIO_DIAGONAL1; i++) {
        tabuleiro[y_navio_diagonal1 + i][x_navio_diagonal1 + i] = 3;
    }

    for (int i = 0; i < TAMANHO_NAVIO_DIAGONAL2; i++) {
        tabuleiro[y_navio_diagonal2 + i][x_navio_diagonal2 + i] = 3;
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