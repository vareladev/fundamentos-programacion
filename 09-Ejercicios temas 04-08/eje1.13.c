/******************************************************************************
Fundamentos de programación. Introducción a lenguaje C.
ejemplo 1.13:	
	Escribir un programa en C que solicite al usuario la cantidad de energía 
	eléctrica consumida en un periodo de tiempo y a continuación el programa 
	debe calcular el valor de la factura a pagar bajo el siguiente criterio:
		1. entre 0 y 50 unidades = unidades * 0.50
		2. entre 50 y 100 unidades = unidades * 0.75
		3. entre 100 y 150 unidades = unidades * 1.25
		4. arriba de 150 unidades = unidades * 1.50
	Además, es necesario agregar a la factura un cargo del 20% al resultado de 
	la operación anterior.
Autor: Erick Varela, v1.0.
*******************************************************************************/
//librerias
#include <stdio.h>

//función principal
int main(void){
	//declaración de variables locales
	float energia;
	float precio;

	//solicitando datos al usuario
	printf("Ingrese la cantidad de energía eléctrica consumida: ");
	scanf("%f", &energia);

	//realizando cálculos
	if(energia >= 0 && energia < 50){
		precio = (energia * 0.50);
	}
	else if(energia >= 50 && energia < 100){
		precio = (energia * 0.75);
	}
	else if(energia >= 100 && energia < 150){
		precio = (energia * 1.25);
	}
	else {
		precio = (energia * 1.50);
	}
	
	precio+=(precio*0.20);
	
	//mostrando resultado
	printf("El total a pagar es: %.2f\n",precio);
	
	return 0;
}
