/******************************************************************************
Fundamentos de programación. Control de flujo: instrucción for.
ejemplo 7-3:	
	Crear un programa en lenguaje C que pida al usuario N numeros enteros, el programa
	pedirá datos hasta que le usuario ingrese -1. luego, se mostrará el promedio de todos
	los numeros ingresados.
Autor: Erick Varela, Ago 2018. v1.0.
*******************************************************************************/
//librerias
#include "stdio.h"

//macro
#define TRUE 1

//función principal
int main(void){
	int dato;
	int suma = 0;
	int cuenta = 0;

	while(TRUE){
		printf("ingrese numero: ");
		scanf("%d",&dato);
		if(dato == -1){
			break;
		}
		else{
			suma = suma + dato;
			cuenta = cuenta + 1;
		}
	}

	float promedio;
	promedio = (float)suma / cuenta;
	printf("el promedio es: %f\n",promedio);

	return 0;
}
