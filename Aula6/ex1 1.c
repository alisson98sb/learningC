//Bibliotecas
#include<stdio.h>  
#include<stdlib.h> //stdlib habilita o console

//1 –Fazer um programa que acesse(scanf) e mostre(printf) na tela os seus dados pessoaisCAMPOS: nome, idade, telefone, profissão, curso, e-mail. 

void main(){
	//declara e define os tipos das variáveis.
	char nome[40], profissao[40], curso[40], email[40], telefone[40]; 
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
	
	system("cls"); //limpa a tela

	printf("Dados Pessoais:");
	printf("\nNome: %s",nome);
	printf("\nIdade: %i", idade);
	printf("\nProfissao: %s",profissao);
	printf("\nCurso: %s",curso);
	printf("\nEmail: %s",email);
	printf("\nTelefone: %s", telefone);
}