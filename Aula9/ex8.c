/**
8–Uma importadora importa produtos de vários países. O preço do frete varia de acordo com o país seguindo a tabela abaixo.
 Faça um programa que leia o valor de um produto, o código do país de origem (imprima as opções de código possíveis em um menu), 
 faça os cálculos necessários e imprima o valor total do produto mais frete utilizando a tabela abaixo.
 Informar se uma opção inválida for informada.
  PAIS:   EUA   FRAN    MÉX   ARG        CHIN
  FRETE: R$60   R$75    R$50  R$27,35   R$80,00
*/

#include<stdio.h>
#include<stdlib.h>
#include<locale.h>
#include<math.h>


void main() {
  setlocale(LC_ALL, "");
  
  float preco, tot, frete;
  int opt=0;

  printf("\n Inforome o código do pais de origem do produto: \n - [1]EUA \n - [2]FRAN \n - [3]MÉX \n - [4]ARG \n - [5]CHIN \n");
  scanf("%i", &opt);
  fflush(stdin);

  printf("\n Inforome o valor do produto: \n");
  scanf("%f", &preco);
  fflush(stdin);

  if(opt == 1) {
    frete = 60.00;
    tot = preco + frete;
  } else if(opt == 2) {
    frete = 75.00;
    tot = preco + frete;
  } else if(opt == 3) {
    frete = 50.00;
    tot = preco + frete;
  } else if(opt == 4) {
    frete = 27.35;
    tot = preco + frete;
  } else if(opt == 5) {
    frete = 80.00;
    tot = preco + frete;
  } else {
    printf("OPÇÃO INVÁLIDA!");
    return 0;
  }
  printf("\n Valor do produto: R$%.2f", preco);
  printf("\n Valor do frete: R$%.2f", frete);
  printf("\n total: R$%.2f", tot);
}