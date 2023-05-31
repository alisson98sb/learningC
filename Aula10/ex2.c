/**
 * 2–aproveitando o programa1, ...Se a altura for maior que 1,80 e peso for acima de 100kg,mensagem a categoria e peso pesado,se não categoria indefinida.
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

  if(height < 1.70) {
    return printf("O jogador está fora da estatura, portanto não está apto a jogar!");
  }

  printf("\n Digite o peso do jogador: \n");
  scanf("%f", &weight);

  if(weight < 70) {
    return printf("O jogador está fora do peso, portanto não está apto a jogar!");
  } else  if(height > 1.80 && weight > 100){
    printf("Categoria: Peso pesado");
  } else {
    printf("O jogador está apto a jogar! \n");
    printf("Categoria: INDEFINIDA\n");
  }
}