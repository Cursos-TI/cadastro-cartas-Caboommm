#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das cartas
// Objetivo: No nível novato você deve criar as cartas representando as cidades utilizando scanf para entrada de dados e printf para exibir as informações.

int main() {
  // Área para definição das variáveis para armazenar as propriedades das cidades
   char estado;
   char codigo[20];
   char nome_cidade[50];
   int populacao;
   float area;
   float pib;
   int pontos;
  // Área para entrada de dados
 printf("Carta 1: \n");

   printf("Qual a letra do estado: ");
   scanf("%c", &estado);

   printf("Qual e o codigo do estado: ");
   scanf("%s", &codigo);

   printf("Qual o nome da cidade: ");
   scanf("%s" ,&nome_cidade);

   printf("Quantas pessoas moram no %s: ", nome_cidade);
   scanf("%d", &populacao);

   printf("Quantos Kms tem %s: ", nome_cidade);
   scanf("%f", &area);

   printf("Qual e o PIB de %s: ", nome_cidade);
   scanf("%f", &pib);

   printf("Quantos pontos turisticos tem %s: ", nome_cidade);
   scanf("%d", &pontos);
  // Área para exibição dos dados da cidade
printf("\nCarta 1: \n");
   printf("Estado: %c\n", estado);
   printf("Código: %s\n", codigo);
   printf("Nome da cidade: %s\n", nome_cidade);
   printf("População: %d\n", populacao);
   printf("Área: %.2f km²\n", area);
   printf("PIB: %.2f bilhões de reais\n", pib);
   printf("Número de Pontos Turísticos: %d\n", pontos);
// Área para entrada de dados
   printf("\nCarta 2: \n");
   
   printf("Qual a letra do estado: ");
   scanf(" %c", &estado);

   printf("Qual e o codigo do estado: ");
   scanf("%s", &codigo);

   printf("Qual o nome da cidade: ");
   scanf("%s" ,&nome_cidade);

   printf("Quantas pessoas moram no %s: ", nome_cidade);
   scanf("%d", &populacao);

   printf("Quantos Kms tem %s: ", nome_cidade);
   scanf("%f", &area);

   printf("Qual e o PIB de %s: ", nome_cidade);
   scanf("%f", &pib);

   printf("Quantos pontos turisticos tem %s: ", nome_cidade);
   scanf("%d", &pontos);
 // Área para exibição dos dados da cidade
   printf("\nCarta 2: \n");
   printf("Estado: %c\n", estado);
   printf("Código: %s\n", codigo);
   printf("Nome da cidade: %s\n", nome_cidade);
   printf("População: %d\n", populacao);
   printf("Área: %.2f km²\n", area);
   printf("PIB: %.2f bilhões de reais\n", pib);
   printf("Número de Pontos Turísticos: %d\n", pontos);
return 0;
} 
