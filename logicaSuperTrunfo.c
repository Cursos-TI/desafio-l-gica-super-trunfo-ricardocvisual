#include <stdio.h>
#include <string.h>

// Definindo a estrutura para a carta da cidade
struct CartaCidade {
    char estado[3]; // Ex: "SP"
    int codigo;
    char nome[50];
    long populacao;
    float area;
    long pib;
    int pontosTuristicos;
};

int main() {
    // ---------------------------------------------------
    // 1. Cadastro das Cartas
    // ---------------------------------------------------

    printf("--- Cadastro da Primeira Carta ---\n");
    struct CartaCidade carta1;
    printf("Digite o estado (ex: SP): ");
    scanf("%s", carta1.estado);
    printf("Digite o codigo da carta: ");
    scanf("%d", &carta1.codigo);
    printf("Digite o nome da cidade: ");
    scanf(" %49[^\n]", carta1.nome); // Lê a string com espaços
    printf("Digite a populacao: ");
    scanf("%ld", &carta1.populacao);
    printf("Digite a area (km^2): ");
    scanf("%f", &carta1.area);
    printf("Digite o PIB: ");
    scanf("%ld", &carta1.pib);
    printf("Digite o numero de pontos turisticos: ");
    scanf("%d", &carta1.pontosTuristicos);

    printf("\n--- Cadastro da Segunda Carta ---\n");
    struct CartaCidade carta2;
    printf("Digite o estado (ex: SP): ");
    scanf("%s", carta2.estado);
    printf("Digite o codigo da carta: ");
    scanf("%d", &carta2.codigo);
    printf("Digite o nome da cidade: ");
    scanf(" %49[^\n]", carta2.nome);
    printf("Digite a populacao: ");
    scanf("%ld", &carta2.populacao);
    printf("Digite a area (km^2): ");
    scanf("%f", &carta2.area);
    printf("Digite o PIB: ");
    scanf("%ld", &carta2.pib);
    printf("Digite o numero de pontos turisticos: ");
    scanf("%d", &carta2.pontosTuristicos);

    printf("\n");

    // ---------------------------------------------------
    // 2. Exibição das Propriedades
    // ---------------------------------------------------

    printf("--- Dados das Cartas ---\n");
    printf("Carta 1: %s - Codigo: %d - %s\n", carta1.estado, carta1.codigo, carta1.nome);
    printf("  Populacao: %ld\n", carta1.populacao);
    printf("  Area: %.2f km^2\n", carta1.area);
    printf("  PIB: %ld\n", carta1.pib);
    printf("  Pontos Turisticos: %d\n", carta1.pontosTuristicos);
    printf("\n");

    printf("Carta 2: %s - Codigo: %d - %s\n", carta2.estado, carta2.codigo, carta2.nome);
    printf("  Populacao: %ld\n", carta2.populacao);
    printf("  Area: %.2f km^2\n", carta2.area);
    printf("  PIB: %ld\n", carta2.pib);
    printf("  Pontos Turisticos: %d\n", carta2.pontosTuristicos);
    printf("\n");

    // ---------------------------------------------------
    // 3. Comparação e Resultado
    // A propriedade de comparação escolhida é o PIB
    // ---------------------------------------------------

    printf("--- Comparacao --- \n");
    printf("Regra: Maior PIB vence.\n");

    // Lógica de comparação usando if-else
    if (carta1.pib > carta2.pib) {
        printf("A carta vencedora e a Carta 1: %s, com um PIB de %ld.\n", carta1.nome, carta1.pib);
        printf("Vencedora: %s\n", carta1.nome);
    } else if (carta2.pib > carta1.pib) {
        printf("A carta vencedora e a Carta 2: %s, com um PIB de %ld.\n", carta2.nome, carta2.pib);
        printf("Vencedora: %s\n", carta2.nome);
    } else {
        printf("Empate! O PIB de ambas as cidades e o mesmo: %ld.\n", carta1.pib);
    }

    return 0;
}
