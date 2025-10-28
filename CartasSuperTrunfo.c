#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das cartas
// Objetivo: No nível novato você deve criar as cartas representando as cidades utilizando scanf para entrada de dados e printf para exibir as informações.

int main() {
  // Área para definição das variáveis para armazenar as propriedades das cidades
  struct carta
  {
    char estado;
    char codigo[4];
    char nomeCidade [50];
    int populacao, pontosTuristicos;
    float area;
    float pib;
  };

  struct carta carta1, carta2;
  
  // Área para entrada de dados
  
  
  //CARTA 1

  printf("==CARTA 1== \n");

  printf("Estado: ");
  scanf(" %s", &carta1.estado);

  printf("Codigo da Carta: ");
  scanf(" %s", carta1.codigo);

  printf("Nome da Cidade: ");
  scanf(" %s", carta1.nomeCidade);

  printf("População da Cidade: ");
  scanf(" %d", &carta1.populacao);

  printf("Quantidade de pontos turísticos: ");
  scanf(" %d", &carta1.pontosTuristicos);

  printf("Area em KM²: ");
  scanf("%f", &carta1.area);

  //printf("Pib da cidade: ");
  //scanf("%f", &carta1.pib);

  //CARTA 2
  

  
  // Área para exibição dos dados da cidade

return 0;
} 
