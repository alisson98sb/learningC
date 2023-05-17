#include<stdio.h>
#include<stdlib.h>

//3 – Leia 2 números e informe qual o maior. Desconsiderar a possibilidade dos números serem iguais

void main() {
	float n1=0, n2=0; 
	
	printf("Informe o primeiro numero: ");
	scanf("%f", &n1);
	fflush(stdin);
	
	printf("Informe o segundo numero: ");
	scanf("%f", &n2);
	fflush(stdin);
	
	if(n1 > n2) {
		printf("\n O maior numero e o: %.2f", n1);
	} else {
		printf("\n O maior numero e o: %.2f", n2);
	}
}

