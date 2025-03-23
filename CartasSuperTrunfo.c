#include <stdio.h>

int main(){

    char estado; // Letra representando os 8 estados ex (A-H)
    char codigo[4]; // codigo da carta, formado pela letra do estado e um numero ex (A01)
    char nomeCidade[50]; // Nome da Cidade
    int populacao; // População da cidade
    float area; // Area da cidade em Km2
    float pib; // PIB da cidade em bilhões de reais
    int pontosTuristicos; // Numero de pontos turisticos


    
    printf("Insira os dados da Carta 1:\n");{
    printf("Estado (A-H): "); 
    scanf(" %c", &estado);
    printf("Codigo da Carta (ex: A01): ");
    scanf(" %3s", codigo);
    printf("Nome da Cidade: ");
    scanf("%s", nomeCidade);
    printf("Populacao: ");
    scanf(" %d", &populacao);
    printf("Area (km2): ");
    scanf(" %f", &area);
    printf("PIB (em bilhoes de reais): ");
    scanf(" %f", &pib);
    printf("Numero de Pontos Turisticos: ");
    scanf(" %d", &pontosTuristicos);
    
    printf("\n Carta 2 \n");
    printf("Estado: %c\n", estado);
    printf("Codigo: %s\n", codigo);
    printf("Nome da Cidade: %s\n", nomeCidade);
    printf("Populacao: %d\n", populacao);
    printf("Area: %.2f km2\n", area);
    printf("PIB: %.2f bilhoes de reais\n", pib);
    printf("Numero de Pontos Turisticos: %d\n", pontosTuristicos);
    }

    printf("\nInsira os dados da Carta 2:\n");{
    printf("Estado (A-H): ");
    scanf(" %c", &estado);
    printf("Codigo da Carta (ex: A01): ");
    scanf(" %3s", codigo);
    printf("Nome da Cidade: ");
    scanf("%s", nomeCidade);
    printf("Populacao: ");
    scanf(" %d", &populacao);
    printf("Area (km2): ");
    scanf(" %f", &area);
    printf("PIB (em bilhoes de reais): ");
    scanf(" %f", &pib);
    printf("Numero de Pontos Turisticos: ");
    scanf(" %d", &pontosTuristicos);
    

    printf("\n Carta 1 \n");
    printf("Estado: %c\n", estado);
    printf("Codigo: %s\n", codigo);
    printf("Nome da Cidade: %s\n", nomeCidade);
    printf("Populacao: %d\n", populacao);
    printf("Area: %.2f km2\n", area);
    printf("PIB: %.2f bilhoes de reais\n", pib);
    printf("Numero de Pontos Turisticos: %d\n", pontosTuristicos);
    }

    return 0;

}



