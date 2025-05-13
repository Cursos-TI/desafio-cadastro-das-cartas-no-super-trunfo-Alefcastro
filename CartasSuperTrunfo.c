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
 printf("\n\n*** MENU DE COMPARAÇÃO DOS ATRIBUTOS ***\n\n");

    printf("1. População!\n");

    printf("2. ÁreaKm²!\n");

    printf("3. PIB!\n");

    printf("4. Pontos Turísticos!\n");

    printf("5. Densidade Populacional!\n");

    printf("6. PIB Per Capita!\n");

    printf("7. Super Poder!\n");

    printf("Escolha uma das opções: ");

    scanf("%d", &opcao1);



    switch(opcao1){

        case 1:

        // COMPARANDO OS ATRIBUTOS: POPULAÇÃO ...

        printf("\n\nCOMPARAÇÃO DE CARTAS (ATRIBUTO: POPULAÇÃO)\n\n");

        printf("Carta 1 - %s (SP): %u\n", estado1, populacao1);

        printf("Carta 2 - %s (RJ): %u\n", estado2, populacao2);



        ataque1 = populacao1;

        ataque2 = populacao2;

        resultado1 = ataque1 > ataque2 ? 1 : 0;

       

        break;

        case 2:

        // COMPARANDO OS ATRIBUTOS: ÁREAKM² ...

        printf("\n\nCOMPARAÇÃO DE CARTAS (ATRIBUTO: ÁREAKM²)\n\n");

        printf("Carta 1 - %s (SP): %.2f\n", estado1, areakm1);

        printf("Carta 2 - %s (RJ): %.2f\n", estado2, areakm2);



        ataque1 = areakm1;

        ataque2 = areakm2;

        resultado1 = ataque1 > ataque2 ? 1 : 0;



        break;

        case 3:

        // COMPARANDO OS ATRIBUTOS: PIB ...

        printf("\n\nCOMPARAÇÃO DE CARTAS (ATRIBUTO: PIB)\n\n");

        printf("Carta 1 - %s (SP): %.2f\n", estado1, PIB1);

        printf("Carta 2 - %s (RJ): %.2f\n", estado2, PIB2);



        ataque1 = PIB1;

        ataque2 = PIB2;

        resultado1 = ataque1 > ataque2 ? 1 : 0;

       

        break;

        case 4:

        // COMPARANDO OS ATRIBUTOS: PONTOS TURÍSTICOS ...

        printf("\n\nCOMPARAÇÃO DE CARTAS (ATRIBUTO: PONTOS TURÍSTICOS)\n\n");

        printf("Carta 1 - %s (SP): %d\n", estado1, pontosturisticos1);

        printf("Carta 2 - %s (RJ): %d\n", estado2, pontosturisticos2);



        ataque1 = pontosturisticos1;

        ataque2 = pontosturisticos2;

        resultado1 = ataque1 > ataque2 ? 1 : 0;

       

        break;

        case 5:

        // COMPARANDO OS ATRIBUTOS: DENSIDADE POPULACIONAL

        printf("\n\nCOMPARAÇÃO DE CARTAS (ATRIBUTO: DENSIDADE POPULACIONAL)\n\n");

        printf("Carta 1 - %s (SP): %.2f\n", estado1, densidade1);

        printf("Carta 2 - %s (RJ): %.2f\n", estado2, densidade2);



        ataque1 = densidade1;

        ataque2 = densidade2;

        resultado1 = ataque1 < ataque2 ? 1 : 0;

       

        break;

        case 6:

        // COMPARANDO OS ATRIBUTOS: PIB PER CAPITA ...

        printf("\n\nCOMPARAÇÃO DE CARTAS (ATRIBUTO: PIB PER CAPITA)\n\n");

        printf("Carta 1 - %s (SP): %.2f\n", estado1, PIBpercapita1);

        printf("Carta 2 - %s (RJ): %.2f\n", estado2, PIBpercapita2);



        ataque1 = PIBpercapita1;

        ataque2 = PIBpercapita2;

        resultado1 = ataque1 > ataque2 ? 1 : 0;

       

        break;

        case 7:

        // COMPARANDO O SUPER PODER ...

        printf("\n\nCOMPARAÇÃO DE CARTAS (ATRIBUTO: COMPARANDO TODOS OS ATRIBUTOS (SUPER PODER!))\n\n");

        printf("Carta 1 - %s (SP): %.2f\n", estado1, superpoder1);

        printf("Carta 2 - %s (RJ): %.2f\n", estado1, superpoder2);



        ataque1 = superpoder1;

        ataque2 = superpoder2;

        resultado1 = superpoder1 > superpoder2 ? 1 : 0;

        break;

        default:

        printf("Opção Inválida, Tente novamente!\n");

    }

    printf("\n\n*** MENU DE COMPARAÇÃO DOS ATRIBUTOS ***\n\n");

    printf("ATENÇÃO! você de escolher um atributo diferente.\n");

    printf("1. População!\n");

    printf("2. ÁreaKm²!\n");

    printf("3. PIB!\n");

    printf("4. Pontos Turísticos!\n");

    printf("5. Densidade Populacional!\n");

    printf("6. PIB Per Capita!\n");

    printf("7. Super Poder!\n");

    printf("Escolha uma das opções: ");

    scanf("%d", &opcao2);

    if(opcao1 == opcao2){

        printf("Mesmo atributo selecionado, por favor tente de novo\n");

    } else {

        switch(opcao2){

            case 1:

            // COMPARANDO OS ATRIBUTOS: POPULAÇÃO ...

            printf("\n\nCOMPARAÇÃO DE CARTAS (ATRIBUTO: POPULAÇÃO)\n\n");

            printf("Carta 1 - %s (SP): %u\n", estado1, populacao1);

            printf("Carta 2 - %s (RJ): %u\n", estado2, populacao2);

   

            ataque1 = populacao1;

            ataque2 = populacao2;

            resultado2 = ataque1 > ataque2 ? 1 : 0;

           

            break;

            case 2:

            // COMPARANDO OS ATRIBUTOS: ÁREAKM² ...

            printf("\n\nCOMPARAÇÃO DE CARTAS (ATRIBUTO: ÁREAKM²)\n\n");

            printf("Carta 1 - %s (SP): %.2f\n", estado1, areakm1);

            printf("Carta 2 - %s (RJ): %.2f\n", estado2, areakm2);

   

            ataque1 = areakm1;

            ataque2 = areakm2;

            resultado2 = ataque1 > ataque2 ? 1 : 0;

   

            break;

            case 3:

            // COMPARANDO OS ATRIBUTOS: PIB ...

            printf("\n\nCOMPARAÇÃO DE CARTAS (ATRIBUTO: PIB)\n\n");

            printf("Carta 1 - %s (SP): %.2f\n", estado1, PIB1);

            printf("Carta 2 - %s (RJ): %.2f\n", estado2, PIB2);

   

            ataque1 = PIB1;

            ataque2 = PIB2;

            resultado2 = ataque1 > ataque2 ? 1 : 0;

           

            break;

            case 4:

            // COMPARANDO OS ATRIBUTOS: PONTOS TURÍSTICOS ...

            printf("\n\nCOMPARAÇÃO DE CARTAS (ATRIBUTO: PONTOS TURÍSTICOS)\n\n");

            printf("Carta 1 - %s (SP): %d\n", estado1, pontosturisticos1);

            printf("Carta 2 - %s (RJ): %d\n", estado2, pontosturisticos2);

   

            ataque1 = pontosturisticos1;

            ataque2 = pontosturisticos2;

            resultado2 = ataque1 > ataque2 ? 1 : 0;

           

            break;

            case 5:

            // COMPARANDO OS ATRIBUTOS: DENSIDADE POPULACIONAL

            printf("\n\nCOMPARAÇÃO DE CARTAS (ATRIBUTO: DENSIDADE POPULACIONAL)\n\n");

            printf("Carta 1 - %s (SP): %.2f\n", estado1, densidade1);

            printf("Carta 2 - %s (RJ): %.2f\n", estado2, densidade2);

   

            ataque1 = densidade1;

            ataque2 = densidade2;

            resultado2 = ataque1 < ataque2 ? 1 : 0;

           

            break;

            case 6:

            // COMPARANDO OS ATRIBUTOS: PIB PER CAPITA ...

            printf("\n\nCOMPARAÇÃO DE CARTAS (ATRIBUTO: PIB PER CAPITA)\n\n");

            printf("Carta 1 - %s (SP): %.2f\n", estado1, PIBpercapita1);

            printf("Carta 2 - %s (RJ): %.2f\n", estado2, PIBpercapita2);

   

            ataque1 = PIBpercapita1;

            ataque2 = PIBpercapita2;

            resultado2 = ataque1 > ataque2 ? 1 : 0;

           

            break;

            case 7:

            // COMPARANDO O SUPER PODER ...

            printf("\n\nCOMPARAÇÃO DE CARTAS (ATRIBUTO: COMPARANDO TODOS OS ATRIBUTOS (SUPER PODER!))\n\n");

            printf("Carta 1 - %s (SP): %.2f\n", estado1, superpoder1);

            printf("Carta 2 - %s (RJ): %.2f\n", estado2, superpoder2);

   

            ataque1 = superpoder1;

            ataque2 = superpoder2;

            resultado2 = superpoder1 > superpoder2? 1 : 0;

            break;

            default:

            printf("Opção Inválida, Tente novamente!\n");

        }

        if (resultado1 && resultado2){

            printf("\n\nParabéns, você ganhou!\n\n");

        } else if(resultado1 != resultado2){

            printf("Houve um empate!\n");

        } else {

            printf("Infelizmente, você perdeu!");

        }





   
   


    return 0;
}

