/******************************************************************************
Fundamentos de programación. Control de flujo: instrucción if.
ejemplo 6-1b:	
	Sintaxis de la instrucción de control de flujo if.
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

	/*En el ejemplo anterior se evalua si el dato ingresado es menor o mayor a 0,
	  pero no toma en cuenta si se ingresa el valor 0, este ejemplo evalua ademas, 
	  si el usuario ha ingresado 0*/
	if(numero==0){
		printf("el numero ingresado es 0\n");
		return 0;	
	}
	if(numero>0){
		printf("el numero ingresado es positivo\n");	
	}
	else{
		printf("el numero ingresado es negativo\n");
	}

	return 0;
}
