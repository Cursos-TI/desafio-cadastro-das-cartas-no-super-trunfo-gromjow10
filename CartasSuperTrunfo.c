#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de cadastro de cartas de cidades.
// Siga os comentários para implementar cada parte do desafio.

int main() {
    char estado01[50], estado02[50], estado03[50], estado04[50]; 
      char cidadeA01[50], cidadeA02[50], cidadeA03[50], cidadeA04[50], cidadeB01[50], cidadeB02[50], cidadeB03[50], cidadeB04[50];
      char cidadeC01[50], cidadeC02[50], cidadeC03[50], cidadeC04[50], cidadeD01[50], cidadeD02[50], cidadeD03[50], cidadeD04[50];
      int populacaoA01, populacaoA02, populacaoA03, populacaoA04, populacaoB01, populacaoB02, populacaoB03, populacaoB04;
      int populacaoC01, populacaoC02, populacaoC03, populacaoC04, populacaoD01, populacaoD02, populacaoD03, populacaoD04;
      int turismoA01, turismoA02, turismoA03, turismoA04, turismoB01, turismoB02, turismoB03, turismoB04;
      int turismoC01, turismoC02, turismoC03, turismoC04, turismoD01, turismoD02, turismoD03, turismoD04;
      float areaA01, areaA02, areaA03, areaA04, areaB01, areaB02, areaB03, areaB04, areaC01, areaC02, areaC03, areaC04, areaD01, areaD02, areaD03, areaD04;
      float pibA01, pibA02, pibA03, pibA04, pibB01, pibB02, pibB03, pibB04, pibC01, pibC02, pibC03, pibC04, pibD01, pibD02, pibD03, pibD04;
      
    
      printf("digite o nome do estado 1: \n");
      scanf("%s", estado01);
 
      printf("digite o nome da cidade 1: \n");
      scanf("%s", cidadeA01);
 
      printf("digite o nome da cidade 2: \n");
      scanf("%s", cidadeA02);
 
      printf("digite a quantidade de habitantes da cidade 1: \n");
      scanf("%d", &populacaoA01);
 
      printf("digite a quantidade de habitantes da cidade 2: \n");
      scanf("%d", &populacaoA02);
 
      printf("digite a area da cidade 1: \n");
      scanf("%f", &areaA01);
 
      printf("digite a area da cidade 2: \n");
      scanf("%f", &areaA02);
 
      printf("digite o pib da cidade 1: \n");
      scanf("%f", &pibA01);
 
      printf("digite o pib da cidade 2: \n");
      scanf("%f", &pibA02);
 
      printf("digite a quantidade de pontos turisticos da cidade 1: \n");
      scanf("%d", &turismoA01);
 
      printf("digite a quantidade de pontos turisticos da cidade 2: \n");
      scanf("%d", &turismoA02);
 
      printf("nome do estado 1: %s\n", estado01);
      printf("nome da cidadeA01: %s\n", cidadeA01);
      printf("dados da cidadeA01: população: %d - area: %.2f - pib: %.2f - pontos turisticos %d\n", populacaoA01, areaA01, pibA01, turismoA01);
      printf("nome da cidade 02: %s\n", cidadeA02);
      printf("dados da cidadeA02: população: %d - area: %.2f - pib: %.2f - pontos turisticos %d\n", populacaoA02, areaA02, pibA02, turismoA02);
    
    // Sugestão: Defina variáveis separadas para cada atributo da cidade.
    // Exemplos de atributos: código da cidade, nome, população, área, PIB, número de pontos turísticos.
    
    // Cadastro das Cartas:
    // Sugestão: Utilize a função scanf para capturar as entradas do usuário para cada atributo.
    // Solicite ao usuário que insira as informações de cada cidade, como o código, nome, população, área, etc.
    
    // Exibição dos Dados das Cartas:
    // Sugestão: Utilize a função printf para exibir as informações das cartas cadastradas de forma clara e organizada.
    // Exiba os valores inseridos para cada atributo da cidade, um por linha.

    return 0;
}
