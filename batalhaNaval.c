#include <stdio.h>

int main() {
    int tabuleiro[10][10];

    // 1. Inicializar o tabuleiro com água (0)
    for (int i = 0; i < 10; i++) {
        for (int j = 0; j < 10; j++) {
            tabuleiro[i][j] = 0;
        }
    }

    // 2. Criar e posicionar os navios (valor 3)

    // --- Navio 1: Horizontal ---
    int linha = 2;
    int coluna = 4;
    for (int i = 0; i < 3; i++) {
        tabuleiro[linha][coluna + i] = 3;
    }

    // --- Navio 2: Vertical ---
    linha = 5;
    coluna = 3;
    for (int i = 0; i < 3; i++) {
        tabuleiro[linha + i][coluna] = 3;
    }

    // --- Navio 3: Diagonal principal (↘️) ---
    // começa em (1,1), vai pra (2,2), (3,3)
    linha = 1;
    coluna = 1;
    for (int i = 0; i < 3; i++) {
        tabuleiro[linha + i][coluna + i] = 3;
    }

    // --- Navio 4: Diagonal secundária (↙️) ---
    // começa em (4,6), vai pra (5,5), (6,4)
    linha = 4;
    coluna = 6;
    for (int i = 0; i < 3; i++) {
        tabuleiro[linha + i][coluna - i] = 3;
    }

    // 3. Exibir tabuleiro
    char colunaNome[10] = {'A','B','C','D','E','F','G','H','I','J'};

    printf("   ");
    for (int j = 0; j < 10; j++) {
        printf("%c ", colunaNome[j]);
    }
    printf("\n");

    for (int i = 0; i < 10; i++) {
        printf("%2d ", i+1);
        for (int j = 0; j < 10; j++) {
            printf("%d ", tabuleiro[i][j]);
        }
        printf("\n");
    }

    return 0;
}