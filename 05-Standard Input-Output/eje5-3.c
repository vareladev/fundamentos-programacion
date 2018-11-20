/******************************************************************************
Fundamentos de programación. Standard Input-Output.
ejemplo 5-3:	
	Capturando carácteres y su relación con el código ascii.
Autor: Erick Varela, Ago 2018. v1.0.
*******************************************************************************/
//librerias
#include "stdio.h"

//función principal
int main(void){
	//declaración de variables
	char letra;
	
	//asignación de variables
	printf("ingrese una caracter: ");
	scanf("%c",&letra);
	
	/*Un caracter se puede tratar como letra o como numero, esto depende del código asignado
	  en el estandar ascii, leer más: https://elcodigoascii.com.ar/
	*/
	printf("El carácter ingresado es: %c, su código ascii es: %d\n",letra,letra);
	return 0;
}
