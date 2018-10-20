/******************************************************************************
Fundamentos de programación. Introducción a lenguaje C.
ejemplo 2.3:	
	Cree un programa en C que dada la cantidad de dinero S, el interés I y el 
	número en años N que han pasado desde que el cliente puso su dinero a plazo 
	fijo en intervalos de un año, calcule y muestre el saldo de la cuenta, 
	además, si la cuenta fue cerrada se deberá indicar.
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
	float s;
	float i;
	int t;
	float res;
	
	//solicitando datos al usuario
	printf("Ingrese la cantidad S: $");
	scanf("%f", &s);
	printf("Ingrese interés I: ");
	scanf("%f", &i);
	printf("Ingrese el tiempo en años: ");
	scanf("%d", &t);

	//validando tiempo
	if(t>=50){
		printf("La cuenta ha sido cerrada. \n");
		return 0;
	}
	
	i = i / 100;
	for(int j=0;j<t;j++){
		res = s * pow((1 + i),j+1);
		printf("\tAño %d: $%.2f\n",j+1,res);
	}
	return 0;
}
