#include <stdio.h>

// Definindo o tamanho dos navios (3 partes)
#define TAM_NAVIO 3

int main() {
    printf("=========================================\n");
    printf("    BATALHA NAVAL - NIVEL NOVATO         \n");
    printf("=========================================\n\n");

    // =========================================================
    // POSICIONAMENTO DOS NAVIOS (Usando vetores bidimensionais)
    // O vetor guarda pares de coordenadas [X, Y]
    // Índice 0 = Linha (X) | Índice 1 = Coluna (Y)
    // =========================================================

    // Navio Horizontal: A linha (2) se mantém igual, a coluna (3, 4, 5) avança
    int navioHorizontal[TAM_NAVIO][2] = {
        {2, 3}, 
        {2, 4}, 
        {2, 5}
    };
    
    // Navio Vertical: A linha (5, 6, 7) avança, a coluna (7) se mantém igual
    int navioVertical[TAM_NAVIO][2] = {
        {5, 7}, 
        {6, 7}, 
        {7, 7}
    };

    // =========================================================
    // EXIBIÇÃO DAS COORDENADAS
    // =========================================================

    printf("--- Coordenadas do Navio Horizontal ---\n");
    for (int i = 0; i < TAM_NAVIO; i++) {
        // Acessamos [i][0] para pegar a linha e [i][1] para pegar a coluna
        printf("Parte %d: Eixo X (Linha): %d | Eixo Y (Coluna): %d\n", 
                i + 1, navioHorizontal[i][0], navioHorizontal[i][1]);
    }

    printf("\n--- Coordenadas do Navio Vertical ---\n");
    for (int i = 0; i < TAM_NAVIO; i++) {
        printf("Parte %d: Eixo X (Linha): %d | Eixo Y (Coluna): %d\n", 
                i + 1, navioVertical[i][0], navioVertical[i][1]);
    }

    printf("\n=========================================\n");
    
    return 0;
}