//Bibliotecas
#include<stdio.h>  
#include<stdlib.h> //stdlib habilita o console

//7–Fazerumprogramaqueacesse,façaocálculoemostreasomade3contasdetelefone.

void main(){
	//declara e define os tipos das variáveis.
	float janeiro=0, fevereiro=0, marco=0;
    
	printf("Informe o valor da sua conta de janeiro: ");
	scanf("%f", &janeiro);

    printf("\n Informe o valor de fevereiro: ");
    scanf("%f", &fevereiro);

    printf("\n Informe o valor de marco: ");
    scanf("%f", &marco);
    
	system("cls"); //limpa a tela

	printf("\nSoma: %.4f", (janeiro + fevereiro + marco));
}