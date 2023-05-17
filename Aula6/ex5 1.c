//Bibliotecas
#include<stdio.h>  
#include<stdlib.h> //stdlib habilita o console

//5–Fazerumprogramaqueacesseemostreaconfiguraçãodoseucomputadoroucelular.Mostrarpelomenos5informaçõesdoequipamento.

void main(){
	//declara e define os tipos das variáveis.
	char so[40], marca[40], processador[40], memoria[40], memoriaram[40];
    
	printf("Informe o sistema operacional: ");
	scanf("%s", so);

    printf("\n Informe a marca do seu notbook: ");
    scanf("%s", marca);

    printf("\n Informe o processador da sua maquina: ");
    scanf("%s", processador);

    printf("\n Informe a memoria do seu notbook: ");
    scanf("%s", memoria);

    printf("\n Informe a memoria ram do seu notbook: ");
    scanf("%s", memoriaram);
	
    
	system("cls"); //limpa a tela

	printf("Dados Pessoais:");
	printf("\nSistema Operacional: %s", so);
	printf("\nMarca: %s", marca);
	printf("\nProcessador: %s", processador);
	printf("\nMemoria: %s", memoria);
	printf("\nMemoria Ram: %s", memoriaram);
}