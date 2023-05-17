//Bibliotecas
#include<stdio.h>  
#include<stdlib.h> //stdlib habilita o console

//3?Fazer um programa que leia o peso(valorinteiro) e o pre?o(valorfloat) do kg de 3 produtos.
//Fa?a os c?lculos e informe o valor subtotal de cada item e o valor total.

void main(){
	//declara e define os tipos das variáveis.
	int peso1=0, peso2=0, peso3=0;
	float precokg1=0, precokg2=0, precokg3=0, valor=0, parcial=0;


	printf("\nInforme o peso do produto 1: ");
	scanf("%i", &peso1);
	fflush(stdin);

	printf("\nInforme o preco por kg do produto 1: ");
	scanf("%f", &precokg1);
	fflush(stdin);
	
	valor = (precokg1 * peso1);
	parcial += valor;

	printf("\nPreco do produto 1: %.2f", valor);
	printf("\nParcial: %.2f", parcial);
	
	//produto 2
	printf("\nInforme o peso do produto 2: ");
	scanf("%i", &peso2);
	fflush(stdin);

	printf("\nInforme o preco por kg do produto 2: ");
	scanf("%f", &precokg2);
	fflush(stdin);
	
	valor = (precokg2 * peso2);
    parcial += valor;
    
	printf("\nPreco do produto 2: %.2f", valor);
	printf("\nParcial: %.2f", parcial);

	//preco 3
	printf("\nInforme o peso do produto 3: ");
	scanf("%i", &peso3);
	fflush(stdin);

	printf("\nInforme o peso por Kg do produto 3: ");
	scanf("%f", &precokg3);
	fflush(stdin);

	valor = (precokg3 * peso3);
	parcial += valor;

	printf("\nPreco do produto 3: %.2f", valor);
	printf("\nParcial: %.2f", parcial);
	printf("\nTotal: %.2f", parcial);
	
//	system("cls"); //limpa a tela

	getchar();
}
