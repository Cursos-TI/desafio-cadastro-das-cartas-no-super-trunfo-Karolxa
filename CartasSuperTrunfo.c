#include <stdio.h>

int main() {
    // Carta 1
    char codigo1[4];
    int populacao1;
    float area1;
    float pib1;
    int pontos1;

    // Carta 2
    char codigo2[4];
    int populacao2;
    float area2;
    float pib2;
    int pontos2;

    // Cadastro da Carta 1
    printf("=== Cadastro da Carta 1 ===\n");
    printf("Digite o código da carta (ex: A01): ");
    scanf("%s", codigo1);

    printf("Digite a populacao: ");
    scanf("%d", &populacao1);

    printf("Digite a area: ");
    scanf("%f", &area1);

    printf("Digite o PIB: ");
    scanf("%f", &pib1);

    printf("Digite o numero de pontos turisticos: ");
    scanf("%d", &pontos1);

    // Cadastro da Carta 2
    printf("\n=== Cadastro da Carta 2 ===\n");
    printf("Digite o código da carta (ex: B02): ");
    scanf("%s", codigo2);

    printf("Digite a populacao: ");
    scanf("%d", &populacao2);

    printf("Digite a area: ");
    scanf("%f", &area2);

    printf("Digite o PIB: ");
    scanf("%f", &pib2);

    printf("Digite o numero de pontos turisticos: ");
    scanf("%d", &pontos2);
    

    return 0;
}
