#include <stdio.h>
#include <stdlib.h>

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
    int opcao;

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

while (1){ // adicionado o laço para poder fazer a repetição da escolha no menu


    printf("\nEscolha dois atributo para comparar:\n");
    printf("1 - Populacao\n");
    printf("2 - Area\n");
    printf("3 - PIB\n");
    printf("4 - Numero de Pontos Turisticos\n");
    printf("5 - Densidade Demografica\n");
    printf("6 - PIB Per Capita\n");
    printf("7 - Super Poder\n");
    printf("0 - Sair\n");
    
    printf("Digite o primeiro atributo: ");
    scanf(" %d", &opcao);
    if (opcao == 0) {
        printf("Saindo do jogo...\n");
        break;
    }
    int opcao2;
    printf("Digite o segundo atributo: ");
    scanf(" %d", &opcao2);
    if (opcao2 == 0) {
        printf("Saindo do jogo...\n");
        break;
    }

    float valor1 = 0, valor2 = 0, valor1_2 = 0, valor2_2 = 0;
    const char *atributo1 = "", *atributo2 = "";

    switch (opcao) {
        case 1: valor1 = populacao1; valor2 = populacao2; atributo1 = "População"; break;
        case 2: valor1 = area1; valor2 = area2; atributo1 = "Área"; break;
        case 3: valor1 = pib1; valor2 = pib2; atributo1 = "PIB"; break;
        case 4: valor1 = pontosTuristicos1; valor2 = pontosTuristicos2; atributo1 = "Pontos Turísticos"; break;
        case 5: valor1 = -densidade1; valor2 = -densidade2; atributo1 = "Densidade Demográfica"; break;
        case 6: valor1 = pibpercapita1; valor2 = pibpercapita2; atributo1 = "PIB per Capita"; break;
        case 7: valor1 = superpoder1; valor2 = superpoder2; atributo1 = "Super Poder"; break;
        default: printf("Opção 1 inválida!\n"); continue;
    }

    switch (opcao2) {
        case 1: valor1_2 = populacao1; valor2_2 = populacao2; atributo2 = "População"; break;
        case 2: valor1_2 = area1; valor2_2 = area2; atributo2 = "Área"; break;
        case 3: valor1_2 = pib1; valor2_2 = pib2; atributo2 = "PIB"; break;
        case 4: valor1_2 = pontosTuristicos1; valor2_2 = pontosTuristicos2; atributo2 = "Pontos Turísticos"; break;
        case 5: valor1_2 = -densidade1; valor2_2 = -densidade2; atributo2 = "Densidade Demográfica"; break;
        case 6: valor1_2 = pibpercapita1; valor2_2 = pibpercapita2; atributo2 = "PIB per Capita"; break;
        case 7: valor1_2 = superpoder1; valor2_2 = superpoder2; atributo2 = "Super Poder"; break;
        default: printf("Opção 2 inválida!\n"); continue;
    }

    float total1 = valor1 + valor1_2; // usando o float inclui as variaveis total 1 e total 2
    float total2 = valor2 + valor2_2;


    printf("\nComparando os atributos: %s + %s\n", atributo1, atributo2);
    printf("%s (%c): %.2f\n", nomeCidade1, estado1, total1);
    printf("%s (%c): %.2f\n", nomeCidade2, estado2, total2);

    (total1 == total2) ? printf("Resultado: Empate!!!\n") : printf("Resultado: %s venceu!!!\n",  (total1 > total2 ? nomeCidade1 : nomeCidade2));// utilizei o ? para melhorar a logica do resultado
}

return 0;

}