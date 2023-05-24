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

  if(opc == 2 ){
    printf("\n Esta pessoa não pode fazer o alistamento militar \n");
    return 0;
  }

  printf("\n Informe sua idade:");
  scanf("%i", &age);
  fflush(stdin);

  if(opc != 1 ){
    printf("Opção inválida");
    return 0;
  }

  if( age == 18){
    printf("\n Esta pessoa pode fazer o alistamento militar \n");
  } else {
    printf("\n Esta pessoa não pode fazer o alistamento militar \n");
  }
}