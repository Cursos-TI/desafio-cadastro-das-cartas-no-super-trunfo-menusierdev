#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de cadastro de cartas de cidades.
// Siga os comentários para implementar cada parte do desafio.
//Teste larissa

int main() {
    // Declaração de variáveis
    char estado[3];  // Usando tamanho 3 para acomodar o código de estado (ex: SP)
    char codigo[3];  // Para o código de 01 a 04 (como "01", "02", etc)
    char cidade[20]; // Para o nome da cidade
    int populacao;   
    float area;
    float pib;
    int pontos;

    // Entrada de dados
    printf("carta 1: \n");
    printf("Digite a letra do estado (ex: SP): \n");
    scanf("%s", estado);

    printf("Digite um código de 01 a 04 colocando a letra na frente: \n");
    scanf("%s", codigo);

    printf("Digite o nome da cidade: \n");
    scanf(" %s", cidade);  // Ajustado para ler o nome da cidade corretamente

    printf("Digite a população: \n");
    scanf("%d", &populacao);

    printf("Digite a área em km²: \n");
    scanf("%f", &area);

    printf("Digite o PIB: \n");
    scanf("%f", &pib);

    printf("Digite quantos pontos turísticos: \n");
    scanf("%d", &pontos);

    char estado2[3];  // Usando tamanho 3 para acomodar o código de estado (ex: SP)
    char codigo2[3];  // Para o código de 01 a 04 (como "01", "02", etc)
    char cidade2[20]; // Para o nome da cidade
    int populacao2;   
    float area2;
    float pib2;
    int pontos2;

    printf("carta 2: \n");

    // Entrada de dados para a carta 2
    printf("Digite a letra do estado (ex: SP): \n");
    scanf("%s", estado2);

    printf("Digite um código de 01 a 04 colocando a letra na frente: \n");
    scanf("%s", codigo2);

    printf("Digite o nome da cidade: \n");
    scanf(" %s", cidade2);  // Ajustado para ler o nome da cidade corretamente

    printf("Digite a população: \n");
    scanf("%d", &populacao2);

    printf("Digite a área em km²: \n");
    scanf("%f", &area2);

    printf("Digite o PIB: \n");
    scanf("%f", &pib2);

    printf("Digite quantos pontos turísticos: \n");
    scanf("%d", &pontos2);

    // Exibição dos dados inseridos para a carta 1
    printf("\nCarta 1: \n");
    printf("Letra do estado: %s\n", estado);
    printf("codigo: %s\n", codigo);
    printf("Cidade: %s\n", cidade);
    printf("População: %d\n", populacao);
    printf("Área: %.2f km²\n", area);
    printf("PIB: %.2f\n", pib);
    printf("Pontos turísticos: %d\n", pontos);
    // calculos
    float pibper1 = pib / populacao;
    float densidade = populacao / area;
    printf("pib per capita: %.2f\n", pibper1);
    printf("densidade popu:%.2f\n", densidade);

    // Exibição dos dados inseridos para a carta 2
    printf("\nCarta 2: \n");
    printf("Letra do estado: %s\n", estado2);
    printf("codigo: %s\n", codigo2);
    printf("Cidade: %s\n", cidade2);
    printf("População: %d\n", populacao2);
    printf("Área: %.2f km²\n", area2);
    printf("PIB: %.2f\n", pib2);
    printf("pontos turisticos: %d\n", pontos2);

    float pibper2 = pib2 / populacao2;
    float densidade2 = populacao2 / area2;
    printf("pib per capita: %.2f\n", pibper2);
    printf("densidade popu:%.2f\n", densidade2);

    return 0;
}
