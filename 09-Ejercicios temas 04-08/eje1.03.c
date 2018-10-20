/******************************************************************************
Fundamentos de programación. Introducción a lenguaje C.
ejemplo 1.03:	
	Escriba un programa en lenguaje C, que pida al usuario un dato que represente 
	una temperatura X expresada en grados Celsius y calcule el equivalente 
	en grados Fahrenheit.
Autor: Erick Varela, v1.0.
*******************************************************************************/
//librerias
#include <stdio.h>

//función principal
int main(void){
    //declaración de variables 
	float cel;
	float fah;
	
	//solicitando datos al usuario
    printf("Ingrese temperatura: ");
    scanf("%f",&cel);
    
	//convirtiendo
	fah = ((9*cel)/5)+32;
	
    //mostrando resultado
	printf("El valor equivalente en grados Fahrenheit es: %.2f\n",fah);
	
    return 0;
}