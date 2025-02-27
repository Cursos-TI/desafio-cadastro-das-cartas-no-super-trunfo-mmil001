#include <stdio.h>

int main() {
    // Declaração das variáveis para a Carta 1
    char codigo_carta1[4];
    unsigned long int populacao_carta1;
    float area_carta1;
    float pib_carta1;
    int pontos_turisticos_carta1;
    float densidade_populacional_carta1;
    float pib_per_capita_carta1;
    float super_poder_carta1;

    // Declaração das variáveis para a Carta 2
    char codigo_carta2[4];
    unsigned long int populacao_carta2;
    float area_carta2;
    float pib_carta2;
    int pontos_turisticos_carta2;
    float densidade_populacional_carta2;
    float pib_per_capita_carta2;
    float super_poder_carta2;

    // Leitura dos dados da Carta 1
    printf("--- Carta 1 ---\n");
    printf("Código (ex: A01): ");
    scanf("%s", codigo_carta1);
    printf("População: ");
    scanf("%lu", &populacao_carta1);
    printf("Área: ");
    scanf("%f", &area_carta1);
    printf("PIB: ");
    scanf("%f", &pib_carta1);
    printf("Pontos turísticos: ");
    scanf("%d", &pontos_turisticos_carta1);

    // Cálculo da Densidade Populacional e PIB per Capita da Carta 1
    densidade_populacional_carta1 = (float)populacao_carta1 / area_carta1;
    pib_per_capita_carta1 = pib_carta1 / populacao_carta1;

    // Cálculo do Super Poder da Carta 1
    super_poder_carta1 = (float)populacao_carta1 + area_carta1 + pib_carta1 +
                         pontos_turisticos_carta1 + pib_per_capita_carta1 +
                         (1 / densidade_populacional_carta1);

    // Leitura dos dados da Carta 2
    printf("\n--- Carta 2 ---\n");
    printf("Código (ex: B02): ");
    scanf("%s", codigo_carta2);
    printf("População: ");
    scanf("%lu", &populacao_carta2);
    printf("Área: ");
    scanf("%f", &area_carta2);
    printf("PIB: ");
    scanf("%f", &pib_carta2);
    printf("Pontos turísticos: ");
    scanf("%d", &pontos_turisticos_carta2);

    // Cálculo da Densidade Populacional e PIB per Capita da Carta 2
    densidade_populacional_carta2 = (float)populacao_carta2 / area_carta2;
    pib_per_capita_carta2 = pib_carta2 / populacao_carta2;

    // Cálculo do Super Poder da Carta 2
    super_poder_carta2 = (float)populacao_carta2 + area_carta2 + pib_carta2 +
                         pontos_turisticos_carta2 + pib_per_capita_carta2 +
                         (1 / densidade_populacional_carta2);

    // Exibição dos dados da Carta 1
    printf("\n--- Dados da Carta 1 ---\n");
    printf("Código: %s\n", codigo_carta1);
    printf("População: %lu\n", populacao_carta1);
    printf("Área: %.2f\n", area_carta1);
    printf("PIB: %.2f\n", pib_carta1);
    printf("Pontos turísticos: %d\n", pontos_turisticos_carta1);
    printf("Densidade Populacional: %.2f\n", densidade_populacional_carta1);
    printf("PIB per Capita: %.2f\n", pib_per_capita_carta1);
    printf("Super Poder: %.2f\n", super_poder_carta1);

    // Exibição dos dados da Carta 2
    printf("\n--- Dados da Carta 2 ---\n");
    printf("Código: %s\n", codigo_carta2);
    printf("População: %lu\n", populacao_carta2);
    printf("Área: %.2f\n", area_carta2);
    printf("PIB: %.2f\n", pib_carta2);
    printf("Pontos turísticos: %d\n", pontos_turisticos_carta2);
    printf("Densidade Populacional: %.2f\n", densidade_populacional_carta2);
    printf("PIB per Capita: %.2f\n", pib_per_capita_carta2);
    printf("Super Poder: %.2f\n", super_poder_carta2);

    // Comparação das Cartas
    printf("\n--- Comparação das Cartas ---\n");
    printf("População: Carta %d venceu\n",
           populacao_carta1 > populacao_carta2 ? 1 : 2);
    printf("Área: Carta %d venceu\n", area_carta1 > area_carta2 ? 1 : 2);
    printf("PIB: Carta %d venceu\n", pib_carta1 > pib_carta2 ? 1 : 2);
    printf("Pontos Turísticos: Carta %d venceu\n",
           pontos_turisticos_carta1 > pontos_turisticos_carta2 ? 1 : 2);
    printf("Densidade Populacional: Carta %d venceu\n",
           densidade_populacional_carta1 < densidade_populacional_carta2 ? 1 : 2);
    printf("PIB per Capita: Carta %d venceu\n",
           pib_per_capita_carta1 > pib_per_capita_carta2 ? 1 : 2);
    printf("Super Poder: Carta %d venceu\n",
           super_poder_carta1 > super_poder_carta2 ? 1 : 2);

    return 0;
}