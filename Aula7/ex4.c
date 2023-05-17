//Bibliotecas
#include<stdio.h>  
#include<stdlib.h> //stdlib habilita o console

//4–Fazer um programa que leia os valores necessários e transforme graus célsius em graus 
//fahrenheit utilizando a fórmula: fahrenheit=(celsius*9/5)+32;

void main(){
	int celsius=0;
	float fhr=0;


	printf("\nInforme o grau a ser transformado: ");
	scanf("%i", &celsius);
	fflush(stdin);

    fhr = (celsius*9/5)+32;

	printf("\nGraus em fahrenheit: %.2f", fhr);
	printf("\nDone");
//	system("cls"); //limpa a tela

	getchar();
}
