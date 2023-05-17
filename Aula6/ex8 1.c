
//Bibliotecas
#include<stdio.h>  
#include<stdlib.h> //stdlib habilita o console

//8–Leiaopreçoeaquantidadede2produtos.Calculecadasubtotal.DepoisCalculeototal.Mostretodososdadoslidos.Ossubtotaiseototal.

void main(){
	//declara e define os tipos das variáveis.
    int qtdp1=0, qtdp2=0;
	float preco1=0, preco2=0, subtotal=0;
    
	printf("Informe o valor do primeiro produto: ");
	scanf("%f", &preco1);

    printf("\n Informe a quantidade de produto: ");
    scanf("%i", &qtdp1);
    
    subtotal = (preco1 * qtdp1);

	printf("\nSubtotal: %.2f", subtotal);

    printf("\nInforme o valor do segundo produto: ");
	scanf("%f", &preco2);

    printf("\n Informe a quantidade do segundo produto: ");
    scanf("%i", &qtdp2);

    subtotal += (preco2 * qtdp2);
    
	system("cls"); //limpa a tela

	printf("\nSoma: %.2f", subtotal);
}