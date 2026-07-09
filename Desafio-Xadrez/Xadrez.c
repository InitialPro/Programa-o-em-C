#include <stdio.h>

// ---------------------------------------------------------
// DEFINIÇÃO DE CONSTANTES
// ---------------------------------------------------------
// Peças do Nível Novato
#define MOV_BISPO 5
#define MOV_TORRE 5
#define MOV_RAINHA 8

// Peças do Nível Aventureiro (Movimento em L)
#define MOV_BAIXO 2
#define MOV_ESQUERDA 1

int main() {
    printf("=========================================\n");
    printf("  Desafio de Xadrez - Novato e Aventureiro \n");
    printf("=========================================\n\n");

    // =========================================================
    // 1. MOVIMENTAÇÃO DO BISPO (Nível Novato)
    // Estrutura escolhida: WHILE
    // =========================================================
    printf("--- Movimentacao do Bispo ---\n");
    int passoBispo = 1;
    
    while (passoBispo <= MOV_BISPO) {
        printf("Passo %d: Cima, Direita\n", passoBispo);
        passoBispo++;
    }
    printf("\n");

    // =========================================================
    // 2. MOVIMENTAÇÃO DA TORRE (Nível Novato)
    // Estrutura escolhida: FOR
    // =========================================================
    printf("--- Movimentacao da Torre ---\n");
    
    for (int passoTorre = 1; passoTorre <= MOV_TORRE; passoTorre++) {
        printf("Passo %d: Direita\n", passoTorre);
    }
    printf("\n");

    // =========================================================
    // 3. MOVIMENTAÇÃO DA RAINHA (Nível Novato)
    // Estrutura escolhida: DO-WHILE
    // =========================================================
    printf("--- Movimentacao da Rainha ---\n");
    int passoRainha = 1;
    
    do {
        printf("Passo %d: Esquerda\n", passoRainha);
        passoRainha++;
    } while (passoRainha <= MOV_RAINHA);
    printf("\n");

    // =========================================================
    // 4. MOVIMENTAÇÃO DO CAVALO (Nível Aventureiro)
    // Estruturas escolhidas: FOR e WHILE aninhados
    // =========================================================
    printf("--- Movimentacao do Cavalo ---\n");
    printf("Direcao: Baixo e Esquerda (Formato em L)\n");

    // Loop externo (FOR): Controla o eixo vertical
    for (int passoBaixo = 1; passoBaixo <= MOV_BAIXO; passoBaixo++) {
        
        printf("Passo %d: Baixo\n", passoBaixo);

        // O Cavalo só vira após terminar a perna maior do "L"
        if (passoBaixo == MOV_BAIXO) {
            
            int passoEsq = 1;
            
            // Loop interno aninhado (WHILE): Controla o eixo horizontal
            while (passoEsq <= MOV_ESQUERDA) {
                printf("Passo extra: Esquerda\n");
                passoEsq++;
            }
        }
    }

    printf("\n=========================================\n");
    printf("         Simulacao Concluida!            \n");
    printf("=========================================\n");

    return 0;
}