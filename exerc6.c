#include<stdio.h>
#include<stdlib.h>
//6 – Acesse o nome e a idade de 2 pessoas. Verifique quem é o mais velho e informe o nome e a idade do mais velho.
//IMPORTANTE. Desconsidere a possibilidade de terem a mesma idade.

void main() {
	int idade1=0, idade2=0;
	char nome1[40], nome2[40];
	
	printf("Informe o nome da pessoa 1: ");
	scanf("%s", nome1);
	fflush(stdin);
	
	printf("Informe a idade da pessoa 1: ");
	scanf("%f", &idade1);
	fflush(stdin);
	
	printf("Informe o nome da pessoa 2: ");
	scanf("%s", nome2);
	fflush(stdin);

	printf("Informe a idade da pessoa 2: ");
	scanf("%f", &idade2);	
	fflush(stdin);

	if(idade1 > idade2) {
		printf("\n A pessoa mais velha e a: %s", nome1);
	} else {
		printf("\n A pessoa mais velha e a: %s", nome2);
	}

}
