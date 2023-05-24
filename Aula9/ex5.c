/**
 5 - 5–Em uma loja de CD ́s existem apenas quatro tipos de preços que estão associados a cores
 .Assim os CD ́s que ficam na loja não são marcados por preços e sim por cores. Desenvolva um programa que a partir da entrada do código de cada cor 
 e da quantidade desejada, o software mostre o preço e a quantidade do cd escolhido e o valor a pagar. A loja está atualmente com a seguinte tabela de preços.
  Codigo   Cor      Preço
  1        Verde    10,00
  2        Azul     20,00
  3        Amarelo  30,00
  4        Vermelho 40,00
 * 
*/

#include<stdio.h>
#include<stdlib.h>
#include<locale.h>

void main() {
  setlocale(LC_ALL, "");
  
  int cod, qtd = 0;
  float vlr, vlrUnit; 
  char *cor[15];

  printf("\n Digite o código do produto: \n");
  scanf("%i", &cod);
  fflush(stdin);

  printf("\n Informe a quantidade deste produto: \n");
  scanf("%i", &qtd);
  fflush(stdin);

  if(cod == 1){
    vlrUnit = 10.00;
    *cor = "Verde";
  } else if(cod == 2){
    vlrUnit = 20.00;
    *cor = "Azul";
  } else if(cod == 3){
    vlrUnit = 30.00;
    *cor = "Amarelo";
  } else  if(cod == 4){
    vlrUnit = 40.00;
    *cor = "Vermelho";
  } else {
    printf("opção inválida \n");

    return 0;
  }

  vlr = vlrUnit * qtd;

  printf("\n Código do produto: %i", cod);
  printf("\n Cor do produto: %s", *cor);
  printf("\n Preço unitário do produto: %.2f", vlrUnit);
  printf("\n Quantidade solicitada: %i", qtd);
  printf("\n Valor Total: %.2f", vlr);
}