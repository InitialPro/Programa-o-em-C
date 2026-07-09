#include <stdio.h>

// =========================================================
// DEFINIÇÃO DE CONSTANTES GERAIS
// =========================================================
#define MOV_BISPO 5
#define MOV_TORRE 5
#define MOV_RAINHA 8

// Constantes para o Cavalo (Nível Aventureiro)
#define MOV_CAVALO_BAIXO 2
#define MOV_CAVALO_ESQ 1


// =========================================================
// FUNÇÕES RECURSIVAS (USADAS NO NÍVEL MESTRE)
// =========================================================

// Bispo: Recursividade + Loops aninhados rodando 1 vez
void moverBispoMestre(int casas) {
    if (casas == 0) return;

    for (int i = 1; i <= 1; i++) {
        printf("Cima, ");
        for (int j = 1; j <= 1; j++) {
            printf("Direita\n");
        }
    }
    moverBispoMestre(casas - 1);
}

// Torre: Recursividade pura
void moverTorreMestre(int casas) {
    if (casas == 0) return;
    printf("Direita\n");
    moverTorreMestre(casas - 1);
}

// Rainha: Recursividade pura
void moverRainhaMestre(int casas) {
    if (casas == 0) return;
    printf("Esquerda\n");
    moverRainhaMestre(casas - 1);
}


// =========================================================
// EXECUÇÃO DO NÍVEL NOVATO
// Foco: Estruturas de repetição simples (while, for, do-while)
// =========================================================
void executarNivelNovato() {
    printf("\n>>> INICIANDO NIVEL NOVATO <<<\n\n");

    // Bispo com WHILE
    printf("--- Movimentacao do Bispo ---\n");
    int passoBispo = 1;
    while (passoBispo <= MOV_BISPO) {
        printf("Passo %d: Cima, Direita\n", passoBispo);
        passoBispo++;
    }

    // Torre com FOR
    printf("\n--- Movimentacao da Torre ---\n");
    for (int passoTorre = 1; passoTorre <= MOV_TORRE; passoTorre++) {
        printf("Passo %d: Direita\n", passoTorre);
    }

    // Rainha com DO-WHILE
    printf("\n--- Movimentacao da Rainha ---\n");
    int passoRainha = 1;
    do {
        printf("Passo %d: Esquerda\n", passoRainha);
        passoRainha++;
    } while (passoRainha <= MOV_RAINHA);
}


// =========================================================
// EXECUÇÃO DO NÍVEL AVENTUREIRO
// Foco: Loops aninhados (for e while juntos)
// =========================================================
void executarNivelAventureiro() {
    printf("\n\n>>> INICIANDO NIVEL AVENTUREIRO <<<\n\n");
    printf("--- Movimentacao do Cavalo (Baixo/Esquerda) ---\n");

    for (int passoBaixo = 1; passoBaixo <= MOV_CAVALO_BAIXO; passoBaixo++) {
        printf("Passo %d: Baixo\n", passoBaixo);

        if (passoBaixo == MOV_CAVALO_BAIXO) {
            int passoEsq = 1;
            while (passoEsq <= MOV_CAVALO_ESQ) {
                printf("Passo extra: Esquerda\n");
                passoEsq++;
            }
        }
    }
}


// =========================================================
// EXECUÇÃO DO NÍVEL MESTRE
// Foco: Funções recursivas e loop com múltiplas condições
// =========================================================
void executarNivelMestre() {
    printf("\n\n>>> INICIANDO NIVEL MESTRE <<<\n\n");

    printf("--- Movimentacao do Bispo (Recursivo) ---\n");
    moverBispoMestre(MOV_BISPO);

    printf("\n--- Movimentacao da Torre (Recursiva) ---\n");
    moverTorreMestre(MOV_TORRE);

    printf("\n--- Movimentacao da Rainha (Recursiva) ---\n");
    moverRainhaMestre(MOV_RAINHA);

    printf("\n--- Movimentacao do Cavalo (Cima/Direita com break/continue) ---\n");
    // Loop avançado com múltiplas variáveis
    for (int i = 1, maxPassos = 3; i <= maxPassos; i++) {
        if (i <= 2) {
            printf("Cima\n");
            continue; 
        }
        if (i == 3) {
            printf("Direita\n");
            break; 
        }
    }
}


// =========================================================
// FUNÇÃO PRINCIPAL
// =========================================================
int main() {
    printf("=========================================\n");
    printf("   DESAFIO DE XADREZ - JORNADA COMPLETA  \n");
    printf("=========================================\n");

    // Chama cada fase do desafio em ordem
    executarNivelNovato();
    executarNivelAventureiro();
    executarNivelMestre();

    printf("\n=========================================\n");
    printf("      TODOS OS DESAFIOS CONCLUIDOS!      \n");
    printf("=========================================\n");

    return 0;
}