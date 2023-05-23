#include<stdio.h>
#include<stdlib.h>
#include<locale.h>

void escrevaNome(); //protótipo de função

int main() {
  setlocale(LC_ALL, "");
  escrevaNome();
  return 0;
}

void escrevaNome() {
  printf("Bem vindo ao treinamento");
}