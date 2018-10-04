/******************************************************************************
Fundamentos de programación. Control de flujo: instrucción for.
ejemplo 7-2:	
	Crear un programa en lenguaje C que pida al usuario 2 numeros enteros y positivos,
	luego, el programa mostrará todos los números pares que existen en el rango dado.
Autor: Erick Varela, Ago 2018. v1.0.
*******************************************************************************/
//librerias
#include "stdio.h"

//función principal
int main(void){
	int limiteInf;
	int limiteSup;

	printf("Ingrese limite inferior: ");
	scanf("%d",&limiteInf);
	printf("Ingrese limite superior: ");
	scanf("%d",&limiteSup);

	//validando datos de entrada
	if((limiteInf < 0) ||  (limiteSup < 0) || (limiteInf > limiteSup)){
		printf("ERROR: el primer numero debe ser menor\n");
		return 0;
	}
	
	int x;
	for(x=limiteInf;x<=limiteSup;x++){
		if(x%2==0){
			printf("%d\n",x);
		}
	}
	
	return 0;
}
