#include<stdio.h>
#include<stdlib.h>

//1 – Fazer um programa que leia 3 notas de um aluno. Faça os cálculos necessários fórmula -> MD = (P1 + P2 + P3) / 3 e informe
//a média obtida pelo aluno. Verifique se a média é maior que 7. Se sim mostre uma mensagem de parabéns. Dica – IF simples
void main() {
	float n1=0, n2=0,n3=0, md=0;
	
	printf("Informe a nota 1: ");
	scanf("%f", &n1);
	
	printf("\nInforme a nota 2: ");
	scanf("%f", &n2);
	
	printf("\nInforme a nota 3: ");
	scanf("%f", &n3);
	
	md = ((n1 + n2 + n3) / 3);
	
	if(md > 7) {
		printf("Parabens!!!");
	}
	
	printf("\n media: %.2f", md);
}
