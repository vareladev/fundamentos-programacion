/******************************************************************************
Fundamentos de programación. Introducción a lenguaje C.
ejemplo 2.2:	
	Considere siguiente proceso repetitivo para un número entero dado: 
	Si el número es 1, el proceso termina. De lo contrario, si es par se 
	divide entre 2, y si es impar se multiplica por 3 y se le suma 1. 
	El proceso termina hasta llegar a 1. A esta sucesión se le llama conjetura
	de Collatz. Desarrolle un programa en C que calcule la conjetura de Collatz.
Autor: Erick Varela, v1.0.
*******************************************************************************/
//librerias
#include <stdio.h>

//macros
#define TRUE 1

//función principal
int main(void){
	//declaración de variables locales
	int N;
	
	//solicitando datos al usuario
	printf("Ingrese N: ");
	scanf("%d", &N);

	//validando que el número sea positivo
	if(N<=0){
		printf("Error: El digito debe ser positivo.\n");
		return 0;
	}
	
	//realizando cálculos
	printf("Conjetura de Collatz:\n")
	while(TRUE){
		printf("%d, ",N);
		if(N==1){ //si N=1 el proceso de detiene.
			break;
		}
		else{
			if(N%2==0){ //si N=par, se divide entre 2
				N/=2;
			}
			else{ //si N=impar, se multiplica por 3 y se suma 1
				N = (N*3)+1;
			}
		}
	}
	
	return 0;
}
