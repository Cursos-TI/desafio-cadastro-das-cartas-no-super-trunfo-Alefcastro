#include <stdio.h>
#include <string.h>
#include <stdlib.h>

// Super Trunfo - Cidades (Corrigido)

int main() {
    char estado1, estado2;
    char codigo1[4], codigo2[4];
    char nomedacidade1[50], nomedacidade2[50];
    unsigned int populacao1, populacao2;
    float areakm1, areakm2;
    float PIB1, PIB2;
    int pontosturisticos1, pontosturisticos2;
    float densidade1, densidade2;
    float PIBpercapita1, PIBpercapita2;
    float superpoder1, superpoder2;
    int ataque1, ataque2;
    int opcao1, opcao2;
    int resultado1 = 0, resultado2 = 0;

    printf("**** Jogo de Cartas Super Trunfo ****\n");
    printf("Siga as instruções para cadastrar as cidades.\n\n");

    // Carta 1
    printf("-- Carta 1 --\n");
    printf("Estado (A-H): ");
    scanf(" %c", &estado1);

    printf("Código (ex: A01): ");
    scanf("%s", codigo1);

    printf("Nome da cidade: ");
    scanf(" %[^\n]", nomedacidade1);

    printf("População: ");
    scanf("%u", &populacao1);

    printf("Área em km²: ");
    scanf("%f", &areakm1);

    printf("PIB em bilhões: ");
    scanf("%f", &PIB1);

    printf("Pontos turísticos: ");
    scanf("%d", &pontosturisticos1);

    densidade1 = populacao1 / areakm1;
    PIBpercapita1 = (PIB1 * 1e9) / populacao1;
    superpoder1 = populacao1 + areakm1 + PIB1 + pontosturisticos1 + PIBpercapita1 + (1.0f / densidade1);

    // Carta 2
    printf("\n-- Carta 2 --\n");
    printf("Estado (A-H): ");
    scanf(" %c", &estado2);

    printf("Código (ex: B02): ");
    scanf("%s", codigo2);

    printf("Nome da cidade: ");
    scanf(" %[^\n]", nomedacidade2);

    printf("População: ");
    scanf("%u", &populacao2);

    printf("Área em km²: ");
    scanf("%f", &areakm2);

    printf("PIB em bilhões: ");
    scanf("%f", &PIB2);

    printf("Pontos turísticos: ");
    scanf("%d", &pontosturisticos2);

    densidade2 = populacao2 / areakm2;
    PIBpercapita2 = (PIB2 * 1e9) / populacao2;
    superpoder2 = populacao2 + areakm2 + PIB2 + pontosturisticos2 + PIBpercapita2 + (1.0f / densidade2);

    // Mostrar dados
    printf("\n== Dados da Carta 1 ==\n");
    printf("Estado: %c | Código: %s\n", estado1, codigo1);
    printf("Cidade: %s\n", nomedacidade1);
    printf("População: %u\n", populacao1);
    printf("Área: %.2f km²\n", areakm1);
    printf("PIB: R$ %.2f bilhões\n", PIB1);
    printf("Pontos turísticos: %d\n", pontosturisticos1);
    printf("Densidade: %.2f hab/km²\n", densidade1);
    printf("PIB per capita: R$ %.2f\n", PIBpercapita1);

    printf("\n== Dados da Carta 2 ==\n");
    printf("Estado: %c | Código: %s\n", estado2, codigo2);
    printf("Cidade: %s\n", nomedacidade2);
    printf("População: %u\n", populacao2);
    printf("Área: %.2f km²\n", areakm2);
    printf("PIB: R$ %.2f bilhões\n", PIB2);
    printf("Pontos turísticos: %d\n", pontosturisticos2);
    printf("Densidade: %.2f hab/km²\n", densidade2);
    printf("PIB per capita: R$ %.2f\n", PIBpercapita2);

    // Menu de comparação
    printf("\n*** MENU DE COMPARAÇÃO ***\n");
    printf("1. População\n2. Área\n3. PIB\n4. Pontos Turísticos\n5. Densidade\n6. PIB per capita\n7. Superpoder\n");
    printf("Escolha um atributo (1 a 7): ");
    scanf("%d", &opcao1);

    switch (opcao1) {
        case 1: ataque1 = populacao1; ataque2 = populacao2; resultado1 = ataque1 > ataque2; break;
        case 2: ataque1 = areakm1; ataque2 = areakm2; resultado1 = ataque1 > ataque2; break;
        case 3: ataque1 = PIB1; ataque2 = PIB2; resultado1 = ataque1 > ataque2; break;
        case 4: ataque1 = pontosturisticos1; ataque2 = pontosturisticos2; resultado1 = ataque1 > ataque2; break;
        case 5: resultado1 = densidade1 < densidade2; break; // menor densidade vence
        case 6: resultado1 = PIBpercapita1 > PIBpercapita2; break;
        case 7: resultado1 = superpoder1 > superpoder2; break;
        default: printf("Opção inválida!\n"); return 1;
    }

    printf("\nEscolha outro atributo diferente do primeiro: ");
    scanf("%d", &opcao2);

    if (opcao2 == opcao1) {
        printf("Atributo repetido. Reinicie e escolha atributos diferentes.\n");
        return 1;
    }

    switch (opcao2) {
        case 1: ataque1 = populacao1; ataque2 = populacao2; resultado2 = ataque1 > ataque2; break;
        case 2: ataque1 = areakm1; ataque2 = areakm2; resultado2 = ataque1 > ataque2; break;
        case 3: ataque1 = PIB1; ataque2 = PIB2; resultado2 = ataque1 > ataque2; break;
        case 4: ataque1 = pontosturisticos1; ataque2 = pontosturisticos2; resultado2 = ataque1 > ataque2; break;
        case 5: resultado2 = densidade1 < densidade2; break;
        case 6: resultado2 = PIBpercapita1 > PIBpercapita2; break;
        case 7: resultado2 = superpoder1 > superpoder2; break;
        default: printf("Opção inválida!\n"); return 1;
    }

    // Resultado final
    if (resultado1 && resultado2) {
        printf("\nParabéns! Você venceu nas duas comparações.\n");
    } else if (resultado1 || resultado2) {
        printf("\nEmpate! Uma vitória para cada lado.\n");
    } else {
        printf("\nVocê perdeu. Tente novamente!\n");
    }

    return 0;
}
