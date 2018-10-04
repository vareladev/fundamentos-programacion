/******************************************************************************
Fundamentos de programación. Control de flujo: instrucción if.
ejemplo 6-1c:	
	Sintaxis de la instrucción de control de flujo if, bloques anidados.
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

	/*Este ejemplo evalua si el usuario ha ingresado un número negativo, positivo o cero
	  los bloques condicionales se pueden anidar*/
	if(numero>0){
		printf("el numero ingresado es positivo\n");	
	}
	else{
		if(numero==0){
			printf("el numero ingresado es 0\n");
		}
		else{
			printf("el numero ingresado es negativo\n");
		}
	}
	return 0;
}
