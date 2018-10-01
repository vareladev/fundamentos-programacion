/******************************************************************************
Fundamentos de programación. Control de flujo: instrucción if.
ejemplo 3-1a:	
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

	/*La instrucción if se utiliza para tomar decisiones según una condición booleana,
	  En este caso, se evalua si el dato ingresado es menor o mayor a 0*/
	if(numero>0){
		/*si la condición se cumple, se ejecuta todo el código que esta dentro del dominio
		  de la instrucción*/
		printf("el numero ingresado es positivo\n");	
	}
	else{
		/*el bloque "else" es opcional y se utiliza para ejecutar una sección de instrucciones 
	      si se da el caso que la condición evaluada en el "if" resulta falsa*/
		printf("el numero ingresado es negativo\n");
	}

	return 0;
}
