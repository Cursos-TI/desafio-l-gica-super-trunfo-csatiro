#include <stdio.h>

int main() {
    // Carta 1
    char estado1[20], codigo1[10], cidade1[50];
    int populacao1, pontos1;
    float area1, pib1;

    // Carta 2
    char estado2[20], codigo2[10], cidade2[50];
    int populacao2, pontos2;
    float area2, pib2;

    // Cadastro Carta 1
    printf("=== Cadastro da Carta 1 ===\n");

    printf("Estado: ");
    scanf("%s", estado1);

    printf("Codigo: ");
    scanf("%s", codigo1);

    printf("Nome da cidade: ");
    scanf("%s", cidade1);

    printf("Populacao: ");
    scanf("%d", &populacao1);

    printf("Area: ");
    scanf("%f", &area1);

    printf("PIB: ");
    scanf("%f", &pib1);

    printf("Numero de pontos turisticos: ");
    scanf("%d", &pontos1);

    // Cadastro Carta 2
    printf("\n=== Cadastro da Carta 2 ===\n");

    printf("Estado: ");
    scanf("%s", estado2);

    printf("Codigo: ");
    scanf("%s", codigo2);

    printf("Nome da cidade: ");
    scanf("%s", cidade2);

    printf("Populacao: ");
    scanf("%d", &populacao2);

    printf("Area: ");
    scanf("%f", &area2);

    printf("PIB: ");
    scanf("%f", &pib2);

    printf("Numero de pontos turisticos: ");
    scanf("%d", &pontos2);

    // Exibição das cartas
    printf("\n=== Carta 1 ===\n");
    printf("Cidade: %s\nPopulacao: %d\nArea: %.2f\nPIB: %.2f\nPontos: %d\n",
           cidade1, populacao1, area1, pib1, pontos1);

    printf("\n=== Carta 2 ===\n");
    printf("Cidade: %s\nPopulacao: %d\nArea: %.2f\nPIB: %.2f\nPontos: %d\n",
           cidade2, populacao2, area2, pib2, pontos2);

    // Comparação (exemplo: população)
    printf("\n=== Comparacao por Populacao ===\n");

    if (populacao1 > populacao2) {
        printf("Vencedora: Carta 1 (%s)\n", cidade1);
    } else if (populacao2 > populacao1) {
        printf("Vencedora: Carta 2 (%s)\n", cidade2);
    } else {
        printf("Empate!\n");
    }

    return 0;
}