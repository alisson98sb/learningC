/**
4–Ler o código do curso. Se código do curso igual a 1 ou código do curso igual a 2 mostrar mensagem fará a disciplina banco
 de dados, se não fará a disciplina programação web.
*/

#include<stdio.h>
#include<stdlib.h>
#include<locale.h>

void main() {
    setlocale(LC_ALL, "");
  
  int course;

  printf("\n Insira o codigo do curso: \n[1] - Para banco de dados\n[2] - Para programação web\n");
  scanf("%i", &course);
  fflush(stdin);

  if(course == 1) {
    printf("Curso: Banco de dados\n");
  } else if(course == 2) {
     printf("Curso: Programação web\n");
  } else {
    printf("Opção inválida");
  }
}