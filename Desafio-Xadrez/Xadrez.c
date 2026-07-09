#include <stdio.h>

// ---------------------------------------------------------
// DEFINIÇÃO DE CONSTANTES
// Facilita a manutenção e evita "números mágicos" no código
// ---------------------------------------------------------
#define MOV_BISPO 5
#define MOV_TORRE 5
#define MOV_RAINHA 8

int main() {
    printf("=========================================\n");
    printf("       Desafio de Xadrez - MateCheck     \n");
    printf("=========================================\n\n");

    // =========================================================
    // 1. MOVIMENTAÇÃO DO BISPO
    // Movimento: 5 casas na diagonal superior direita
    // Combinação de direções: Cima + Direita
    // Estrutura escolhida: WHILE (Verifica a condição antes de executar)
    // =========================================================
    printf("--- Movimentacao do Bispo ---\n");
    int passoBispo = 1; // Variável de controle inicializada manualmente
    
    while (passoBispo <= MOV_BISPO) {
        printf("Passo %d: ", passoBispo);
        // Como o jogo só tem 4 direções, a diagonal é a impressão consecutiva de Cima e Direita
        printf("Cima, Direita\n"); 
        passoBispo++; // Incremento para não gerar um loop infinito
    }
    printf("\n");

    // =========================================================
    // 2. MOVIMENTAÇÃO DA TORRE
    // Movimento: 5 casas para a direita
    // Direção simples: Direita
    // Estrutura escolhida: FOR (Inicialização, condição e incremento na mesma linha)
    // =========================================================
    printf("--- Movimentacao da Torre ---\n");
    
    for (int passoTorre = 1; passoTorre <= MOV_TORRE; passoTorre++) {
        printf("Passo %d: ", passoTorre);
        printf("Direita\n");
    }
    printf("\n");

    // =========================================================
    // 3. MOVIMENTAÇÃO DA RAINHA
    // Movimento: 8 casas para a esquerda
    // Direção simples: Esquerda
    // Estrutura escolhida: DO-WHILE (Executa o bloco pelo menos uma vez, depois verifica)
    // =========================================================
    printf("--- Movimentacao da Rainha ---\n");
    int passoRainha = 1; // Variável de controle inicializada manualmente
    
    do {
        printf("Passo %d: ", passoRainha);
        printf("Esquerda\n");
        passoRainha++; // Incremento
    } while (passoRainha <= MOV_RAINHA);
    
    printf("\n=========================================\n");
    printf("         Simulacao Concluida!            \n");
    printf("=========================================\n");

    return 0;
}