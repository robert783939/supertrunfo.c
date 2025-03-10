#include <stdio.h>

int main() {
    // Vari�veis para a primeira carta
    char estado1;
    char codigo1[4]; // 3 caracteres + 1 para o caractere nulo
    char cidade1[50];
    int populacao1;
    float area1;
    float pib1;
    int pontos_turisticos1;

    // Vari�veis para a segunda carta
    char estado2;
    char codigo2[4];
    char cidade2[50];
    int populacao2;
    float area2;
    float pib2;
    int pontos_turisticos2;

    // Solicitar os dados da primeira carta
    printf("Digite os dados da primeira carta:\n");

    printf("Estado (A-H): ");
    scanf(" %c", &estado1);

    printf("C�digo da Carta (ex: A01): ");
    scanf("%s", codigo1);

    printf("Nome da Cidade: ");
    scanf(" %[^\n]", cidade1); // L� a linha inteira, incluindo espa�os

    printf("Popula��o: ");
    scanf("%d", &populacao1);

    printf("�rea (em km�): ");
    scanf("%f", &area1);

    printf("PIB (em bilh�es de reais): ");
    scanf("%f", &pib1);

    printf("N�mero de Pontos Tur�sticos: ");
    scanf("%d", &pontos_turisticos1);

    // Solicitar os dados da segunda carta
    printf("\nDigite os dados da segunda carta:\n");

    printf("Estado (A-H): ");
    scanf(" %c", &estado2);

    printf("C�digo da Carta (ex: B02): ");
    scanf("%s", codigo2);

    printf("Nome da Cidade: ");
    scanf(" %[^\n]", cidade2);

    printf("Popula��o: ");
    scanf("%d", &populacao2);

    printf("�rea (em km�): ");
    scanf("%f", &area2);

    printf("PIB (em bilh�es de reais): ");
    scanf("%f", &pib2);

    printf("N�mero de Pontos Tur�sticos: ");
    scanf("%d", &pontos_turisticos2);

    // Exibir os dados da primeira carta
    printf("\nCarta 1:\n");
    printf("Estado: %c\n", estado1);
    printf("C�digo: %s\n", codigo1);
    printf("Nome da Cidade: %s\n", cidade1);
    printf("Popula��o: %d\n", populacao1);
    printf("�rea: %.2f km�\n", area1);
    printf("PIB: %.2f bilh�es de reais\n", pib1);
    printf("N�mero de Pontos Tur�sticos: %d\n", pontos_turisticos1);

    // Exibir os dados da segunda carta
    printf("\nCarta 2:\n");
    printf("Estado: %c\n", estado2);
    printf("C�digo: %s\n", codigo2);
    printf("Nome da Cidade: %s\n", cidade2);
    printf("Popula��o: %d\n", populacao2);
    printf("�rea: %.2f km�\n", area2);
    printf("PIB: %.2f bilh�es de reais\n", pib2);
    printf("N�mero de Pontos Tur�sticos: %d\n", pontos_turisticos2);

    // Exibir o resultado das duas cartas
    printf("\nResultado das duas cartas:\n");
    printf("----------------------------------------\n");
    printf("Carta 1: %s (%s) - Popula��o: %d, �rea: %.2f km�, PIB: %.2f bilh�es, Pontos Tur�sticos: %d\n",
           cidade1, codigo1, populacao1, area1, pib1, pontos_turisticos1);
    printf("Carta 2: %s (%s) - Popula��o: %d, �rea: %.2f km�, PIB: %.2f bilh�es, Pontos Tur�sticos: %d\n",
           cidade2, codigo2, populacao2, area2, pib2, pontos_turisticos2);
    printf("----------------------------------------\n");

    return 0;
