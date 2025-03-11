#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de cadastro de cartas de cidades.
// Siga os comentários para implementar cada parte do desafio.
//Teste larissa

int main() {


    char estado1, estado2 [50];
    char codigodacarta1, codigodacarta2 [50];
    char nomedacidade1, nomedacidade2 [50];
    int populacao1, populacao2;
    float areakm1, areakm2;
    float PIB1, PIB2;
    int numerodepontosturisticos1, numerodepontosturisticos2;
    
    printf("Digite o estado 1: \n");
    scanf("%s", &estado1);

    printf("Digite o codigo da carta1: \n");
    scanf("%s", &codigodacarta1);

    printf("Digite o nome da cidade 1: \n");
    scanf("%s", &nomedacidade1);

    printf("Digite a populacao da cidade 1: \n");
    scanf("%d", &populacao1);

    printf("Digite a area 1 em km²:\n");
    scanf("%f", &areakm1);

    printf("Digite o PIB 1:\n");
    scanf("%f", &PIB1);

    printf("Digite o numero de pontos turisticos 1:\n");
    scanf("%d", &numerodepontosturisticos1);

    printf("Nome do Estado: %s\n", estado1); // preciso corrigir essa parte
    printf("Codigo da carta: %s\n", codigodacarta1);
    printf("Nome da Cidade: %s\n", nomedacidade1);
    printf("Populacao: %d\n", populacao1);
    printf("Area em km²: %f\n", areakm1);
    printf("PIB: %f\n", PIB1);
    printf("Numero de pontos turisticos: %d\n", numerodepontosturisticos1);

   
   
    






    
    // Sugestão: Defina variáveis separadas para cada atributo da cidade.
    // Exemplos de atributos: código da cidade, nome, população, área, PIB, número de pontos turísticos.
    
    // Cadastro das Cartas:
    // Sugestão: Utilize a função scanf para capturar as entradas do usuário para cada atributo.
    // Solicite ao usuário que insira as informações de cada cidade, como o código, nome, população, área, etc.
    
    // Exibição dos Dados das Cartas:
    // Sugestão: Utilize a função printf para exibir as informações das cartas cadastradas de forma clara e organizada.
    // Exiba os valores inseridos para cada atributo da cidade, um por linha.

    return 0;
}
