#include <stdio.h>

int main(){
    
   char estado, estado2;
   char codigo[20], codigo2[20];
   char nome_cidade[50], nome_cidade2[50];
   unsigned long int populacao, populacao2;
   float area, area2;
   float pib, pib2;
   int pontos, pontos2;
   float densidade,densidade2;
   float capita, capita2;
   float superpoder1, superpoder2;
   int resultadop, resultadoa, resultadopi, resultadopo, resultadod, resultadoca, resultadosu;
   
   //Dados da carta
      printf("Carta 1: \n");

   printf("Qual a letra do estado: ");
   scanf("%c", &estado);

   printf("Qual e o codigo do estado: ");
   scanf("%s", &codigo);

   printf("Qual o nome da cidade: ");
   scanf("%s" ,&nome_cidade);

   printf("Quantas pessoas moram no/em %s: ", nome_cidade);
   scanf("%d", &populacao);

   printf("Quantos Kms tem %s: ", nome_cidade);
   scanf("%f", &area);

   printf("Qual e o PIB de %s: ", nome_cidade);
   scanf("%f", &pib);

   printf("Quantos pontos turisticos tem %s: ", nome_cidade);
   scanf("%d", &pontos);

      printf("\nCarta 2: \n");
   
   printf("Qual a letra do estado: ");
   scanf(" %c", &estado2);

   printf("Qual e o codigo do estado: ");
   scanf("%s", &codigo2);

   printf("Qual o nome da cidade: ");
   scanf("%s" ,&nome_cidade2);

   printf("Quantas pessoas moram no/em %s: ", nome_cidade2);
   scanf("%d", &populacao2);

   printf("Quantos Kms tem %s: ", nome_cidade2);
   scanf("%f", &area2);

   printf("Qual e o PIB de %s: ", nome_cidade2);
   scanf("%f", &pib2);

   printf("Quantos pontos turisticos tem %s: ", nome_cidade2);
   scanf("%d", &pontos2);

densidade = populacao / area, densidade2 = populacao2 / area2;
capita = pib /(float)populacao, capita2 = pib2 / (float)populacao2;
superpoder1 = ((float)populacao + area + pib + (float)pontos + densidade + capita);
superpoder2  = ((float)populacao2 + area2 + pib2 + (float)pontos2 + densidade2 + capita2);


   //Informaçoes cadastradas das cartas

   printf("\nCarta 1: \n");
   printf("Estado: %c\n", estado);
   printf("Código: %s\n", codigo);
   printf("Nome da cidade: %s\n", nome_cidade);
   printf("População: %ld\n", populacao);
   printf("Área: %.2f km²\n", area);
   printf("PIB: %.2f bilhões de reais\n", pib);
   printf("Número de Pontos Turísticos: %d\n", pontos);
   printf("Densidade Populacional: %.2f hab/km²\n", densidade);
   printf("PIB per Capita: %.2f reais\n", capita);


   printf("\nCarta 2: \n");
   printf("Estado: %c\n", estado2);
   printf("Código: %s\n", codigo2);
   printf("Nome da cidade: %s\n", nome_cidade2);
   printf("População: %ld\n", populacao2);
   printf("Área: %.2f km²\n", area2);
   printf("PIB: %.2f bilhões de reais\n", pib2);
   printf("Número de Pontos Turísticos: %d\n", pontos2);
   printf("Densidade Populacional: %.2f hab/km²\n", densidade2);
   printf("PIB per Capita: %.2f reais\n", capita2);

   resultadop = populacao > populacao2;
   resultadoa = area > area2;
   resultadopi = pib > pib2;
   resultadopo = pontos > pontos2;
   resultadod = densidade < densidade2;
   resultadoca = capita > capita2;
   resultadosu = superpoder1 > superpoder2;


   printf("\nComparação das Cartas: Carta 1 = 1|Carta 2 = 0\n");
   printf("População: Carta %d Venceu\n", resultadop);
   printf("Área: Carta %d Venceu\n", resultadoa);
   printf("PIB: Carta %d Venceu\n",resultadopi);
   printf("Pontos Turísticos: Carta %d Venceu\n", resultadopo);
   printf("Densidade Populacional: Carta %d Venceu\n", resultadod);
   printf("Pib Per Capita: Carta %d Venceu\n", resultadoca);
   printf("Super Poder: Carta %d Venceu\n", resultadosu);

}   
