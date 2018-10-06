/******************************************************************************
Fundamentos de programación. Arreglos.
ejemplo 12.1-1:	
	Formas de impresion para una cadena de texto.
Autor: Manuel Callejas, Oct 2018. v1.0.
*******************************************************************************/

#include <stdio.h>
#include <string.h>
int main(void){

	char palabra[]="Programacion estructurada ciclo 2/18";

	printf("Primer caracter: %c\n",palabra[0]);
	int lon=strlen(palabra);
	printf("Ultimo caracter: %c\n",palabra[lon-1]);
	
	printf("Texto sin el primer caracter: ");
	for(int i=1;i<lon;i++){
	printf("%c",palabra[i]);
	}
	printf("\n");
	
	printf("Texto sin el ultimo caracter: ");
	for(int i=0;i<lon-1;i++){
	printf("%c",palabra[i]);
	}
	printf("\n");

return 0;
}
