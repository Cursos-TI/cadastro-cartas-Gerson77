#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das cartas
// Objetivo: No nível novato você deve criar as cartas representando as cidades utilizando scanf para entrada de dados e printf para exibir as informações.

int main() {
  // Área para definição das variáveis para armazenar as propriedades das cidades
  char estado[10];
  char codigo[10];
  char nomeDaCidade[50];
  int populacao;
  float area;
  float pib;
  int numberPontosTuristicos;

  // Área para entrada de dados

  printf("Digite o Estado: ");
  scanf("%s", estado);

  printf("Digite o Código da Carta: ");
  scanf("%s", codigo);

  printf("Digite o Nome da Cidade: ");
  scanf(" %[^\n]", nomeDaCidade);

  printf("Digite a População: ");
  scanf("%d", &populacao);

  printf("Digite a Área: ");
  scanf("%f", &area);

  printf("Digite o PIB: ");
  scanf("%f", &pib);

  printf("Digite o Número de Pontos Turísticos: ");
  scanf("%d", &numberPontosTuristicos);

  // Área para exibição dos dados da cidade

  printf("Carta 1:\n");
  printf("Estado: %s\n", estado);
  printf("Código: %s\n", codigo);
  printf("Nome da Cidade: %s\n", nomeDaCidade);
  printf("População: %d\n", populacao);
  printf("Área: %.2f Km²\n", area);
  printf("PIB: %.2f\n", pib);
  printf("Número de Pontos Turísticos: %d\n", numberPontosTuristicos);

return 0;
} 
