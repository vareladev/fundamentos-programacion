/******************************************************************************
Fundamentos de programación. Arreglos.
ejemplo 10-4:	crear un programa en C, que pida al usuario N numeros, 
				y luego determinar cuantos son pares; Validar que los datos
				ingresados por el usuario deben ser menores o iguales a 100.
Autor: Erick Varela, Sep 2018. v1.0.
*******************************************************************************/
#include "stdio.h"

int main(void){
	int N;

	printf("¿cuantos numeros ingresará?: ");
	scanf("%d",&N);

	//validando N
	if(N < 0 || N > 100){
		printf("Dato no válido!");
		return 0;
	}
    //creando arreglo
	int arreglo[N];
	//llenando valores
	int i;
	for(i=0; i<N; i++){
		printf("numero: %d: ",i);
		scanf("%d",&arreglo[i]);
	}

	//busqueda y conteo
	int pares = 0;
	for(i=0; i<N; i++){
		if( arreglo[i]%2 == 0 ){
			pares++;
		}
	}

	//mostrando resultado
		printf("la cantidad de pares es: %d",pares);
	return 0;
}