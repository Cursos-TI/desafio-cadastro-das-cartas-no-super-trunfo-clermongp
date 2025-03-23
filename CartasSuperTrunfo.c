#include <stdio.h>  // Inclui a biblioteca padrão de entrada e saída

int main() {
    // Declaração das Variáveis para armazenar os dados da Carta 1
    char estado1;                   // Armazena o estado da Carta 1 (letra de A a H)
    char codigo1[4];                // Armazena o código da Carta 1 (ex: A01)
    char nomeCidade1[50];           // Armazena o nome da cidade da Carta 1
    int populacao1;                 // Armazena a população da cidade da Carta 1
    float area1;                    // Armazena a área da cidade da Carta 1 (em km²)
    float pib1;                     // Armazena o PIB da cidade da Carta 1 (em bilhões de reais)
    int pontosTuristicos1;          // Armazena o número de pontos turísticos da cidade da Carta 1
    float densidadePop1;
    float pibPerCapita1;

    // Declaração das Variáveis para armazenar os dados da Carta 2

    char estado2;                   
    char codigo2[4];       
    char nomeCidade2[50];     
    int populacao2;                 
    float area2;                    
    float pib2;                     
    int pontosTuristicos2;
    

    // Leitura dos dados da Carta 1
    printf("ENTRADA DE DADOS DA CARTA 01: \n\n");
    printf("Digite o estado da primeira Carta (letra de A a H): ");
    scanf(" %c", &estado1);         // Lê o estado da carta 1
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

    // Cálculo da densidade populacional e PIB per capita para Carta 1
    densidadePop1 = populacao1 / area1; // Densidade populacional = População / Área
    pibPerCapita1 = (pib1 * 1000000000) / populacao1; // PIB per capita = PIB / População (PIB está em bilhões, então multiplicamos por 1 bilhão)


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

    // Exibição dos dados da Carta 1
    printf("\n INFORMAÇOES DOS DADOS DA CARTA 01\n");
    printf("Carta 1:\n");
    printf("Estado: %c\n", estado1);                   // Exibe o estado da carta 1
    printf("Código: %s\n", codigo1);                   // Exibe o código da carta 1
    printf("Nome da Cidade: %s\n", nomeCidade1);       // Exibe o nome da cidade da carta 1
    printf("População: %d\n", populacao1);             // Exibe a população da cidade da carta 1
    printf("Área: %.2f km²\n", area1);                 // Exibe a área da cidade da carta 1
    printf("PIB: %.2f bilhões de reais\n", pib1);      // Exibe o PIB da cidade da carta 1
    printf("Número de Pontos Turísticos: %d\n", pontosTuristicos1);  // Exibe o número de pontos turísticos da cidade da carta 1
    printf("Densidade Populacional: %.2f hab/km²\n", densidadePop1);
    printf("PIB per Capita: %.2f reais\n", pibPerCapita1);

    // Comentado: Exibição dos dados da Carta 2 (não usado no momento)
    
    printf("\n INFORMAÇOES DOS DADOS DA CARTA 02\n");
    printf("Carta 2:\n");
    printf("Estado: %c\n", estado2);                   // Exibe o estado da carta 2
    printf("Código: %s\n", codigo2);                   // Exibe o código da carta 2
    printf("Nome da Cidade: %s\n", nomeCidade2);       // Exibe o nome da cidade da carta 2
    printf("População: %d\n", populacao2);             // Exibe a população da cidade da carta 2
    printf("Área: %.2f km²\n", area2);                 // Exibe a área da cidade da carta 2
    printf("PIB: %.2f bilhões de reais\n", pib2);      // Exibe o PIB da cidade da carta 2
    printf("Número de Pontos Turísticos: %d\n", pontosTuristicos2);  // Exibe o número de pontos turísticos da cidade da carta 2
    
    return 0;  // Retorna 0, indicando que o programa foi executado com sucesso
}

