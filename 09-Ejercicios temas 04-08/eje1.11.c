/******************************************************************************
Fundamentos de programación. Introducción a lenguaje C.
ejemplo 1.11:	
	Crear un programa en C, que pida al usuario 3 números que representen los 
	coeficientes reales A, B y C, de una ecuación cuadrática, y calcule si ésta 
	ecuación tiene 1 raíz, dos raíces o raíz indefinida.
Autor: Erick Varela, v1.0.
*******************************************************************************/
//librerias
#include <stdio.h>


//función principal
int main(void){
	//declaración de variables locales
	float a;
	float b;
	float c;

	//solicitando coeficientes de la ecuación al usuario
	printf("Ingrese A: ");
	scanf("%f", &a);
	printf("Ingrese B: ");
	scanf("%f", &b);
	printf("Ingrese C: ");
	scanf("%f", &c);

	//Una ecuación cuadrática tiene una solición si B^2 es igual a 4*a*c
	//ejemplo x^2+0x+0
	if((b*b) == (4*a*c)){
		printf("la ecuación cuadrática tiene una solución\n");
	}

	//Una ecuación cuadrática tiene 2 soluciones reales si B^2 es mayor a 4*a*c
	//ejemplo x^2+4x+2
	if((b*b) > (4*a*c)){
		printf("la ecuación cuadrática tiene dos soluciónes reales\n");
	}

	//Una ecuación cuadrática tiene 2 soluciones complejas si B^2 es menor a 4*a*c
	//ejemplo x^2-4x+6
	if((b*b) < (4*a*c)){
		printf("la ecuación cuadrática tiene dos soluciónes compĺejas\n");
	}

	return 0;
}
