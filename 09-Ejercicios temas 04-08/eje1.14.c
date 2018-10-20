/******************************************************************************
Fundamentos de programación. Introducción a lenguaje C.
ejemplo 1.14:	
	Crear un programa en lenguaje C que solicite al usuario un número mayor 
	que 9 y calcule cual es el primer y el último dígito. 
Autor: Erick Varela, v1.0.
*******************************************************************************/
//librerias
#include <stdio.h>

//función principal
int main(void){
	//declaración de variables locales
	int digito;
	int residuo;
	int primero;
	int ultimo;
	
	//solicitando datos al usuario
	printf("Ingrese número: ");
	scanf("%d", &digito);

	//validando que el número ingresado sea mayor a 9
	if(digito <= 9){
		printf("Error: el dígito debe ser mayor a 9.\n");
		return 0;
	}
	//realizando cálculos
	ultimo = digito % 10; //ultimo digito
	while(digito>0){
		primero = digito % 10;
		digito = digito / 10;
	}
	
	//mostrando resultado
	printf("Primer dígito: %d, Último dígito: %d\n",primero,ultimo);
	
	return 0;
}
