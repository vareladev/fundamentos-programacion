/******************************************************************************
Fundamentos de programación. Control de flujo: instrucción if.
ejemplo 6-1d:	
	Sintaxis de la instrucción de control de flujo if. estructura "else if".
Autor: Erick Varela, Ago 2018. v1.0.
*******************************************************************************/
//librerias
#include "stdio.h"

//función principal
int main(void){
	//declaración de variables
	int numero;

	//asignación de variables
	printf("Ingrese un numero:");
	scanf("%d",&numero);

	/*el bloque "else if" se utiliza cuando se tienen varias condiciones que evaluar
	  de manera independiente*/
	if(numero>0){
		printf("el numero ingresado es positivo\n");	
	}
	else if(numero==0){		
		printf("el numero ingresado es 0\n");
	}
	else if(numero<0){
		printf("el numero ingresado es negativo\n");
	}
	return 0;
}
