//2–Acessar idade e sexo de uma pessoa (digitar 1 para masculino e 2 para feminino) e verificar se a pessoa 
//pode fazer o alistamento militar.

#include<stdio.h>
#include<stdlib.h>
#include<locale.h>

void escrevaNome(); //protótipo de função

void main() {
  setlocale(LC_ALL, "");
  int opc, age;


  printf("\n Digite [1] se for masculino");
  printf("\n Digite [2] se for feminino\n");
  scanf("%i", &opc);
	fflush(stdin);

  printf("\n Informe sua idade:");
  scanf("%i", &age);
  fflush(stdin);

  if(opc == 1 && age >= 18){
    printf("\n Esta pessoa pode fazer o alistamento militar");
  } else {
    printf("\n Esta pessoa não pode fazer o alistamento militar");
  }
}