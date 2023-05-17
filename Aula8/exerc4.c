#include<stdio.h>
#include<stdlib.h>
//4 � Leia a m�dia do aluno. Se a m�dia for maior que 7 dar a mensagem aprovado, caso contr�rio informe ao aluno que ele est� de exame.

void main() {
	float md=0;
	
	printf("Informe a media: ");
	scanf("%f", &md);
	fflush(stdin);
	
	if(md > 7){
		printf("Parabens, voce foi aprovado!");
	} else {
		printf("Voce esta de exame");
	}
}
