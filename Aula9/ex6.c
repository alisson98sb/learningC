/**
6–Fazer um programa que leia um valor de compra e uma opção de pagamento.
Se a opção for 1 mostre a mensagem pagamento a vista, calcule um desconto de 10% e mostre o valor a pagar.
Se a opção for 2 mostre a mensagem pagamento em 30 dias, calcule um acréscimo de 15% e mostre o valor a pagar.
Se a opção for 3 mostre a mensagem pagamento parcelado em 3x, Calcule um acréscimo de 20%, divida o valor obtido por 3 e mostre o valor da parcela.
 Qualquer outra opção escolhida, retorne a mensagem opção inválida e encerre a execução do programa –return(0);
*/

#include<stdio.h>
#include<stdlib.h>
#include<locale.h>

void main() {
  setlocale(LC_ALL, "");
  
  float vlr, parc;
  int fpag = 0;

  printf("\n Digite o valor do Produto: \n");
  scanf("%f", &vlr);
  fflush(stdin);

  printf("\n Informe a forma de pagamento: \n");
  scanf("%i", &fpag);
  fflush(stdin);

  if(fpag == 1){
    printf("Forma de pagamento: À vista. \n");
    vlr -= (vlr * 0.1);
    printf("Valor final à pagar: R$%.2f", vlr);
  } else if(fpag == 2){
    printf("Forma de pagamento: Em 30 dias. \n");
    vlr += (vlr * 0.15);
    printf("Valor final à pagar: R$%.2f", vlr);
  } else  if(fpag == 3){
    printf("Forma de pagamento: Parcelado em 3x. \n");
    vlr += (vlr * 0.20);
    printf("Valor total final à pagar: R$%.2f \n", vlr);
    parc = vlr / 3;
    printf("Valor valor da parcela à pagar: 3x R$%.2f \n", parc);
  }else {
    printf("Opção inválida. \n");
    return 0;
  }
}