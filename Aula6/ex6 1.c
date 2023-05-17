//Bibliotecas
#include<stdio.h>  
#include<stdlib.h> //stdlib habilita o console

//6–Fazerumprogramaqueacesse,façaocálculoemostreasomade3númerosinteiros.

void main(){
	//declara e define os tipos das variáveis.
	int x=0, y=0, z=0;
    
	printf("Informe o valor x: ");
	scanf("%i", &x);

    printf("\n Informe o valor de y: ");
    scanf("%i", &y);

    printf("\n Informe o valor de z: ");
    scanf("%i", &z);
    
	system("cls"); //limpa a tela

	printf("\nSoma: %i", (x+y+z));
}