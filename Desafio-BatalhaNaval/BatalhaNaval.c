#include <stdio.h>

// =========================================================
// DEFINIÇÃO DE CONSTANTES
// =========================================================
#define TAM_NAVIO 3
#define TAM_TABULEIRO 10

// =========================================================
// FUNÇÃO DO NÍVEL NOVATO
// Foco: Armazenar e exibir coordenadas exatas usando vetores
// =========================================================
void nivelNovato() {
    printf(">>> INICIANDO NIVEL NOVATO <<<\n\n");

    // Navio Horizontal: Linha fixa em 2, colunas 3, 4 e 5
    int navioHorizontal[TAM_NAVIO][2] = {
        {2, 3}, 
        {2, 4}, 
        {2, 5}
    };
    
    // Navio Vertical: Linhas 5, 6 e 7, coluna fixa em 7
    int navioVertical[TAM_NAVIO][2] = {
        {5, 7}, 
        {6, 7}, 
        {7, 7}
    };

    printf("--- Coordenadas do Navio Horizontal ---\n");
    for (int i = 0; i < TAM_NAVIO; i++) {
        printf("Parte %d: Eixo X (Linha): %d | Eixo Y (Coluna): %d\n", 
                i + 1, navioHorizontal[i][0], navioHorizontal[i][1]);
    }

    printf("\n--- Coordenadas do Navio Vertical ---\n");
    for (int i = 0; i < TAM_NAVIO; i++) {
        printf("Parte %d: Eixo X (Linha): %d | Eixo Y (Coluna): %d\n", 
                i + 1, navioVertical[i][0], navioVertical[i][1]);
    }
}

// =========================================================
// FUNÇÃO DO NÍVEL AVENTUREIRO
// Foco: Matriz 10x10, 4 navios (incluindo diagonais) e desenho
// =========================================================
void nivelAventureiro() {
    printf("\n\n>>> INICIANDO NIVEL AVENTUREIRO <<<\n\n");

    // Inicializando o tabuleiro 10x10 com 0 (água)
    int tabuleiro[TAM_TABULEIRO][TAM_TABULEIRO] = {0};

    // 1. Navio Horizontal
    tabuleiro[2][2] = 3;
    tabuleiro[2][3] = 3;
    tabuleiro[2][4] = 3;

    // 2. Navio Vertical
    tabuleiro[4][1] = 3;
    tabuleiro[5][1] = 3;
    tabuleiro[6][1] = 3;

    // 3. Navio Diagonal 1 (Descendo para a direita)
    tabuleiro[1][6] = 3;
    tabuleiro[2][7] = 3;
    tabuleiro[3][8] = 3;

    // 4. Navio Diagonal 2 (Subindo para a direita)
    tabuleiro[8][5] = 3;
    tabuleiro[7][6] = 3;
    tabuleiro[6][7] = 3;

    // Exibição do tabuleiro
    printf("--- Tabuleiro de Batalha Naval (10x10) ---\n");
    for (int linha = 0; linha < TAM_TABULEIRO; linha++) {
        for (int coluna = 0; coluna < TAM_TABULEIRO; coluna++) {
            printf("%d ", tabuleiro[linha][coluna]);
        }
        printf("\n"); 
    }
}

// =========================================================
// FUNÇÃO PRINCIPAL (MAIN)
// =========================================================
int main() {
    printf("=========================================\n");
    printf("        DESAFIO - BATALHA NAVAL          \n");
    printf("=========================================\n\n");

    // Executa as lógicas em ordem
    nivelNovato();
    nivelAventureiro();

    printf("\n=========================================\n");
    printf("           DESAFIOS CONCLUIDOS!          \n");
    printf("=========================================\n");

    return 0;
}