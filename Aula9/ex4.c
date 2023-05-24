//4–Fazer um programa que acesse um número de 1 a 7 e informe o dia da semana correspondente.

#include<stdio.h>
#include<stdlib.h>
#include<locale.h>

void main() {
  setlocale(LC_ALL, "");
  
  int day = 0;

  printf("\n Digite um número de 1 a 7: \n");
  scanf("%i", &day);
  fflush(stdin);

  if(day == 1){
    printf("O numero digitado corresponde a Domingo \n");
  } else if(day == 2){
    printf("O numero digitado corresponde a Segunda \n");
  } else if(day == 3){
    printf("O numero digitado corresponde a Terça \n");
  } else if(day == 4){
    printf("O numero digitado corresponde a Quarta \n");
  } else if(day == 5){
    printf("O numero digitado corresponde a Quinta \n");
  } else if(day == 6){
    printf("O numero digitado corresponde a Sexta \n");
  } else if(day == 7){
    printf("O numero digitado corresponde a Sábado \n");
  } else {
    printf("Opção inválida \n");
  }
}