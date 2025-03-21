#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de cadastro de cartas de cidades.
// Teste Alef de Jesus Caires Castro

int main() {
// Definição de variáveis para cada atributo das cidades 1 e 2


    char estado1, estado2;
    char codigo1[50], codigo2[50];
    char nomedacidade1 [50], nomedacidade2[50];
    int populacao1, populacao2;
    float areakm1, areakm2;
    float PIB1, PIB2;
    int pontosturisticos1, pontosturisticos2;
    float densidade1, perCapita1;
    float densidade2, perCapita2;

    //Preenchimento de cadastro da carta 1 ultilizando o scanf
    //pede ao usuario que insira os dados da primeira carta

    printf("Carta 1: \n");


    printf("\nDigite o Estado(A-H): \n");
    scanf(" %c", &estado1);

    printf("Codigo da carta(1-4): \n");
    scanf("%s", &codigo1);

    printf("Cidade: \n");
    scanf("%s", &nomedacidade1);

    printf("Populacao da cidade: \n");
    scanf("%d", &populacao1);

    printf("Area em km²:\n");
    scanf("%f", &areakm1);

    printf("PIB:\n");
    scanf("%f", &PIB1);

    printf("Digite o numero de pontos turisticos 1:\n");
    scanf("%d", &pontosturisticos1);

    densidade1 = populacao1/areakm1;

    perCapita1 = PIB1/populacao1;

    //Impressão na tela dos dados cadatrados da carta 1 usando o printf 
    
    printf("\nCarta 1:\n");
    
    printf("\nEstado: %c\n",estado1); 
    printf("Codigo da carta: %s\n",codigo1);
    printf("Nome da Cidade: %s\n",nomedacidade1);
    printf("Populacao: %d\n",populacao1);
    printf("Area em km²: %f\n",areakm1);
    printf("PIB: %f\n", PIB1);
    printf("Numero de pontos turisticos: %d\n",pontosturisticos1);
    printf("Desidade pupulacional: %.2fhab/km²\n", densidade1);
    printif("PIB per Capita; %.2fReais\n", perCapita1);


    // preenchimento de cadastro da carta 2
    //mesmo modelo da carta anterior

    printf("\nCarta 2: \n");

    printf("\nDigite o estado(A-H): \n");
    scanf(" %c", &estado2);

    printf("Codigo da carta(1-4): \n");
    scanf("%s", &codigo1);

    printf("Cidade: \n");
    scanf("%s", &nomedacidade2);

    printf("Populaçao da cidade: \n");
    scanf("%d", &populacao2);

    printf("Area em km²: \n");
    scanf("%f", &areakm2);

    printf("PIB: \n");
    scanf("%f", &PIB2);

    printf("Numero de pontos turisticos: \n");
    scanf("%d", &pontosturisticos2);

    densidade2 = populacao2/areakm2;

    perCapita2 = PIB2/populacao2

    //Impressão na tela dos dados cadastrados da carta 2 usando o printf

    printf("Carta 2: /n");

    printf("\nEstado: %c\n",estado2); 
    printf("Codigo da carta: %s\n",codigo2);
    printf("Nome da Cidade: %s\n",nomedacidade2);
    printf("Populacao: %d\n",populacao2);
    printf("Area: %fkm²\n",areakm2);
    printf("PIB: %f\n", PIB2);
    printf("Numero de pontos turisticos: %d\n",pontosturisticos2);
    printf("Desidade populacional: %.2fhab/km²\n", densidade2);
    printf("PIB per Capita: %.2fReais\n", perCapita2);



   
   


    return 0;
}
