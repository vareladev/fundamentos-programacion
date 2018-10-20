/******************************************************************************
Fundamentos de programación. Introducción a lenguaje C.
ejemplo 1.12:	
	Hacer un programa en C que solicite al usuario el valor de dos resistencias 
	eléctricas (valor dado en ohms), la tarea del programa es calcular la 
	resistencia equivalente. 
Autor: Erick Varela, v1.0.
*******************************************************************************/
//librerias
#include <stdio.h>

//función principal
int main(void){
	//declaración de variables locales
	float R1;
	float R2;
	float RE;

	//solicitando resistencia al usuario
	printf("Ingrese R1: ");
	scanf("%f", &R1);
	printf("Ingrese R2: ");
	scanf("%f", &R2);

	//realizando cálculos
	RE = (R1*R2) / (R1+R2);

	//mostrando resultado
	printf("La resistencia equivalente es: %.2f ohms\n",RE);
	return 0;
}
