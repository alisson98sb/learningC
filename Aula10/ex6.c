/**
6–Um banco concederá um crédito especial aos seus clientes, variável conforme o saldo médio no último ano. 
Leia o saldo médio de um cliente e calcule o valor do crédito de acordo com a tabela abaixo.
Mostre uma mensagem informando o saldo médio e o valor do crédito.
    Saldo médio     Percentual
    de 0 a 200      nenhum crédito
    de 201 a 400    20% do valor do saldo médio 
    de 401 a 600     30% do valor do saldo médio
    acima de 601    40% do valor do saldo médio
*/

#include<stdio.h>
#include<stdlib.h>
#include<locale.h>

void main() {
    setlocale(LC_ALL, "");
  
  float saldo, nsaldo;

  printf("\n Insira o saldo medio do ano passado:\n");
  scanf("%f", &saldo);
  fflush(stdin);
  
  if(saldo <= 200) {
    nsaldo = saldo;
  } else if(saldo <=400) {
      nsaldo = saldo + (saldo * 0.20);
      printf("Aumento de 20%% do saldo. Logo o aumento foi de %.2f", (saldo * 0.20));
  } else if(saldo <= 600) {
      nsaldo = saldo + (saldo * 0.30);
      printf("Aumento de 30%% do saldo. Logo o aumento foi de %.2f", (saldo * 0.30));
  } else {
      nsaldo = saldo + (saldo * 0.40);
      printf("Aumento de 40%% do saldo. Logo o aumento foi de %.2f", (saldo * 0.40));
  }

  printf("\n Saldo médio: %.2f", saldo);
  printf("\n Novo saldo: %.240f", nsaldo);
}