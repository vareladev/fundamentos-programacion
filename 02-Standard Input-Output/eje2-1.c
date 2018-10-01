/******************************************************************************
Fundamentos de programación. Standard Input-Output.
ejemplo 2-1:	
	Declarando e inicializando los tipos de datos primitivos en lenguaje C.
Autor: Erick Varela, Ago 2018. v1.0.
*******************************************************************************/
//librerias
#include <stdio.h>

//función principal
int main(void){
	//soy un comentario
	//esta linea sera ignorada por el compilador

	/*
		soy un comentario
		de varias lineas
		y no hay que poner // en cada momento
	*/

	/*tipos de datos primitivos:
		int: tipo de dato entero, utiliza 4 bytes en memoria
		float: tipo de dato decimal, utiliza 4 bytes en memoria
		char: tipo de dato caracter, utiliza 1 byte en memoria
		double: tipo de dato decimal, utiliza 8 bytes en memoria
	*/
	int variableA;
	float variableB;
	char variableC;
	double variableD;
	
	//asignando datos a la memoria reservada
	variableA = 10;
	variableB = 3.1416;
	variableC = 'W';
	variableD = 3.141612121212;

	//mostrando el valor contenido en las variables
	/*En lenguaje C para imprimir el valor de una variable, se utilizan los siguientes
	  identificadores:
			%d para enteros
			%f para flotantes
			%c para caracteres
			%lf para double
			%s para cadenas de texto
			%p para direcciones de memoria*/
	printf("El valor de variable A es: %d\n",variableA);
	printf("El valor de variable B es: %f\n",variableB);
	printf("El valor de variable C es: %c\n",variableC);
	printf("El valor de variable D es: %lf\n",variableD);
	
	//controlando decimales de float y double
	printf("El valor de variable D es: %.8lf\n",variableD);
	printf("El valor de variable B es: %.2f\n",variableB);

	//declarando y asignando una variable
	int variableF = 35;

	return 0;
}




