#include<stdio.h>
#include<stdlib.h>

//2 – Fazer um programa que leia a idade de uma pessoa e verifique se ela é maior de idade. Dica – IF Simples
void main() {
	int idade=0;
	
	printf("Informe a idade: ");
	scanf("%i", &idade);
	fflush(stdin);
	
	if(idade >= 18) {
		printf("Idade maior que 18");
	}
	
	getchar();
}
