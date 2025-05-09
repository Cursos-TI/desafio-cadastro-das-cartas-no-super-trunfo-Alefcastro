#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de cadastro de cartas de cidades.
// Teste Alef de Jesus Caires Castro

int main() {
// Definição de variáveis para cada atributo das cidades 1 e 2


    char estado1, estado2;
    char* codigo1[50], codigo2[50];
    char* nomedacidade1[50], nomedacidade2[50];
    long int populacao1, populacao2;
    float areakm1, areakm2;
    float PIB1, PIB2;
    long int pontosturisticos1, pontosturisticos2;
    float densidade1, densidade2;
    float PIBpercapita1, PIBpercapita2;
    float superpode1, superpoder2;


    //Preenchimento de cadastro da carta 1 ultilizando o scanf
    //pede ao usuario que insira os dados da primeira carta

    printf("****Jogo de cartas Super Trunfo****\n");
    printf("Siga as instruções abaixo para cadastro das cartas\n");
    printf("\nEscolha um estado de A a H\n");
    printf("Digite um codigo de 01 a 04 ex: A01\n");
    printf("digite o nome da cidade refente ao estado escolhido\n");
    printf("Preencha os demais campos com valores sempre usando o ponto e nao a virgula\n");
    printf("Bom Jogo!\n");
    
    

    printf("\n--Preencha os dados da Carta 1--: \n");


    printf("\nDigite o Estado(A-H): \n");
    scanf(" %c", &estado1);

    printf("Codigo da carta(1-4): \n");
    scanf("%s", &codigo1);

    printf("Cidade: \n");
    scanf("%s", &nomedacidade1);

    printf("Populacao da cidade: \n");
    scanf("%d", &populacao1);

    printf("Area em km²:\n");
    scanf("%f", &areakm1);//não utilizar virgula

    printf("PIB:\n");
    scanf("%f", &PIB1);//não utilizar virgula

    printf("Digite o numero de pontos turisticos 1:\n");
    scanf("%d", &pontosturisticos1);


    //calculo da densidade e do Pib per capita da cidade 1
    densidade1 = (float) (populacao1 / areakm1);
    PIBpercapita1 =  (PIB1 * 1e9) / (float)populacao1;


    // preenchimento de cadastro da carta 2
    //mesmo modelo da carta anterior

    printf("\n--Preencha os dados da Carta 2--: \n");

    printf("\nDigite o estado(A-H): \n");
    scanf(" %c", &estado2);

    printf("Codigo da carta(1-4): \n");
    scanf("%s", &codigo2);

    printf("Cidade: \n");
    scanf("%s", &nomedacidade2);

    printf("Populaçao da cidade: \n");
    scanf("%d", &populacao2);

    printf("Area em km²: \n");
    scanf("%f", &areakm2);//não utilizar virgula

    printf("PIB: \n");
    scanf("%f", &PIB2);//não utilizar virgula

    printf("Numero de pontos turisticos: \n");
    scanf("%d", &pontosturisticos2);

    //calculo da densidade e do PIB per capita da cidade 2
    densidade2 = (float) (populacao2 / areakm2);
    PIBpercapita2 =  (PIB2 * 1e9) / (float)populacao2;

    

   



    //Impressão na tela dos dados cadatrados da carta 1 usando o printf 
    
    printf("\n--Dados daCarta 1--:\n");
    
    printf("\nEstado: %c\n",estado1); 
    printf("Codigo da carta: %s\n",codigo1);
    printf("Nome da Cidade: %s\n",nomedacidade1);
    printf("Populacao: %d de habitantes.\n",populacao1);
    printf("Area: %.3f km².\n",areakm1);
    printf("PIB: R$ %.3f Milhões de Reais.\n", PIB1);
    printf("Numero de pontos turisticos: %d\n",pontosturisticos1);
    printf("Densidade populacional: %.2f habitantes km²\n", densidade1);
    printf("PIB per capita: %.f Reais\n", PIBpercapita1);


    //Impressão na tela dos dados cadastrados da carta 2 usando o printf

    printf("\n--Dados da Carta 2--: /n");

    printf("\nEstado: %c\n",estado2); 
    printf("Codigo da carta: %s\n",codigo2);
    printf("Nome da Cidade: %s\n",nomedacidade2);
    printf("Populacao: %d de habitantes.\n",populacao2);
    printf("Area: %.3f km².\n",areakm2); 
    printf("PIB: R$ %.3f Milhões de reais.\n", PIB2);
    printf("Numero de pontos turisticos: %d\n",pontosturisticos2);
    printf("Densidade populacional: %.2f habitantes km²\n", densidade2);
    printf("PIB per capita: %f Reais\n", PIBpercapita2);


    // calculando o super poder das cartas

    superpode1 = populacao1 + areakm1 + PIB1 + pontosturisticos1 + PIBpercapita1 + (1 /densidade2);
    superpode1 = populacao2 + areakm2 + PIB2 + pontosturisticos2 + PIBpercapita2 + (1 / densidade2);

    //comparando cada atributo separadamente para que possa ser escolido cada um e verificar qual a carta vencedora
    
    printf("****** COMPARAÇÃO DAS CARTAS, PARA DEFINIR O VENCEDOR ******\n");
    printf("\n");

    printf("\nas cartas serão comparadas em todos os atributos.\n");
    printf("Se a carta 1 for vencedora, ira aparecer o numero 1.\n");
    printf("Se a carta 2 for a vencedora, ira aparecer o numero 0.\n");

    printf("Resultado da comparaçao de cada atributo:\n");
    printf("\nPopulação 1 > população 2: %d\n", populacao1 > populacao2);
    printf("Area 1 > Area 2: %f\n", areakm1 > areakm2);
    printf("PIB 1 > PIB 2: %f\n", PIB1 > PIB2);
    printf("Numero de pontos turisticos 1 > numero de pontos turisticos 2: %d\n", pontosturisticos1 > pontosturisticos2);
    printf("PIB per capita 1 > PIB per capita 2: %f\n", PIBpercapita1 > PIBpercapita2);
    printf("Densidade 1 < densidade 2 %f:", densidade1 < densidade2);

    printf("\n");
    printf("\nAgora faremos a comparaçao de todos os atrubutos em um super poder:\n");
    printf("\nSuper poder 1 > super poder 2: %f\n", superpode1 > superpoder2);
    printf("\n");
    printf("Fim de jogo");





   
   


    return 0;
}
