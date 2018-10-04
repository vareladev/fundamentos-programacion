/******************************************************************************
Fundamentos de programación. Control de flujo: instrucción for.
ejemplo 4-1c:	
	Mostrar los numeros del 1 al 10 utilizando la instrucción iterativa do-while.
Autor: Erick Varela, Ago 2018. v1.0.
*******************************************************************************/
//librerias
#include "stdio.h"

//función principal
int main(void){
	int contador=1;
	/*la instrucción do-while necesita un parámetro: una operación booleana, que al cumplirse
	  realiza una iteración del código escrito en su dominio, y de ser falsa, la instrucción
	  iterativa do-while se deja de ejecutar. NOTA: si la condición utilizada es falsa de entrada,
	  la instrucción do-while se ejecuta al menos una vez, debido a su estructura*/
	do{
		printf("%d\n",contador);
		contador = contador + 1;
	}while(contador <= 10);


	return 0;
}
