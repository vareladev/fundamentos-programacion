/******************************************************************************
Fundamentos de programación. Introducción a lenguaje C.
ejemplo 1.04:	
	Hacer un programa en lenguaje C que solicite al usuario la capacidad total 
	(en galones) de una cisterna, también, deberá solicitar cuánta agua (en galones)
	contiene actualmente la cisterna; El programa deberá calcular cuánta agua 
	hace falta para terminar de llenar la cisterna.
Autor: Erick Varela, v1.0.
*******************************************************************************/
//librerias
#include <stdio.h>

//función principal
int main(void){
    //declaración de variables 
	float capacidad;
	float contenido;
	float falta;
	
	//solicitando datos al usuario
    printf("Ingrese la capacidad de la cisterna: ");
    scanf("%f",&capacidad);
	printf("Ingrese cuantos galones tiene la cisterna actualmente: ");
    scanf("%f",&contenido);
	
	//operando
	falta = capacidad - contenido;
	
    //mostrando resultado
	printf("hacen falta %.2f galones para llenar la cisterna\n",falta);
	
    return 0;
}