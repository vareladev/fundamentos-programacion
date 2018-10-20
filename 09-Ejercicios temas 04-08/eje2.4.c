/******************************************************************************
Fundamentos de programación. Introducción a lenguaje C.
ejemplo 2.4:	
	Crear un programa que dado un número N, calcule N elementos de la 
	serie de fibonacci.
Autor: Erick Varela, v1.0.
*******************************************************************************/
//librerias
#include <stdio.h>
#include <math.h>

//macros
#define TRUE 1

//función principal
int main(void){
	//declaración de variables locales
	int N;
	int a = 0;
	int b = 1;
	int res;
	
	
	//solicitando datos al usuario
	printf("Ingrese la cantidad N: ");
	scanf("%d",&N);
	
	//validando N
	if(N<=0){
		printf("N es inválido. \n");
		return 0;
	}
	
	printf("%d, ",a);
	printf("%d, ",b);
	for(int i=0;i<(N-1);i++){
		res = a + b;
		a = b;
		b = res;
		printf("%d, ",res);
	}
	
	return 0;
}
