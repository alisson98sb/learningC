/**
3–aproveitando o programa1,...Se a altura for menor que 1,80 ou se o peso for menor que 100kg, mensagem categoria indefinida,se não categoria peso pesado.
*/

#include<stdio.h>
#include<stdlib.h>
#include<locale.h>

void main() {
    setlocale(LC_ALL, "");
  
  float weight, height;

  printf("\n Digite a altura do jogador: \n");
  scanf("%f", &height);
  fflush(stdin);

  printf("\n Digite o peso do jogador: \n");
  scanf("%f", &weight);

  if((weight >= 70 && weight <= 80) && (height >= 1.70 && height <= 1.80)) {
    printf("O jogador está apto a jogar!\n");
  } else {
     printf("O jogador não está apto a jogar!\n");
  }

  if (height < 1.80 || weight < 100) {
    printf("Categoria indefinida\n");
  } else {
    printf("Categoria peso pesado\n");
  }
}