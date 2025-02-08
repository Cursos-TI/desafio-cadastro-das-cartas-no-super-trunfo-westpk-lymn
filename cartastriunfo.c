#include <stdio.h>

int main() {
    char estado;
    char codigo[5];
    char nome[50];
    int populacao;
    float area;
    float pib;
    int pontosturisticos;

    printf("Digite o estado (A a H): ");
    scanf(" %c", &estado);

    printf("Digite o código da carta (01 a 04): ");
    scanf("%4s", &codigo); 

    printf("Digite o nome da cidade: ");
    scanf("%49s", &nome); 

    printf("Digite a população: ");
    scanf("%d", &populacao);

    printf("Digite a área da cidade (em km): ");
    scanf("%f", &area);

    printf("Digite o PIB da cidade: ");
    scanf("%f", &pib);

    printf("Digite o número de pontos turísticos da cidade: ");
    scanf("%i", &pontosturisticos);

    printf("\nEstado: %c\n", estado);
    printf("Código da carta: %s\n", codigo);
    printf("Nome da cidade: %s\n", nome);
    printf("População: %d\n", populacao);
    printf("Área da cidade: %.2f km²\n", area);
    printf("PIB da cidade: %.2f\n", pib);
    printf("Pontos turísticos: %i\n", pontosturisticos);

    return 0;
}

