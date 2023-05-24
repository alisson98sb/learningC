/**
7 –Elabore um programa que solicite o peso e a altura de uma determinada pessoa. 
Após a digitação, fazer os cálculos necessários e conforme a tabela abaixo mostre o resultado.
*/

#include<stdio.h>
#include<stdlib.h>
#include<locale.h>
#include<math.h>


void main() {
  setlocale(LC_ALL, "");
  
  float pes, alt, imc;

  printf("\n Inforome o peso: \n");
  scanf("%f", &pes);
  fflush(stdin);

  printf("\n Inforome a altura: \n");
  scanf("%f", &alt);
  fflush(stdin);

  imc = pes / (alt * alt);

  if(imc < 18.5) {
    printf("IMC: %.2f \n", imc);
    printf("Esta pessoa está abaixo do peso. \n");
  } else if (imc < 24.9){
      printf("IMC: %.2f \n", imc);
      printf("Esta pessoa está com peso normal. \n");
  } else if (imc < 29.9){
      printf("IMC: %.2f \n", imc);
      printf("Esta pessoa está com sobrepeso. \n");
  } else if (imc < 24.9){
      printf("IMC: %.2f \n", imc);
      printf("Esta pessoa está abaixo do peso. \n");
  } else if (imc < 34.9){
      printf("IMC: %.2f \n", imc);
      printf("Esta pessoa está com sobrepeso grau 1. \n");
  } else if (imc < 39.9){
      printf("IMC: %.2f \n", imc);
      printf("Esta pessoa está com sobrepeso grau 2. \n");
  } else if (imc < 40){
      printf("IMC: %.2f \n", imc);
      printf("Esta pessoa está com sobrepeso grau 3. \n");
  } else {
    printf("informações de peso e altura informadas são inválidas");
  }

  printf("Peso: %.2f \n", pes);
  printf("Alt: %.2f \n", alt);
}