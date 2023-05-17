//Bibliotecas
#include<stdio.h>  
#include<stdlib.h> //stdlib habilita o console

//2–Fazer um programa que acesse e mostre na tela dados de uma ficha cadastral, utilizar no mínimo 10 campos. 
void main(){
	//declara e define os tipos das variáveis.
	char nome[40], profissao[40], curso[40], email[40], telefone[40], cidade[40], tiposanguineo[40], sexo[40], isfumante[40]; 
	int idade=0;

	printf("Informe seu nome: ");
	scanf("%s", nome); 
	
    printf("\n informe sua idade: ");
	scanf("%i", &idade);

	printf("\n Informe sua profissao: ");
	scanf("%s", profissao);
	
	printf("\n informe seu curso: ");
	scanf("%s", curso);
	
	printf("\n informe seu email: ");
	scanf("%s", email);

	printf("\n informe seu telefone: ");
	scanf("%s", telefone);

    printf("\n informe sua cidade: ");
    scanf("%s", cidade);

    printf("\n informe seu tipo sanguineo: ");
    scanf("%s", tiposanguineo);

    printf("\n informe seu sexo: ");
    scanf("%s", sexo);

    printf("\n informe se você e fumante: ");
    scanf("%s", isfumante);

	system("cls"); //clear the screen

	printf("Dados Pessoais:");
	printf("\nNome: %s",nome);
	printf("\nIdade: %i", idade);
	printf("\nProfissao: %s",profissao);
	printf("\nCurso: %s",curso);
	printf("\nEmail: %s",email);
	printf("\nTelefone: %s", telefone);
    printf("\nCidade: %s", cidade);
    printf("\nTipo Sanguineo: %s", tiposanguineo);
    printf("\nSexo: %s", sexo);
    printf("\nFumante: %s", isfumante);

}