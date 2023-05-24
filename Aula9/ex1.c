//1–Fazer um programa que leia a média final e a frequência do aluno.
//Se a média final for maior ou igual a 7 E a frequência for maior ou 
//igual a 75,mostrar mensagem "aluno aprovado", Caso contrário "aluno reprovado".

#include<stdio.h>
#include<stdlib.h>
#include<locale.h>

void escrevaNome(); //protótipo de função

void main() {
  setlocale(LC_ALL, "");
  float mf, freq;

  printf("\n Média final do aluno: ");
  scanf("%f", &mf);
	fflush(stdin);

  printf("\n Frequência do aluno: ");
  scanf("%f", &freq);
	fflush(stdin);

  if(mf >= 7 && freq >= 75){
    printf("\n Aluno aprovado!");
  } else {
    printf("\n Aluno reprovado!");
  }
}