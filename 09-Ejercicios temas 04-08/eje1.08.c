/******************************************************************************
Fundamentos de programación. Introducción a lenguaje C.
ejemplo 1.08:	
	Escribir un programa en lenguaje C que pida por el teclado el radio de un 
	circunferencia, y calcule el área de esta, si el radio ingresado es negativo, 
	mostrará el mensaje: "ERROR: El radio debe ser mayor que cero."
Autor: Erick Varela, v1.0.
*******************************************************************************/
//librerias
#include <stdio.h>

//Macros
#define PI 3.1416

//función principal
int main(void){
	//declaración de variables locales
	float radio;
	float area;

	//solicitando datos
	printf("Ingrese radio: ");
	scanf("%f", &radio);

	//calculando área
	if(radio > 0){
		area = PI * radio * radio;		
		printf("El área de la circunferencia es: %f\n", area);
	}
	else{
		printf("ERROR: El radio debe ser mayor que cero.\n");	
	}

	return 0;
}
