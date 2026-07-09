#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 2 - Comparação das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de comparação de cartas de cidades. 
// Siga os comentários para implementar cada parte do desafio.

int main() {

    char pais1[100];
    char estado1[100];
    char cidade1deestado1[100];
    float populacaocidade1deestado1;
    float areacidade1deestado1;
    double pibcidade1deestado1;
    int pontosturisticoscidade1deestado1;
    float densidadepopulacionalcidade1estado1;
    float divisaopibpercapitacidade1estado1;

    char estado2[100];
    char cidade1deestado2[100];
    float populacaocidade2deestado2;
    float areacidade2deestado2;
    double pibcidade2deestado2;
    int pontosturisticoscidade2deestado2;
    float densidadepopulacionalcidade2estado2;
    float divisaopibpercapitacidade2estado2;

    // Poder Especial das Cartas

    long long int poderespecialcidade1;
    long long int poderespecialcidade2;

    // Criação do menu do jogo

    int menu1;

    // Variável para receber dados de operadores ternários

    int cartaVencedora;
    
    printf("***Bem vindo ao jogo Super-Trunfo - Países***\n");
    printf("Entre com uma das opções:\n");
    printf("1. Iniciar Jogo\n");
    printf("2. Regras do jogo\n");
    printf("3. Sair\n");
    printf("Digite uma oçpção:");
    scanf("%d", &menu1);

    switch (menu1)
    {
        case 1:

            printf("\n");

            // Estado1
            printf("Digite o nome do País:\n");
            scanf("%s", pais1);

            printf("Digite UF do primeiro Estado:\n");
            scanf("%s", estado1);

            printf("Digite o nome da primeira Cidade:\n");
            scanf("%s", cidade1deestado1);

            printf("Digite a população da primeira Cidade:\n");
            scanf("%f", &populacaocidade1deestado1);

            printf("Digite a Área da primeira Cidade:\n");
            scanf("%f", &areacidade1deestado1);

            printf("Digite o PIB da primeira Cidade:\n");
            scanf("%lf", &pibcidade1deestado1);

            printf("Pontos turísticos da primeira cidade:\n");
            scanf("%d", &pontosturisticoscidade1deestado1);

            printf("Digite a densidade Populacional: \n");
            scanf("%f", &densidadepopulacionalcidade1estado1);

            printf("______________________________________\n");

            // Estado 2

            printf("Digite o nome da segunda Cidade:\n");
            scanf("%s", cidade1deestado2);

            printf("Digite a população da segunda Cidade:\n");
            scanf("%f", &populacaocidade2deestado2);

            printf("Digite a Área da segunda Cidade:\n");
            scanf("%f", &areacidade2deestado2);

            printf("Digite o PIB da segunda Cidade:\n");
            scanf("%lf", &pibcidade2deestado2);

            printf("Pontos turísticos da segunda cidade:\n");
            scanf("%d", &pontosturisticoscidade2deestado2);

            printf("Digite a densidade Populacional: \n");
            scanf("%f", &densidadepopulacionalcidade2estado2);

            /*
            // Exibição do estado 1
            printf("País: %s\n", pais1);
            printf("Estado: %s\n", estado1);
            printf("Primeira Cidade: %s\n", cidade1deestado1);
            printf("População da primeira cidade: %f\n", populacaocidade1deestado1);
            printf("Área da primeira cidade: %f\n", areacidade1deestado1);
            printf("PIB da primeira Cidade: %f\n", pibcidade1deestado1);
            printf("Pontos turísticos da primeira cidade: %d\n", pontosturisticoscidade1deestado1);
            printf("Densidade Poulacional:%f\n", densidadepopulacionalcidade1estado1);
            printf("Pib per capita é: %.f\n", divisaopibpercapitacidade1estado1);
            
            printf("\n");
            //exigibição de Cidade 2

            printf("Segunda Cidade: %s\n", cidade1deestado2);
            printf("População da Segunda cidade: %f\n", populacaocidade2deestado2);
            printf("Área da Segunda cidade: %f\n", areacidade2deestado2);
            printf("PIB da Seguda Cidade: %f\n", pibcidade2deestado2);
            printf("Pontos turísticos da Segunda cidade: %d\n", pontosturisticoscidade2deestado2);
            printf("Densidade Poulacional:%f\n", densidadepopulacionalcidade2estado2);
            printf("Pib per capita é: %.f\n", divisaopibpercapitacidade2estado2);
            */

           //Divisão de densidade entre 2 cartas

            divisaopibpercapitacidade1estado1 = pibcidade1deestado1 / densidadepopulacionalcidade1estado1;
            divisaopibpercapitacidade2estado2 = pibcidade2deestado2 / densidadepopulacionalcidade2estado2;


            // soma do Poder Especial

            poderespecialcidade1 = populacaocidade1deestado1 + areacidade1deestado1 + 
            pibcidade1deestado1 + pontosturisticoscidade1deestado1 + divisaopibpercapitacidade1estado1;
            
            poderespecialcidade2 = populacaocidade2deestado2 + areacidade2deestado2 + 
            pibcidade2deestado2 + pontosturisticoscidade2deestado2 + divisaopibpercapitacidade2estado2;

            printf("\n");

            // Menu de seleção de atributos das cartas
            int menu2;

            printf("Selecione qual atributo você deseja comparar:\n");
            printf("1. PIB Carta 1 x PIB Carta 2\n");
            printf("2. Pontos Turísco Carta 1 x Pontos Turísco Carta 2\n");
            printf("3. População Carta 1 x População Carta 2\n");
            printf("Digite uma opção:");
            scanf("%d", &menu2);
            
            printf("\n");

            switch (menu2)
            {
                case 1:
                    // Utilizando estrutura Encadeada!!
                    printf("PIB Carta 1: %lf\n", pibcidade1deestado1);
                    printf("PIB Carta 2: %lf\n", pibcidade2deestado2);
                    printf("\n");
                    
                    if (pibcidade1deestado1 > pibcidade2deestado2)
                    {   
                        printf("PIB da Carta 1 (%s) venceu!\n", cidade1deestado1);
                    } 
                    else if (pibcidade1deestado1 == pibcidade2deestado2)
                    {
                        printf("Carta 1 (%s) x Carta 2 (%s), Empate!\n", cidade1deestado1, cidade1deestado2);
                    }
                    else
                    {
                        printf("PIB da Carta 2 (%s) venceu!\n", cidade1deestado2);
                    }

                break;
                case 2 :
                    //Utilizando Estrutura Aninhadas!!
                    if (pontosturisticoscidade1deestado1 > pontosturisticoscidade2deestado2 ||
                    pontosturisticoscidade1deestado1 == pontosturisticoscidade2deestado2)
                    {
                           if (pontosturisticoscidade1deestado1 > pontosturisticoscidade2deestado2)
                        {   
                                printf("Pontos Turísticos Carta 1(%s): %d\n", cidade1deestado1, pontosturisticoscidade1deestado1);
                                printf("Pontos Turísticos Carta 2(%s): %d\n", cidade1deestado2, pontosturisticoscidade2deestado2);
                                printf("Carta 1 (%s) Venceu!\n", cidade1deestado1);
                        } else
                        {   
                            printf("Pontos Turísticos Carta 1(%s): %d\n", cidade1deestado1, pontosturisticoscidade1deestado1);
                            printf("Pontos Turísticos Carta 2(%s): %d\n", cidade1deestado2, pontosturisticoscidade2deestado2);
                            printf("Empate! Cartas possuem mesma quantidade de pontos turísticos!\n");
                        }
                        
                                                
                    }
                    else
                    {   
                        printf("Pontos Turísticos Carta 1(%s): %d\n", cidade1deestado1, pontosturisticoscidade1deestado1);
                        printf("Pontos Turísticos Carta 2(%s): %d\n", cidade1deestado2, pontosturisticoscidade2deestado2);
                        printf("Carta 2 (%s) venceu!\n", cidade1deestado2);
                    }                                        
                break;
                case 3 :
                    // Utilizando Operadores Ternários
                    populacaocidade1deestado1 > poderespecialcidade2 ? (cartaVencedora = populacaocidade1deestado1) :
                    (cartaVencedora = poderespecialcidade2);

                    if (populacaocidade1deestado1 > populacaocidade2deestado2)
                    {
                        printf("População Carta 1(%s): %f\n", cidade1deestado1, populacaocidade1deestado1);
                        printf("População Carta 2(%s): %f\n", cidade1deestado2, populacaocidade2deestado2);
                        printf("Carta 1 Venceu!(%s): %f\n", cidade1deestado1, populacaocidade1deestado1);
                    }
                    else if (populacaocidade1deestado1 == populacaocidade2deestado2)
                    {
                        printf("População Carta 1(%s): %f\n", cidade1deestado1, populacaocidade1deestado1);
                        printf("População Carta 2(%s): %f\n", cidade1deestado2, populacaocidade2deestado2);
                        printf("Deu Empate! As duas cartas possuem mesma população.\n");
                    }
                    else
                    {
                        printf("População Carta 1 (%s): %f\n", cidade1deestado1, populacaocidade1deestado1);
                        printf("População Carta 2 (%s): %f\n", cidade1deestado2, populacaocidade2deestado2);
                        printf("Carta 2 (%s) Venceu! %f\n", cidade1deestado2, populacaocidade2deestado2);
                    }                    
                break;
                default:
                    printf("Opção Inválida.\n");
                break;
            }

        break;
        case 2:
            printf("Regras do jogo...\n");
        break;
        case 3:
            printf("Finalizar o jogo\n");
        break;
    
        default:
        printf("Opção Inválida.\n");
        break;
    }
    return 0;
}