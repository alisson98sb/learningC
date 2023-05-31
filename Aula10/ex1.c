/**
 * 1 –Fazer um programa que leia o peso e altura de um jogador. Se o peso estiver entre 70 e 80 kilos e a altura estiver entre 1,70 e 1,80 
 * o jogador está apto a jogar,se não o jogador não está apto a jogar.
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
    printf("O jogador está apto a jogar!");
  } else {
     printf("O jogador não está apto a jogar!");
  }
}