//3–Fazer um programa que leia o valor de um livro e o curso que o aluno frequenta
//.Se o aluno for do 1 ou do 2 ano dar um desconto de 15%, mas se o aluno for do 3ano, dar um desconto de 22%.
// Mostre o valor a pagar.


#include<stdio.h>
#include<stdlib.h>
#include<locale.h>

void escrevaNome(); //protótipo de função

void main() {
  setlocale(LC_ALL, "");
  
  char course[20];
  float vlr;
  int schoolYear = 0;

  printf("\n Digite o valor do livro: \n");
  scanf("%f", &vlr);
  fflush(stdin);

  printf("Informe o curso que o aluno está matriculado: \n");
  scanf("%s", course);
	fflush(stdin);

  printf("Digite o ano que está cursando: \n");
  scanf("%i", &schoolYear);

  if(schoolYear == 1 || schoolYear == 2){
    vlr = vlr - (0.15 * vlr);
  } else if(schoolYear == 3){
    vlr = vlr - (0.22 * vlr);
  } else {
    printf("O ano digitado não possui desconto cadastrado");
  }

  printf("\n Aluno cursando o ano: %i", schoolYear);
  printf("\n Aluno cursando o curso de: %s", course);
  printf("\n Valor final do livro: R$%.2f", vlr);
}