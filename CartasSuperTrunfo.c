#include <stdio.h>

int main() {
    char estado1, estado2;  // Letra representando os 8 estados ex (A-H)
    char codigo1[4], codigo2[4]; // codigo da carta, formado pela letra do estado e um numero ex (A01)
    char nomeCidade1[50], nomeCidade2[50]; // Nome da Cidade
    long int populacao1, populacao2;  // População da cidade
    float area1, area2; // Area da cidade em Km2
    float pib1, pib2; // PIB da cidade em bilhões de reais
    int pontosTuristicos1, pontosTuristicos2; // Numero de pontos turisticos
    float densidade1, densidade2; // densidade de população das cartas seguindo a logica densidade / area
    float pibpercapita1, pibpercapita2; // pib per capita das cartas seguindo a logica pib *1000000000 (bilhão) / população
    float superpoder1, superpoder2;

    // Entrada de dados da Carta 1
    printf("Insira os dados da Carta 1:\n");
    printf("Estado (A-H): ");
    scanf(" %c", &estado1);

    printf("Codigo da Carta (ex: A01): ");
    scanf(" %3s", codigo1);

    printf("Nome da Cidade: ");
    scanf(" %s", nomeCidade1);

    printf("Populacao: ");
    scanf(" %ld", &populacao1);

    printf("Area (km2): ");
    scanf(" %f", &area1);

    printf("PIB (em bilhoes de reais): ");
    scanf(" %f", &pib1);

    printf("Numero de Pontos Turisticos: ");
    scanf(" %d", &pontosTuristicos1);

    // Entrada de dados da Carta 2
    printf("\nInsira os dados da Carta 2:\n");
    printf("Estado (A-H): ");
    scanf(" %c", &estado2);

    printf("Codigo da Carta (ex: A01): ");
    scanf(" %3s", codigo2);

    printf("Nome da Cidade: ");
    scanf(" %s", nomeCidade2);

    printf("Populacao: ");
    scanf(" %ld", &populacao2);

    printf("Area (km2): ");
    scanf(" %f", &area2);

    printf("PIB (em bilhoes de reais): ");
    scanf(" %f", &pib2);
    
    printf("Numero de Pontos Turisticos: ");
    scanf(" %d", &pontosTuristicos2);

    // Processamento dos dados
    densidade1 = populacao1 / area1;
    pibpercapita1 = (pib1 * 1000000000) / populacao1;
    densidade2 = populacao2 / area2;
    pibpercapita2 = (pib2 * 1000000000) / populacao2;

    // Calculo do Super Poder 

    superpoder1 = (float)populacao1 + area1 + (pib1 * 1000000000) + (float)pontosTuristicos1 + pibpercapita1 + (1.0 / densidade1); // 1.0 / densidade1 é usado para considerar o inverso da densidade populacional no cálculo do "Super Poder".
    superpoder2 = (float)populacao2 + area2 + (pib2 * 1000000000) + (float)pontosTuristicos2 + pibpercapita2 + (1.0 / densidade2); 

    // Exibição dos dados no final
    printf("\nDados das Cartas:\n");

    printf("\nCarta 1\n");
    printf("Estado: %c\n", estado1);
    printf("Codigo: %s\n", codigo1);
    printf("Nome da Cidade: %s\n", nomeCidade1);
    printf("Populacao: %ld\n", populacao1);
    printf("Area: %.2f km2\n", area1);
    printf("PIB: %.4f bilhoes de reais\n", pib1);
    printf("Numero de Pontos Turisticos: %d\n", pontosTuristicos1);
    printf("Densidade Populacional: %.2f hab/km²\n", densidade1);
    printf("PIB per Capita: %.2f reais\n", pibpercapita1);
    printf("Super Poder: %.2f\n", superpoder1);

    printf("\nCarta 2\n");
    printf("Estado: %c\n", estado2);
    printf("Codigo: %s\n", codigo2);
    printf("Nome da Cidade: %s\n", nomeCidade2);
    printf("Populacao: %ld\n", populacao2);
    printf("Area: %.2f km2\n", area2);
    printf("PIB: %.2f bilhoes de reais\n", pib2);
    printf("Numero de Pontos Turisticos: %d\n", pontosTuristicos2);
    printf("Densidade Populacional: %.2f hab/km²\n", densidade2);
    printf("PIB per Capita: %.2f reais\n", pibpercapita2);
    printf("Super Poder: %.2f\n", superpoder2);

    // Comparação das cartas
    printf("\nComparacao de cartas (Atributo: Populacao):\n\n");
    printf("Carta 1 - %s (%c): %ld\n", nomeCidade1, estado1, populacao1);
    printf("Carta 2 - %s (%c): %ld\n", nomeCidade2, estado2, populacao2);
    
    if (populacao1 > populacao2) {
        printf("Resultado: Carta 1 (%s) venceu!\n", nomeCidade1);
    } else {
        printf("Resultado: Carta 2 (%s) venceu!\n", nomeCidade2);
    }

    printf("\n(Atributo: Área):\n\n");
    printf("Carta 1 - %s (%c): %f\n", nomeCidade1, estado1, area1);
    printf("Carta 2 - %s (%c): %f\n", nomeCidade2, estado2, area2);
    
    if (area1 > area2) {
        printf("Resultado: Carta 1 (%s) venceu!\n", nomeCidade1);
    } else {
        printf("Resultado: Carta 2 (%s) venceu!\n", nomeCidade2);
    }

    printf("\n(Atributo: PIB):\n\n");
    printf("Carta 1 - %s (%c): %f\n", nomeCidade1, estado1, pib1);
    printf("Carta 2 - %s (%c): %f\n", nomeCidade2, estado2, pib2);
    
    if (pib1 > pib2) {
        printf("Resultado: Carta 1 (%s) venceu!\n", nomeCidade1);
    } else {
        printf("Resultado: Carta 2 (%s) venceu!\n", nomeCidade2);
    }

    printf("\n(Atributo: Número de pontos turísticos):\n\n");
    printf("Carta 1 - %s (%c): %d\n", nomeCidade1, estado1, pontosTuristicos1);
    printf("Carta 2 - %s (%c): %d\n", nomeCidade2, estado2, pontosTuristicos2);
    
    if (pontosTuristicos1 > pontosTuristicos2) {
        printf("Resultado: Carta 1 (%s) venceu!\n", nomeCidade1);
    } else {
        printf("Resultado: Carta 2 (%s) venceu!\n", nomeCidade2);
    }

    printf("\n(Atributo: Densidade populacional):\n\n");
    printf("Carta 1 - %s (%c): %f\n", nomeCidade1, estado1, densidade1);
    printf("Carta 2 - %s (%c): %f\n", nomeCidade2, estado2, densidade2);
    
    if (densidade1 < densidade2) {
        printf("Resultado: Carta 1 (%s) venceu!\n", nomeCidade1);
    } else {
        printf("Resultado: Carta 2 (%s) venceu!\n", nomeCidade2);
    }
    
    printf("\n(Atributo: PIB Per Capita):\n\n");
    printf("Carta 1 - %s (%c): %f\n", nomeCidade1, estado1, pibpercapita1);
    printf("Carta 2 - %s (%c): %f\n", nomeCidade2, estado2, pibpercapita2);
    
    if (pibpercapita1 > pibpercapita2) {
        printf("Resultado: Carta 1 (%s) venceu!\n", nomeCidade1);
    } else {
        printf("Resultado: Carta 2 (%s) venceu!\n", nomeCidade2);
    }

    printf("\n(Atributo: Super Poder):\n\n");
    printf("Carta 1 - %s (%c): %f\n", nomeCidade1, estado1, superpoder1);
    printf("Carta 2 - %s (%c): %f\n", nomeCidade2, estado2, superpoder2);
    
    if (superpoder1 > superpoder2) {
        printf("Resultado: Carta 1 (%s) venceu!\n", nomeCidade1);
    } else {
        printf("Resultado: Carta 2 (%s) venceu!\n", nomeCidade2);
    }

    return 0;

}
