#include<stdio.h>
#include<stdlib.h>
#include<locale.h>


void main() {
int myNumbers[] = {25, 50, 75, 100}; //Tipodoelementosdoarray nomedoarray[quantidadeopcional] = {os dados do array}
int i;

//For para mostrar os dados do array apenas
for (i = 0; i < 4; i++) {
  printf("%d\n", myNumbers[i]);
}

}