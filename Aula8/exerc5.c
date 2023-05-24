#include<stdio.h>
#include<stdlib.h>


//5 � Fazer um programa que leia o valor a pagar e a forma de pagamento. Se a forma de pagamento escolhida for 1 - a vista,
//calcule um desconto de 11% e informe o valor a pagar, mas se a forma de pagamento escolhida for 2 - a prazo, calcule um
//acr�scimo de 12% e informe o valor a pagar.

void main() {
	int fp=0;
	float vlr=0, vlrpagar=0;
	
	printf("Informe o valor: ");
	scanf("%f", &vlr);
	fflush(stdin);	
	
	printf("Informe a forma de pagamento: ");
	scanf("%i", &fp);
	fflush(stdin);
		
	if(fp == 1) {
		vlrpagar = vlr - (vlr * 0.11);
		printf("\n valor com desconto: %.2f ", vlrpagar);
	} else if( fp == 2) {
		vlrpagar = vlr + (vlr * 0.12);
		printf("\n valor com acrescimo: %.2f", vlrpagar);
	}
}
