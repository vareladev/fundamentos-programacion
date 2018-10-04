/******************************************************************************
Fundamentos de programación. Control de flujo: instrucción for.
ejemplo 4-1a:	
	Mostrar los numeros del 1 al 10 utilizando la instrucción iterativa for.
Autor: Erick Varela, Ago 2018. v1.0.
*******************************************************************************/
//librerias
#include "stdio.h"

//función principal
int main(void){
	/*for utiliza 3 parámetros separados por punto y coma (;) el primero asigna un valor
	  inicial a una variable, el segundo parámetro es una condición que si se cummple,
	  hará que la instrucción for se deje de ejecutar y el tercer parámetro es un cambio 
	  al valor de la variable inicializada, este cambio se efectuará por cada iteración
	*/
	int w;
	for(w=1;w<=10;w++){
		printf("%d\n",w);
	}

	return 0;
}
