#include <stdio.h>

#define TAMANHO_TABULEIRO 5

void exibirMatriz(int matriz[TAMANHO_TABULEIRO][TAMANHO_TABULEIRO]) {
    for (int i = 0; i < TAMANHO_TABULEIRO; i++) {
        for (int j = 0; j < TAMANHO_TABULEIRO; j++) {
            printf("%d ", matriz[i][j]);
        }
        printf("\n");
    }
}

void habilidadeCone(int matriz[TAMANHO_TABULEIRO][TAMANHO_TABULEIRO], int x, int y) {
    for (int i = 0; i < TAMANHO_TABULEIRO; i++) {
        for (int j = 0; j < TAMANHO_TABULEIRO; j++) {
            if (i + j >= y && i - j <= x) {
                matriz[i][j] = 1;
            }
        }
    }
}

void habilidadeCruz(int matriz[TAMANHO_TABULEIRO][TAMANHO_TABULEIRO], int x, int y) {
    for (int i = 0; i < TAMANHO_TABULEIRO; i++) {
        matriz[x][i] = 1;
        matriz[i][y] = 1;
    }
}

void habilidadeOctaedro(int matriz[TAMANHO_TABULEIRO][TAMANHO_TABULEIRO], int x, int y) {
    for (int i = 0; i < TAMANHO_TABULEIRO; i++) {
        for (int j = 0; j < TAMANHO_TABULEIRO; j++) {
            if (abs(i - x) + abs(j - y) <= 1) {
                matriz[i][j] = 1;
            }
        }
    }
}

int main() {
    int tabuleiro[TAMANHO_TABULEIRO][TAMANHO_TABULEIRO] = {0};

    printf("Habilidade em cone:\n");
    habilidadeCone(tabuleiro, 2, 2);
    exibirMatriz(tabuleiro);

    for (int i = 0; i < TAMANHO_TABULEIRO; i++) {
        for (int j = 0; j < TAMANHO_TABULEIRO; j++) {
            tabuleiro[i][j] = 0;
        }
    }

    printf("\nHabilidade em cruz:\n");
    habilidadeCruz(tabuleiro, 2, 2);
    exibirMatriz(tabuleiro);

    for (int i = 0; i < TAMANHO_TABULEIRO; i++) {
        for (int j = 0; j < TAMANHO_TABULEIRO; j++) {
            tabuleiro[i][j] = 0;
        }
    }

    printf("\nHabilidade em octaedro:\n");
    habilidadeOctaedro(tabuleiro, 2, 2);
    exibirMatriz(tabuleiro);

    return 0;
}
