/******************************************************************************
Fundamentos de programación. Control de flujo: instrucción for.
ejemplo 4-1b:	
	Mostrar los numeros del 1 al 10 utilizando la instrucción iterativa while.
Autor: Erick Varela, Ago 2018. v1.0.
*******************************************************************************/
//librerias
#include "stdio.h"

//función principal
int main(void){
	int contador=1;
	/*la instrucción while necesita un parámetro: una operación booleana, que al cumplirse
	  realiza una iteración del código escrito en su dominio, y de ser falsa, la instrucción
	  iterativa while se deja de ejecutar. NOTA: si la condición utilizada es falsa de entrada,
	  la instrucción while no se ejecuta nunca */
	while(contador<=10){
		printf("%d\n",contador);
		contador++;
	}

	return 0;
}
