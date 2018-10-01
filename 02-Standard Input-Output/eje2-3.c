/******************************************************************************
Fundamentos de programación. Control de flujo: instrucción if.
ejemplo 2-3:	
	Sintaxis de la instrucción de control de flujo if. estructura "else if"
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
	  en el estandar ascii, leer mas:https://elcodigoascii.com.ar/
	*/
	printf("El carácter ingresado es: %c, su código ascii es: %d\n",letra,letra);
	return 0;
}
