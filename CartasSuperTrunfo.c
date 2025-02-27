#include <stdio.h>

int main() {
    // Declaração das variáveis para a Carta 1
    char codigo_carta1[4];
    int populacao_carta1;
    float area_carta1;
    float pib_carta1;
    int pontos_turisticos_carta1;

    // Declaração das variáveis para a Carta 2
    char codigo_carta2[4];
    int populacao_carta2;
    float area_carta2;
    float pib_carta2;
    int pontos_turisticos_carta2;

    // Leitura dos dados da Carta 1
    printf("--- Carta 1 ---\n");
    printf("Código (ex: A01): ");
    scanf("%s", codigo_carta1);
    printf("População: ");
    scanf("%d", &populacao_carta1);
    printf("Área: ");
    scanf("%f", &area_carta1);
    printf("PIB: ");
    scanf("%f", &pib_carta1);
    printf("Pontos turísticos: ");
    scanf("%d", &pontos_turisticos_carta1);

    // Leitura dos dados da Carta 2
    printf("\n--- Carta 2 ---\n");
    printf("Código (ex: B02): ");
    scanf("%s", codigo_carta2);
    printf("População: ");
    scanf("%d", &populacao_carta2);
    printf("Área: ");
    scanf("%f", &area_carta2);
    printf("PIB: ");
    scanf("%f", &pib_carta2);
    printf("Pontos turísticos: ");
    scanf("%d", &pontos_turisticos_carta2);

    // Exibição dos dados da Carta 1
    printf("\n--- Dados da Carta 1 ---\n");
    printf("Código: %s\n", codigo_carta1);
    printf("População: %d\n", populacao_carta1);
    printf("Área: %.2f\n", area_carta1);
    printf("PIB: %.2f\n", pib_carta1);
    printf("Pontos turísticos: %d\n", pontos_turisticos_carta1);

    // Exibição dos dados da Carta 2
    printf("\n--- Dados da Carta 2 ---\n");
    printf("Código: %s\n", codigo_carta2);
    printf("População: %d\n", populacao_carta2);
    printf("Área: %.2f\n", area_carta2);
    printf("PIB: %.2f\n", pib_carta2);
    printf("Pontos turísticos: %d\n", pontos_turisticos_carta2);

    return 0;
}
