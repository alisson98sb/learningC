//Bibliotecas
#include<stdio.h>  
#include<stdlib.h> //stdlib habilita o console

// 5 – Fazer um programa que leia os valores necessários e transforme graus fahrenheit em graus célsius
//  utilizando a fórmula: celsius = (fahrenheit - 32.0) * 5.0 / 9.0;

void main(){
	float celsius=0;
	float fhr=0;

	printf("\nInforme o grau em fahrenheit a ser transformado para célsius: ");
	scanf("%f", &fhr);
	fflush(stdin);

    // fhr = (celsius*9/5)+32;
    celsius = (fhr - 32.0) * 5.0 / 9.0;

	printf("\nGraus em celsius: %.2f", celsius);
	printf("\nDone");

	getchar();
}
