/******************************************************************************
Fundamentos de programación. Arreglos. 
ejemplo 9-2: 	crear y llenar arreglo con valores ingresados por el 
				usuario, luego mostrar cada uno de los valores.
Autor: Erick Varela, Sep 2018. v1.0.
*******************************************************************************/

#include "stdio.h"

int main(void){
	int indice;
	printf("¿cuantas edades ingresara?: ");
	scanf("%d",&indice);

	int edades[indice];

	//llenando arreglo
	int i;
	for(i=0 ; i < indice ; i++){
		printf("ingrese edad: ");
		scanf("%d",&edades[i]);
	}

	//mostrando informacion del arreglo
	printf("Lista de edades: \n");
	for(i=0 ; i < indice ; i++){
		printf("edad: %d\n",edades[i]);
	}
    return 0;
}