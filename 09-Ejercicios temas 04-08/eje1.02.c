/******************************************************************************
Fundamentos de programación. Introducción a lenguaje C.
ejemplo 1.02:	
	Hacer un programa en C que solicite al usuario un valor que represente dólares 
	y los convierta a su equivalente en euros. 
	Asuma cambio de móneda: 1 euro equivale a 1.16 dólares estadounidense.
Autor: Erick Varela, v1.0.
*******************************************************************************/
//librerias
#include <stdio.h>

//función principal
int main(void){
    //declaración de variables 
	float euros;
	float dolares;
	
	//solicitando datos al usuario
    printf("Ingrese dólares: $");
    scanf("%f",&dolares);
    
	//convirtiendo
	euros = dolares / 1.16;
	
    //mostrando resultado
	printf("El valor en euros es: €%.2f\n",euros);
	
    return 0;
}