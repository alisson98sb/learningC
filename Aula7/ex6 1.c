//Bibliotecas
#include<stdio.h>  
#include<stdlib.h> //stdlib habilita o console

// 6 – Fazer um programa que leia um valor em real, transforme e mostre esse valor em dólar e euro.

void main(){
	float real=0, dollar=0, cotDollar=0, euro=0, cotEuro=0;
    
	printf("\nInforme o valor (em reais) a ser convertido: ");
	scanf("%f", &real);
	fflush(stdin);

    printf("\nInforme a cotação atual em Dóllar: ");
    scanf("%f", &cotDollar);
	fflush(stdin);

    printf("\nInforme a cotação atual em Euro: ");
    scanf("%f", &cotEuro);
    fflush(stdin);

    dollar = (real / cotDollar);
    euro = (real / cotEuro);
    
	printf("\nEm Dolar: %.2f", dollar);
	printf("\nEm Euro:  %.2f", euro);
	printf("\nDone");

	getchar();
}
