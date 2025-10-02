#include <stdio.h>

int main() {
    // 1. Criação do tabuleiro

    int tabuleiro[10][10];
    for (int i = 0; i < 10; i++)
    {
        for (int j = 0; j < 10; j++)
        {
            tabuleiro[i][j] = 0;
        }
        
    }
    
    // 2. Criação dos navios

    int navio1[3] = {3, 3, 3}; // Navio Vertical
    int navio2[3] = {3, 3, 3}; // Navio Horizontal
    
    // 3. Posicionar navio na horizontal

    int linha = 2; // linha 3 (índice começa em 0)
    int coluna = 4; // coluna E

    for (int i = 0; i < 3; i++)
    {
        tabuleiro[linha][coluna + i] = navio1[i];
    }

    // 4. Posicionar navio na vertical

    linha = 5;
    coluna = 3;

    for (int i = 0; i < 3; i++)
    {
        tabuleiro[linha + i][coluna] = navio2[i];
    }
    

    // 5. Exibir código

    char colunaNome[10] = {'A', 'B', 'C', 'D', 'E', 'F', 'G', 'H', 'I', 'J'};

    printf("   ");
    for (int j = 0; j < 10; j++)
    {
        printf("%c ", colunaNome[j]);
    }
    printf("\n");

    for (int i = 0; i < 10; i++)
    {
        printf("%2d ", i+1); // mostra o número da linha
        for (int j = 0; j < 10; j++)
        {
            printf("%d ", tabuleiro[i][j]);
        }
        printf("\n");
    }
    

    return 0;
}
