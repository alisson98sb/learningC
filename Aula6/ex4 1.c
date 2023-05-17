//Bibliotecas
#include<stdio.h>  
#include<stdlib.h> //stdlib habilita o console

//4 –Fazer um programa que acesse e mostre na tela dados de um atleta.CAMPOS: nome, equipe, idade, peso, altura, salario.
void main(){
	
	char nome[40], equipe[40]; 
	int idade=0;
    float peso=0, altura=0, salario=0;
    
	printf("Informe seu nome: ");
	
	scanf("%s", nome);
	 
    printf("\n informe sua idade: ");
	scanf("%i", &idade);

	printf("\n Informe o nome da sua equipe: ");
	scanf("%s", equipe);

    printf("\n Informe o seu peso atual: ");
    scanf("%f", &peso);
	
    printf("\n Informe a sua altura: ");
    scanf("%f", &altura);

    printf("\n Informe o seu salario atual: ");
    scanf("%f", &salario);

	system("cls"); //limpa a tela

	printf("Dados Pessoais:");
	printf("\nNome: %s",nome);
	printf("\nequipe: %s",equipe);
	printf("\nIdade: %i", idade);
	printf("\nPeso: %f", peso);
	printf("\nAltura: %f", altura);
	printf("\nSalario: %.2f", salario);
}