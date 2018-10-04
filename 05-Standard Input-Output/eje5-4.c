/******************************************************************************
Fundamentos de programación. Standard Input-Output.
ejemplo 5-4:	
	Operaciones básicas.
Autor: Erick Varela, Ago 2018. v1.0.
*******************************************************************************/
//librerias
#include "stdio.h"

//función principal
int main(void){
	int A = 4;
	int B = 3;

	/*En lenguaje C se pueden efectuar las siguientes operaciones básicas: 
		- Suma (+).
		- resta (-).
		- Multiplicación (*).
		- División (/).
		- Módulo (%).
	*/
	int suma = A+B;
	int resta = A-B;
	float div = A/B;

	printf("la suma A+B=%d\n",suma);
	printf("la resta A-B=%d\n",resta);
	//en lenguaje C es posible efectuar operaciones como parámetros en funciones
	//lo que se envia es el resultado de la operación
	printf("el producto A*B=%d\n",A*B);
	printf("la división A/B=%f\n",div);
	printf("el módulo AmodB=%d\n",A%B);

	return 0;
}
