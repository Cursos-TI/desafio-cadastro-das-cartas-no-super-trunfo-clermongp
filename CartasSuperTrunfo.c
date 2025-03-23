#include <stdio.h>  // Inclui a biblioteca padrão de entrada e saída

int main() {
    // Declaração das Variáveis para armazenar os dados da Carta 1 e 2
    char estado1, estado2;                      // Armazena o estado da Carta 1 e 2 (letra de A a H)
    char codigo1[4], codigo2[4];                // Armazena o código da Carta 1 e 2 (ex: A01)
    char nomeCidade1[50], nomeCidade2[50];      // Armazena o nome da cidade da Carta 1 e 2
    unsigned long int populacao1, populacao2;   // Armazena a população da cidade da Carta 1 e 2
    float area1, area2;                         // Armazena a área da cidade da Carta 1 e 2 (em km²)
    float pib1, pib2;                           // Armazena o PIB da cidade da Carta 1 e 2 (em bilhões de reais)
    int pontosTuristicos1, pontosTuristicos2;   // Armazena o número de pontos turísticos da cidade da Carta 1 e 2
    float densidadePop1, densidadePop2;         //Armazena a densidade populacional, número de habitantes por quilômetro quadrado da cidade da Carta 1 e 2
    float pibPerCapita1, pibPerCapita2;         // Armazena o  PIB per capita da cidade da Carta 1 e 2
    float superPoder1, superPoder2;

   // Leitura dos dados da Carta 1
    printf("ENTRADA DE DADOS DA CARTA 01: \n\n");
    printf("Digite o estado da primeira Carta (letra de A a H): ");
    scanf(" %c", &estado1);          // Lê o estado da carta 1
    printf("Digite o código da primeira Carta: ");
    scanf(" %s", codigo1);          // Lê o código da carta 1
    printf("Digite o nome da cidade da primeira Carta: ");
    scanf(" %s", nomeCidade1);      // Lê o nome da cidade da carta 1
    printf("Digite a população da cidade da primeira Carta: ");
    scanf("%d", &populacao1);       // Lê a população da cidade da carta 1
    printf("Digite a área da cidade da primeira Carta (em km²): ");
    scanf("%f", &area1);            // Lê a área da cidade da carta 1
    printf("Digite o PIB da cidade da primeira Carta (em bilhões de reais): ");
    scanf("%f", &pib1);             // Lê o PIB da cidade da carta 1
    printf("Digite o número de pontos turísticos da cidade da primeira Carta: ");
    scanf("%d", &pontosTuristicos1);// Lê o número de pontos turísticos da cidade da carta 1

    
    // Comentado: Leitura dos dados da Carta 2 (não usado no momento)
    printf("\n ENTRADA DE DADOS DA CARTA 02: \n\n");
    printf("Digite o estado da segunda Carta (letra de A a H): ");
    scanf(" %c", &estado2);         // Lê o estado da carta 2
    printf("Digite o código da segunda Carta: ");
    scanf(" %s", codigo2);          // Lê o código da carta 2
    printf("Digite o nome da cidade da segunda Carta: ");
    scanf(" %s", nomeCidade2);      // Lê o nome da cidade da carta 2
    printf("Digite a população da cidade da segunda Carta: ");
    scanf("%d", &populacao2);       // Lê a população da cidade da carta 2
    printf("Digite a área da cidade da segunda Carta (em km²): ");
    scanf("%f", &area2);            // Lê a área da cidade da carta 2
    printf("Digite o PIB da cidade da segunda Carta (em bilhões de reais): ");
    scanf("%f", &pib2);             // Lê o PIB da cidade da carta 2
    printf("Digite o número de pontos turísticos da cidade da segunda Carta: ");
    scanf("%d", &pontosTuristicos2);// Lê o número de pontos turísticos da cidade da carta 2

    // Cálculo da densidade populacional e PIB per capita para Carta 1 e 2
    densidadePop1 = populacao1 / area1;                 // Densidade populacional = População / Área
    pibPerCapita1 = (pib1 * 1000000000) / populacao1;   // PIB per capita = PIB / População (PIB está em bilhões, então multiplicamos por 1 bilhão)
    superPoder1 = populacao1 + area1 + pib1 * 1000000000 + pontosTuristicos1 + pibPerCapita1 + (1 / densidadePop1);

    densidadePop2 = populacao2 / area2;                     // Densidade populacional = População / Área
    pibPerCapita2 = (pib2 * 1000000000) / populacao2;       // PIB per capita = PIB / População (PIB está em bilhões, então multiplicamos por 1 bilhão)
    superPoder2 = populacao2 + area2 + pib2 * 1000000000 + pontosTuristicos2 + pibPerCapita2 + (1 / densidadePop2);

    //Exibição dos dados da Carta 1
    printf("\n INFORMAÇOES DOS DADOS DA CARTA 01\n");
    printf("Carta 1:\n");
    printf("Estado: %c\n", estado1);                                   // Exibe o estado da carta 1
    printf("Código: %s\n", codigo1);                                   // Exibe o código da carta 1
    printf("Nome da Cidade: %s\n", nomeCidade1);                       // Exibe o nome da cidade da carta 1
    printf("População: %d\n", populacao1);                             // Exibe a população da cidade da carta 1
    printf("Área: %.2f km²\n", area1);                                 // Exibe a área da cidade da carta 1
    printf("PIB: %.2f bilhões de reais\n", pib1);                      // Exibe o PIB da cidade da carta 1
    printf("Número de Pontos Turísticos: %d\n", pontosTuristicos1);    // Exibe o número de pontos turísticos da cidade da carta 1
    printf("Densidade Populacional: %.2f hab/km²\n", densidadePop1);   // Exibe a densidade populacional da cidade da carta 1
    printf("PIB per Capita: %.2f reais\n", pibPerCapita1);             // Exibe o PIB da cidade da carta 1
    printf("Super Poder: %.2f\n", superPoder1);                        // Exibe o super poder da carta 1             

    
    //Exibição dos dados da Carta 2
    
    printf("\n INFORMAÇOES DOS DADOS DA CARTA 02\n");
    printf("Carta 2:\n");
    printf("Estado: %c\n", estado2);                                    // Exibe o estado da carta 2
    printf("Código: %s\n", codigo2);                                    // Exibe o código da carta 2
    printf("Nome da Cidade: %s\n", nomeCidade2);                        // Exibe o nome da cidade da carta 2
    printf("População: %d\n", populacao2);                              // Exibe a população da cidade da carta 2
    printf("Área: %.2f km²\n", area2);                                  // Exibe a área da cidade da carta 2
    printf("PIB: %.2f bilhões de reais\n", pib2);                       // Exibe o PIB da cidade da carta 2
    printf("Número de Pontos Turísticos: %d\n", pontosTuristicos2);     // Exibe o número de pontos turísticos da cidade da carta 2
    printf("Densidade Populacional: %.2f hab/km²\n", densidadePop2);    // Exibe a densidade populacional da cidade da carta 2
    printf("PIB per Capita: %.2f reais\n", pibPerCapita2);              // Exibe o PIB da cidade da carta 2
    printf("Super Poder: %.2f\n", superPoder2);                         // Exibe o super poder da    carta 2             

   /* // Comparações e Resultados
    printf("\nCOMPARAÇÃO DE CARTAS:\n");
    printf("População: Carta 1 venceu (%d)\n", populacao1 > populacao2);
    printf("Área: Carta 1 venceu (%d)\n", area1 > area2);
    printf("PIB: Carta 1 venceu (%d)\n", pib1 > pib2);
    printf("Pontos Turísticos: Carta 1 venceu (%d)\n", pontosTuristicos1 > pontosTuristicos2);
    printf("Densidade Populacional: Carta 1 venceu (%d)\n", densidadePop1 < densidadePop2); // Menor densidade vence
    printf("PIB per Capita: Carta 1 venceu (%d)\n", pibPerCapita1 > pibPerCapita2);
    printf("Super Poder: Carta 1 venceu (%d)\n", superPoder1 > superPoder2);
*/

    return 0;  // Retorna 0, indicando que o programa foi executado com sucesso
}

