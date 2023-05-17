#include<stdio.h>
#include<stdlib.h>

//7 � Fazer um menu com a possibilidade de 3 lanches(exemplo 1 � X-TUDO R$ 33,00 2 - XNADA R$ 12,00 3 � X-SALADA
//R$25,00). Acesse a op��o de lanche escolhido e a quantidade. Verifique a op��o escolhida e atribua o valor do lanche. Fa�a os
//c�lculos necess�rios e informe: Lanche Escolhido, Pre�o, Quantidade e Valor a Pagar. Considerar a possibilidade de op��o inv�lida.

void main () {
	int op=0, qtd=0;
	float vlr=0, total=0;
	char *lanche[40];
	
	printf("Opcoes: \n 1 � X-TUDO R$ 33,00 \n 2 - X-NADA R$ 12,00  \n 3 � X-SALADA R$25,00");
	
	printf("\n Informe a op��o de lanche desejado: ");
	scanf("%i", &op);
	fflush(stdin);
	
	printf("\n Informe a quantidade desejada: ");
	scanf("%i", &qtd);
	fflush(stdin);
	
	if(op == 1) {
		vlr = 33.0;
		total = (vlr * qtd);
		*lanche ="x-tudo";
		
		printf("\n Lanche escolhido: %s", *lanche);
		printf("\n Valor do lanche: R$%f", vlr);
		printf("\n Quantidade de lanche: %i", qtd);
		printf("\n Total a pagar: R$%f", total);		
	} else 	if(op == 2) {
		vlr = 12.0;
		total = vlr * qtd;
		*lanche ="x-nada";
				
		printf("\n Lanche escolhido: %s", *lanche);
		printf("\n Valor do lanche: R$%.2f", vlr);
		printf("\n Quantidade de lanche: %i", qtd);
		printf("\n Total a pagar: R$%.2f", total);		
	} else 	if(op == 3) {
		vlr = 25.0;
		total = vlr * qtd;
		*lanche ="x-salada";
				
		printf("\n Lanche escolhido: %s", *lanche);
		printf("\n Valor do lanche: R$%.2f", vlr);
		printf("\n Quantidade de lanche: %i", qtd);
		printf("\n Total a pagar: R$%.2f", total);		
	}
}
