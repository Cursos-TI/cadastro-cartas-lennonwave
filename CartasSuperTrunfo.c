#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das cartas
// Objetivo: No nível novato você deve criar as cartas representando as cidades utilizando scanf para entrada de dados e printf para exibir as informações.

int main() {
  // Área para definição das variáveis para armazenar as propriedades das cidades
  char estado1[1], estado2[1];
  char nome_cidade1[50], nome_cidade2[50], codigo_carta1[50],codigo_carta2[50];
  unsigned long int populacao1, populacao2;
  float area1, area2, pib1, pib2, densidade_pop1, densidade_pop2, pib_capta1, pib_capta2;
  int pont_tur1, pont_tur2;
  double superpoder1, superpoder2;
  // Área para entrada de dados

  // ínicio da entrada de dados da primeira carta
  printf("\n Informe a letra do primeiro estado: ");
  scanf("%s", estado1);

  printf("\n Informe o código da primeira carta: ");
  scanf("%s", codigo_carta1);

  printf("\n Informe o nome da primeira cidade: ");
  scanf("%s", nome_cidade1); 

  printf("\n Informe o total de habitantes da primeira carta: ");
  scanf("%lu", &populacao1); //alterado para unsigned long int

  printf("\n Informe a área em Km2 da primeira carta: ");
  scanf("%f", &area1);

  printf("\n Informe o PIB da primeira carta: ");
  scanf("%f", &pib1);

  printf("\n Informe quantos pontos turísticos tem a primeira carta: ");
  scanf("%d", &pont_tur1);

    // ínicio da entrada de dados da segunda carta

  printf("\n Informe a letra do segundo estado: ");
  scanf("%s", estado2);

  printf("\n Informe o código da segunda carta: ");
  scanf("%s", codigo_carta2);

  printf("\n Informe o nome da segunda cidade: ");
  scanf("%s", nome_cidade2);

  printf("\n Informe o total de habitantes da segunda carta: ");
  scanf("%lu", &populacao2); //alterado para unsigned long int

  printf("\n Informe a área em Km2 da segunda carta: ");
  scanf("%f", &area2);

  printf("\n Informe o PIB da segunda carta: ");
  scanf("%f", &pib2);

  printf("\n Informe quantos pontos turísticos tem a segunda carta: ");
  scanf("%d", &pont_tur2);


  // Área para processamento 

  // Cálculo densidade populacional
  densidade_pop1 = (float) populacao1 / area1;
  densidade_pop2 = (float) populacao2 / area2;

  // Cálculo PIB per capta
  pib_capta1 =  populacao1 / pib1;
  pib_capta2 =  populacao2 / pib2;

  //Cálculo SuperPoder
  superpoder1 = (float) populacao1 + area1 + pib1 + densidade_pop1 + pib_capta1 + pont_tur1;
  superpoder2 = (float) populacao2 + area2 + pib2 + densidade_pop2 + pib_capta2 + pont_tur2;  


  // Área para exibição dos dados da cidade

  // Área para exibição dos dados da primeira cidade
  printf("\n Dados da Carta 01:\n");
  printf("Estado: %s\n", estado1);
  printf("Código da carta: %s\n", codigo_carta1);
  printf("Nome da cidade: %s\n", nome_cidade1);
  printf("População: %lu\n", populacao1); //alterado para unsigned long int
  printf("Área em Km²:%.2f km²\n ", area1);
  printf("PIB: %.2f bilhões de reais \n", pib1);
  printf("Número de pontos túristicos: %d\n", pont_tur1);
  printf("Densidade Populacional: %.2f hab/km²\n", densidade_pop1);
  printf("PIB per Capita: %.2f\n", pib_capta1);
  printf("Superpoder: %f\n", superpoder1);

  // Área para exibição da segunda cidade

  printf("\n Dados da Carta 02:\n");
  printf("Estado: %s\n", estado2);
  printf("Código da carta: %s\n", codigo_carta2);
  printf("Nome da cidade: %s\n", nome_cidade2);
  printf("População: %lu\n", populacao2); //alterado para unsigned long int
  printf("Área em Km²: %.2f km²\n", area2);
  printf("PIB: %.2f bilhões de reais \n", pib2);
  printf("Número de pontos túristicos: %d\n", pont_tur2);
  printf("Densidade Populacional: %.2f hab/km²\n", densidade_pop2);
  printf("PIB per Capita: %.2f Reais\n", pib_capta2);
  printf("Superpoder: %f\n", superpoder1);

  // Área para comparação
  printf("\nHora de comparar!\n");
  printf("\nSendo 1 para verdadeiro e 0 para falso\n");
  printf(" A População da Carta A é maior que a de B: %d\n", populacao1 > populacao2); 
  printf(" A Área da Carta A é maior que a de B: %d\n", area1 > area2); 
  printf(" O PIB da Carta A é maior que a de B: %d\n", pib1 > pib2 ); 
  printf(" O Número de pontos túristicos da Carta A é maior que a de B: %d\n",pont_tur1 > pont_tur2 ); 
  printf(" A Densidade Populacional da Carta A é maior que a de B: %d\n", densidade_pop1 > densidade_pop2); 
  printf(" O PIB per Capita da Carta A é maior que a de B: %d\n", pib_capta1 > pib_capta2); 
  printf(" O Superpoder da Carta A é maior que a de B: %d\n", superpoder1 > superpoder2); 



  



return 0;
} 
