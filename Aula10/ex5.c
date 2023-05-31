/**
5–Leia 3 notas de um aluno e calcule a média. Mostre uma informação dizendo se o aluno foi aprovado ou não.
 Considere que um aluno é aprovado se sua média for maior que 7 e se não apresentou nenhuma nota abaixo de 5.
*/

#include<stdio.h>
#include<stdlib.h>
#include<locale.h>

void main() {
    setlocale(LC_ALL, "");
  
  float n1, n2, n3, md;

  printf("\n Insira a primeira nota do aluno:\n");
  scanf("%f", &n1);
  fflush(stdin);

  printf("\n Insira a segunda nota do aluno:\n");
  scanf("%f", &n2);
  fflush(stdin);

  printf("\n Insira a terceira nota do aluno\n");
  scanf("%f", &n3);
  fflush(stdin);
  
  md = (n1 + n2 + n3)/3;
  printf("Média do aluno: %f", md);

  if(n1 < 5 || n2 < 5 || n3 < 5) {
    return printf("\nO aluno não foi aprovado, pois teve uma nota abaixo de 5\n");
  } else if(md < 7) {
     printf("\nO aluno foi reprovado, média inferior a 7\n");
  } else {
    printf("\nAluno aprovado\n");
  }
}