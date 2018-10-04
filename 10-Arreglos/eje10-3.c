/******************************************************************************
Fundamentos de programación. Arreglos.
ejemplo 10-3:	crear un programa en C, que pida al usuario N numeros, 
				se guarden en un arreglo, mostrar el valor de la suma
				de todos sus elementos.
Autor: Erick Varela, Sep 2018. v1.0.
*******************************************************************************/
#include "stdio.h"

int main(void){
	int N;
	printf("¿cuantos numeros sumará?: ");
	scanf("%d",&N);

	int numeros[N];

    printf("llenando arreglo: \n");
	int i;
	for(i=0; i<N ; i++){
		printf("numero: %d: ",i);
		scanf("%d",&numeros[i]);
	}

	//proceso
	int sumador = 0;
	for(i=0; i<N ; i++){
		sumador = sumador + numeros[i];
	}

	//imprimir salida
	printf("la suma es: %d",sumador);
	return 0;
}