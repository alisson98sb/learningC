//Bibliotecas
#include<stdio.h>  
#include<stdlib.h> //stdlib habilita o console

//1–Fazer um programa que leia o nome e a idade de 3 pessoas,
//façasoscálculosnecessários, mostre o nome e as idades lidas, o resultado da soma das idades e a idade média das pessoas.

void main(){
	//declara e define os tipos das variÃ¡veis.
	char nome1[20], nome2[20], nome3[20]; 
	int idade1=0, idade2=0, idade3=0, somaidade=0;
	float idademedia=0;

	printf("Informe o nome da pessoa1: ");
	scanf("%[^\n]", nome1); 
	fflush(stdin);
	
	printf("Informe o nome da pessoa2: ");
	scanf("%[^\n]", nome2); 
	fflush(stdin);
    
    printf("Informe o nome da pessoa3: ");
	scanf("%[^\n]", nome3); 
	fflush(stdin);
	
	printf("\n informe a idade da pessoa 1: ");	
	scanf("%i", &idade1);
	fflush(stdin);


	printf("\n informe a idade da pessoa 2: ");	
	scanf("%i", &idade2);
	fflush(stdin);
	
	
	printf("\n informe a idade da pessoa 3: ");	
	scanf("%i", &idade3);
	fflush(stdin);
	
	somaidade = idade1 + idade2 + idade3;
	idademedia = (somaidade / 3);
	
	system("cls"); //limpa a tela

	printf("\nNome da pessoa 1: %s",nome1);
	printf("\nNome da pessoa 2: %s", nome2);
	printf("\nNome da pessoa 3: %s",nome3);
	printf("\nSoma da idade: %i", somaidade);
	printf("\nMedia das idades: %.2f", idademedia);
	
	getchar();
}
