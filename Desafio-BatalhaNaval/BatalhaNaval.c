#include <stdio.h>

// =========================================================
// DEFINIÇÃO DE CONSTANTES
// =========================================================
#define TAM_NAVIO 3
#define TAM_TABULEIRO 10
#define AREA_LINHAS 3
#define AREA_COLUNAS 5

// =========================================================
// 1. FUNÇÃO DO NÍVEL NOVATO
// Foco: Armazenar e exibir coordenadas usando vetores
// =========================================================
void nivelNovato() {
    printf("\n>>> INICIANDO NIVEL NOVATO <<<\n\n");

    // Vetores que guardam os pares de coordenadas [X, Y]
    int navioHorizontal[TAM_NAVIO][2] = { {2, 3}, {2, 4}, {2, 5} };
    int navioVertical[TAM_NAVIO][2]   = { {5, 7}, {6, 7}, {7, 7} };

    printf("--- Coordenadas do Navio Horizontal ---\n");
    for (int i = 0; i < TAM_NAVIO; i++) {
        printf("Parte %d: Eixo X: %d | Eixo Y: %d\n", i + 1, navioHorizontal[i][0], navioHorizontal[i][1]);
    }

    printf("\n--- Coordenadas do Navio Vertical ---\n");
    for (int i = 0; i < TAM_NAVIO; i++) {
        printf("Parte %d: Eixo X: %d | Eixo Y: %d\n", i + 1, navioVertical[i][0], navioVertical[i][1]);
    }
}

// =========================================================
// 2. FUNÇÃO DO NÍVEL AVENTUREIRO
// Foco: Tabuleiro 10x10 e posicionamento visual (Diagonais)
// =========================================================
void nivelAventureiro() {
    printf("\n\n>>> INICIANDO NIVEL AVENTUREIRO <<<\n\n");

    // Matriz 10x10 preenchida com água (0)
    int tabuleiro[TAM_TABULEIRO][TAM_TABULEIRO] = {0};

    // Posicionando os 4 navios (Valor 3)
    tabuleiro[2][2] = 3; tabuleiro[2][3] = 3; tabuleiro[2][4] = 3; // Horizontal
    tabuleiro[4][1] = 3; tabuleiro[5][1] = 3; tabuleiro[6][1] = 3; // Vertical
    tabuleiro[1][6] = 3; tabuleiro[2][7] = 3; tabuleiro[3][8] = 3; // Diagonal (Descendo)
    tabuleiro[8][5] = 3; tabuleiro[7][6] = 3; tabuleiro[6][7] = 3; // Diagonal (Subindo)

    printf("--- Tabuleiro de Batalha Naval (10x10) ---\n");
    for (int linha = 0; linha < TAM_TABULEIRO; linha++) {
        for (int coluna = 0; coluna < TAM_TABULEIRO; coluna++) {
            printf("%d ", tabuleiro[linha][coluna]);
        }
        printf("\n"); 
    }
}

// =========================================================
// 3. FUNÇÃO DO NÍVEL MESTRE
// Foco: Geração de formas geométricas usando matemática e loops
// =========================================================
void nivelMestre() {
    printf("\n\n>>> INICIANDO NIVEL MESTRE <<<\n\n");

    // Matrizes 3x5 para as habilidades
    int cone[AREA_LINHAS][AREA_COLUNAS] = {0};
    int octaedro[AREA_LINHAS][AREA_COLUNAS] = {0};
    int cruz[AREA_LINHAS][AREA_COLUNAS] = {0};

    // 1. Lógica do CONE (Expande para os lados a cada linha)
    for(int i = 0; i < AREA_LINHAS; i++) {
        for(int j = 0; j < AREA_COLUNAS; j++) {
            if(j >= 2 - i && j <= 2 + i) {
                cone[i][j] = 1;
            }
        }
    }

    // 2. Lógica do OCTAEDRO (Verifica a distância em relação ao centro [1][2])
    for(int i = 0; i < AREA_LINHAS; i++) {
        for(int j = 0; j < AREA_COLUNAS; j++) {
            int distLinha = (i > 1) ? (i - 1) : (1 - i);
            int distColuna = (j > 2) ? (j - 2) : (2 - j);
            
            if(distLinha + distColuna <= 1) {
                octaedro[i][j] = 1;
            }
        }
    }

    // 3. Lógica da CRUZ (Linha central OU Coluna central)
    for(int i = 0; i < AREA_LINHAS; i++) {
        for(int j = 0; j < AREA_COLUNAS; j++) {
            if(i == 1 || j == 2) {
                cruz[i][j] = 1;
            }
        }
    }

    // Exibição do Cone
    printf("--- Habilidade em CONE ---\n");
    for(int i = 0; i < AREA_LINHAS; i++) {
        for(int j = 0; j < AREA_COLUNAS; j++) {
            printf("%d ", cone[i][j]);
        }
        printf("\n");
    }

    // Exibição do Octaedro
    printf("\n--- Habilidade em OCTAEDRO ---\n");
    for(int i = 0; i < AREA_LINHAS; i++) {
        for(int j = 0; j < AREA_COLUNAS; j++) {
            printf("%d ", octaedro[i][j]);
        }
        printf("\n");
    }

    // Exibição da Cruz
    printf("\n--- Habilidade em CRUZ ---\n");
    for(int i = 0; i < AREA_LINHAS; i++) {
        for(int j = 0; j < AREA_COLUNAS; j++) {
            printf("%d ", cruz[i][j]);
        }
        printf("\n");
    }
}

// =========================================================
// FUNÇÃO PRINCIPAL (MAIN)
// =========================================================
int main() {
    printf("=========================================\n");
    printf("     SISTEMA DE BATALHA NAVAL COMPLETO   \n");
    printf("=========================================\n");

    // Executando cada nível sequencialmente
    nivelNovato();
    nivelAventureiro();
    nivelMestre();

    printf("\n=========================================\n");
    printf("      TODOS OS DESAFIOS CONCLUIDOS!      \n");
    printf("=========================================\n");

    return 0;
}