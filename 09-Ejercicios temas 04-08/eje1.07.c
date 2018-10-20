/******************************************************************************
Fundamentos de programación. Introducción a lenguaje C.
ejemplo 1.07:	
	Escribir un programa que, dado un número real cualquiera, encuentre su valor 
	absoluto. El valor absoluto de un número x es igual a x si x > 0, y a -x si x 
	es menor o igual a 0. 
Autor: Erick Varela, v1.0.
*******************************************************************************/
//librerias
#include <stdio.h>

//función principal
int main(void){
	//declaración de variables locales
	float numero;

	printf("Ingrese número: ");
	scanf("%f", &numero);

	if(numero < 0){
		numero = numero * -1;
	}

	printf("Valor absoluto: %.2f\n", numero);
	return 0;
}
