#include <stdio.h>

int main() {

    // ===== CARTA 1 =====
    char estado1;
    char codigo1[4];
    char nomeCidade1[50];
    int populacao1;
    float area1;
    float pib1;
    int pontosTuristicos1;

    // ===== CARTA 2 =====
    char estado2;
    char codigo2[4];
    char nomeCidade2[50];
    int populacao2;
    float area2;
    float pib2;
    int pontosTuristicos2;

    // ===== Entrada de dados - Carta 1 =====
    printf("=== Cadastro da Carta 1 ===\n");

    printf("Estado (A a H): ");
    scanf(" %c", &estado1);

    printf("Codigo da Carta (ex: A01): ");
    scanf("%s", codigo1);

    printf("Nome da Cidade: ");
    scanf(" %[^\n]", nomeCidade1);

    printf("Populacao: ");
    scanf("%d", &populacao1);

    printf("Area (km2): ");
    scanf("%f", &area1);

    printf("PIB (em bilhoes): ");
    scanf("%f", &pib1);

    printf("Numero de Pontos Turisticos: ");
    scanf("%d", &pontosTuristicos1);


    // ===== Entrada de dados - Carta 2 =====
    printf("\n=== Cadastro da Carta 2 ===\n");

    printf("Estado (A a H): ");
    scanf(" %c", &estado2);

    printf("Codigo da Carta (ex: B02): ");
    scanf("%s", codigo2);

    printf("Nome da Cidade: ");
    scanf(" %[^\n]", nomeCidade2);

    printf("Populacao: ");
    scanf("%d", &populacao2);

    printf("Area (km2): ");
    scanf("%f", &area2);

    printf("PIB (em bilhoes): ");
    scanf("%f", &pib2);

    printf("Numero de Pontos Turisticos: ");
    scanf("%d", &pontosTuristicos2);


    // ===== Exibição =====
    printf("\n\n===== CARTA 1 =====\n");
    printf("Estado: %c\n", estado1);
    printf("Codigo: %s\n", codigo1);
    printf("Nome da Cidade: %s\n", nomeCidade1);
    printf("Populacao: %d\n", populacao1);
    printf("Area: %.2f km2\n", area1);
    printf("PIB: %.2f bilhoes\n", pib1);
    printf("Numero de Pontos Turisticos: %d\n", pontosTuristicos1);

    printf("\n===== CARTA 2 =====\n");
    printf("Estado: %c\n", estado2);
    printf("Codigo: %s\n", codigo2);
    printf("Nome da Cidade: %s\n", nomeCidade2);
    printf("Populacao: %d\n", populacao2);
    printf("Area: %.2f km2\n", area2);
    printf("PIB: %.2f bilhoes\n", pib2);
    printf("Numero de Pontos Turisticos: %d\n", pontosTuristicos2);

    return 0;
}
#include <stdio.h>

int main() {

    /* =======================
       DECLARAÇÃO DAS VARIÁVEIS
       ======================= */

    // Carta 1
    char estado1;
    char codigo1[10];
    char nomeCidade1[50];
    unsigned long int populacao1;
    float area1;
    float pib1;
    int pontosTuristicos1;
    float densidade1;
    float pibPerCapita1;

    // Carta 2
    char estado2;
    char codigo2[10];
    char nomeCidade2[50];
    unsigned long int populacao2;
    float area2;
    float pib2;
    int pontosTuristicos2;
    float densidade2;
    float pibPerCapita2;


    /* =======================
       ENTRADA DE DADOS - CARTA 1
       ======================= */

    printf("=== Cadastro da Carta 1 ===\n");

    printf("Estado (A-Z): ");
    scanf(" %c", &estado1);

    printf("Codigo da Carta: ");
    scanf("%s", codigo1);

    printf("Nome da Cidade: ");
    scanf(" %[^\n]", nomeCidade1);

    printf("Populacao: ");
    scanf("%lu", &populacao1);

    printf("Area (km²): ");
    scanf("%f", &area1);

    printf("PIB (em bilhoes de reais): ");
    scanf("%f", &pib1);

    printf("Numero de Pontos Turisticos: ");
    scanf("%d", &pontosTuristicos1);


    /* =======================
       CÁLCULOS - CARTA 1
       ======================= */

    densidade1 = populacao1 / area1;
    pibPerCapita1 = (pib1 * 1000000000) / populacao1;


    /* =======================
       ENTRADA DE DADOS - CARTA 2
       ======================= */

    printf("\n=== Cadastro da Carta 2 ===\n");

    printf("Estado (A-Z): ");
    scanf(" %c", &estado2);

    printf("Codigo da Carta: ");
    scanf("%s", codigo2);

    printf("Nome da Cidade: ");
    scanf(" %[^\n]", nomeCidade2);

    printf("Populacao: ");
    scanf("%lu", &populacao2);

    printf("Area (km²): ");
    scanf("%f", &area2);

    printf("PIB (em bilhoes de reais): ");
    scanf("%f", &pib2);

    printf("Numero de Pontos Turisticos: ");
    scanf("%d", &pontosTuristicos2);


    /* =======================
       CÁLCULOS - CARTA 2
       ======================= */

    densidade2 = populacao2 / area2;
    pibPerCapita2 = (pib2 * 1000000000) / populacao2;


    /* =======================
       SAÍDA DE DADOS
       ======================= */

    printf("\n\n===== CARTA 1 =====\n");
    printf("Estado: %c\n", estado1);
    printf("Codigo: %s\n", codigo1);
    printf("Nome da Cidade: %s\n", nomeCidade1);
    printf("Populacao: %lu\n", populacao1);
    printf("Area: %.2f km²\n", area1);
    printf("PIB: %.2f bilhoes de reais\n", pib1);
    printf("Numero de Pontos Turisticos: %d\n", pontosTuristicos1);
    printf("Densidade Populacional: %.2f hab/km²\n", densidade1);
    printf("PIB per Capita: %.2f reais\n", pibPerCapita1);


    printf("\n===== CARTA 2 =====\n");
    printf("Estado: %c\n", estado2);
    printf("Codigo: %s\n", codigo2);
    printf("Nome da Cidade: %s\n", nomeCidade2);
    printf("Populacao: %lu\n", populacao2);
    printf("Area: %.2f km²\n", area2);
    printf("PIB: %.2f bilhoes de reais\n", pib2);
    printf("Numero de Pontos Turisticos: %d\n", pontosTuristicos2);
    printf("Densidade Populacional: %.2f hab/km²\n", densidade2);
    printf("PIB per Capita: %.2f reais\n", pibPerCapita2);

    return 0;
}
#include <stdio.h>

int main() {

    /* =========================
       DECLARAÇÃO DAS VARIÁVEIS
       ========================= */

    // Carta 1
    char estado1;
    char codigo1[10];
    char nomeCidade1[50];
    unsigned long int populacao1;
    float area1, pib1;
    int pontosTuristicos1;
    float densidade1, pibPerCapita1, superPoder1;

    // Carta 2
    char estado2;
    char codigo2[10];
    char nomeCidade2[50];
    unsigned long int populacao2;
    float area2, pib2;
    int pontosTuristicos2;
    float densidade2, pibPerCapita2, superPoder2;


    /* =========================
       ENTRADA - CARTA 1
       ========================= */

    printf("=== Carta 1 ===\n");

    scanf(" %c", &estado1);
    scanf("%s", codigo1);
    scanf(" %[^\n]", nomeCidade1);
    scanf("%lu", &populacao1);
    scanf("%f", &area1);
    scanf("%f", &pib1);
    scanf("%d", &pontosTuristicos1);


    /* =========================
       ENTRADA - CARTA 2
       ========================= */

    printf("\n=== Carta 2 ===\n");

    scanf(" %c", &estado2);
    scanf("%s", codigo2);
    scanf(" %[^\n]", nomeCidade2);
    scanf("%lu", &populacao2);
    scanf("%f", &area2);
    scanf("%f", &pib2);
    scanf("%d", &pontosTuristicos2);


    /* =========================
       CÁLCULOS
       ========================= */

    // Densidade
    densidade1 = (float) populacao1 / area1;
    densidade2 = (float) populacao2 / area2;

    // PIB per capita (PIB em bilhões → converter para valor real)
    pibPerCapita1 = (pib1 * 1000000000.0) / populacao1;
    pibPerCapita2 = (pib2 * 1000000000.0) / populacao2;

    // Super Poder
    superPoder1 =
        (float) populacao1 +
        area1 +
        pib1 +
        pontosTuristicos1 +
        pibPerCapita1 +
        (1.0 / densidade1);

    superPoder2 =
        (float) populacao2 +
        area2 +
        pib2 +
        pontosTuristicos2 +
        pibPerCapita2 +
        (1.0 / densidade2);


    /* =========================
       COMPARAÇÕES
       ========================= */

    printf("\n=== Comparacao de Cartas ===\n");

    printf("Populacao: Carta %d venceu (%d)\n",
           (populacao1 > populacao2) ? 1 : 2,
           (populacao1 > populacao2));

    printf("Area: Carta %d venceu (%d)\n",
           (area1 > area2) ? 1 : 2,
           (area1 > area2));

    printf("PIB: Carta %d venceu (%d)\n",
           (pib1 > pib2) ? 1 : 2,
           (pib1 > pib2));

    printf("Pontos Turisticos: Carta %d venceu (%d)\n",
           (pontosTuristicos1 > pontosTuristicos2) ? 1 : 2,
           (pontosTuristicos1 > pontosTuristicos2));

    // Regra especial: menor densidade vence
    printf("Densidade Populacional: Carta %d venceu (%d)\n",
           (densidade1 < densidade2) ? 1 : 2,
           (densidade1 < densidade2));

    printf("PIB per Capita: Carta %d venceu (%d)\n",
           (pibPerCapita1 > pibPerCapita2) ? 1 : 2,
           (pibPerCapita1 > pibPerCapita2));

    printf("Super Poder: Carta %d venceu (%d)\n",
           (superPoder1 > superPoder2) ? 1 : 2,
           (superPoder1 > superPoder2));


    return 0;
}
