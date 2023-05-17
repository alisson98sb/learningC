//Bibliotecas
#include<stdio.h>  
#include<stdlib.h> //stdlib habilita o console

//2–Fazerumprogramaqueleiaonomeeopreçode 4 produtos,faça os cálculos necessários,
//mostre o nome e o preço dos produtos lidos ,
//o resultado da soma dos preços e o valor médio dos produtos/.

void main(){
	//declara e define os tipos das variÃ¡veis.
	char nome1[20], nome2[20], nome3[20], nome4[10]; 
	float preco1=0, preco2=0, preco3=0, preco4=0, sum=0, mediaprodutos=0;

	printf("\nInforme o nome do produto1: ");
	scanf("%[^\n]", nome1); 
	fflush(stdin);
	
	printf("\nInforme o preco do produto1: ");
	scanf("%f", &preco1);
	fflush(stdin);
	
	sum = preco1;
	
	printf("\nProduto 1: %s", nome1);
	printf("\nPreco produto 1: %.2f", preco1);
	printf("\nTotal: %.2f", sum);
	
	printf("\nInforme o nome do produto2: ");
	scanf("%[^\n]", nome2); 
	fflush(stdin);
	
	printf("\nInforme o preco do produto2: ");
	scanf("%f", &preco2);
	fflush(stdin);
	    
    sum += preco2;
    
	printf("\nProduto 2: %s", nome2);
	printf("\nPreco produto 2: %.2f", preco2);
	printf("\nTotal: %.2f", sum);
	
    printf("\nInforme o nome do produto3: ");
	scanf("%[^\n]", nome3); 
	fflush(stdin);
	
	printf("\nInforme o preco do produto3: ");
	scanf("%f", &preco3);
	fflush(stdin);
	
	sum += preco3;
	
	printf("\nProduto 3: %.2f", nome3);
	printf("\nPreco produto 3: %.2f", preco3);
	printf("\nTotal: %.2f", sum);
	
	printf("\nInforme o nome do produto4: ");
	scanf("%[^\n]", nome4); 
	fflush(stdin);
	
	printf("\nInforme o preco do produto4: ");
	scanf("%f", &preco4);
	fflush(stdin);
	
	sum += preco4;
	mediaprodutos = (sum/4);
	
	printf("\nProduto 4: %.2f", nome4);
	printf("\nPreco produto 4: %.2f", preco4);
	printf("\nTotal: %.2f", sum);
	printf("\nMedia dos produtos: %.2f", mediaprodutos);
	
//	system("cls"); //limpa a tela

	getchar();
}
