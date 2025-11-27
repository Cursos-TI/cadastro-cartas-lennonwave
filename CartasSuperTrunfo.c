#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das cartas
// Objetivo: No nível novato você deve criar as cartas representando as cidades utilizando scanf para entrada de dados e printf para exibir as informações.

int main() {
  // Área para definição das variáveis para armazenar as propriedades das cidades
  char estado1[20], estado2[20];
  char nome_cidade1[50], nome_cidade2[50], codigo_carta1[50],codigo_carta2[50];
  int populacao1, populacao2;
  float area1, area2, pib1, pib2;
  int pont_tur1, pont_tur2;
  // Área para entrada de dados

  // ínicio da entrada de dados da primeira carta
  printf("\n Informe a sigla do primeiro estado: ");
  scanf("%s", estado1);

  printf("\n Informe o código da primeira carta: ");
  scanf("%s", codigo_carta1);

  printf("\n Informe o nome da primeira cidade: ");
  scanf("%s", nome_cidade1);

  printf("\n Informe o total de habitantes da primeira carta: ");
  scanf("%d", &populacao1);

  printf("\n Informe a área em Km2 da primeira carta: ");
  scanf("%f", &area1);

  printf("\n Informe o PIB da primeira carta: ");
  scanf("%f", &pib1);

  printf("\n Informe quantos pontos turísticos tem a primeira carta: ");
  scanf("%d", &pont_tur1);

    // ínicio da entrada de dados da segunda carta
  printf("\n Informe a sigla do segundo estado: ");
  scanf("%s", estado2);

  printf("\n Informe o código da segunda carta: ");
  scanf("%s", codigo_carta2);

  printf("\n Informe o nome da segunda cidade: ");
  scanf("%s", nome_cidade2);

  printf("\n Informe o total de habitantes da segunda carta: ");
  scanf("%d", &populacao2);

  printf("\n Informe a área em Km2 da segunda carta: ");
  scanf("%f", &area2);

  printf("\n Informe o PIB da segunda carta: ");
  scanf("%f", &pib2);

  printf("\n Informe quantos pontos turísticos tem a segunda carta: ");
  scanf("%d", &pont_tur2);

  // Área para exibição dos dados da cidade
  // Área para exibição dos dados da primeira cidade
  printf("\n Dados da Carta 01:\n");
  printf("Estado: %s\n", estado1);
  printf("Código da carta: %s\n", codigo_carta1);
  printf("Nome da cidade: %s\n", nome_cidade1);
  printf("População: %d\n", populacao1);
  printf("Área em Km²: %f\n", area1);
  printf("PIB: %f\n", pib1);
  printf("Número de pontos túristicos: %d\n", pont_tur1);

  // Área para exibição da segunda cidade

  printf("\n Dados da Carta 02:\n");
  printf("Estado: %s\n", estado2);
  printf("Código da carta: %s\n", codigo_carta2);
  printf("Nome da cidade: %s\n", nome_cidade2);
  printf("População: %d\n", populacao2);
  printf("Área em Km²: %f\n", area2);
  printf("PIB: %f\n", pib2);
  printf("Número de pontos túristicos: %d\n", pont_tur2);
  



return 0;
} 
