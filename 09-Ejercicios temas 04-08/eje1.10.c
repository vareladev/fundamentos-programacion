/******************************************************************************
Fundamentos de programación. Introducción a lenguaje C.
ejemplo 1.10:	
	En un videoclub se ofrece la promoción de llevarse tres películas por el 
	precio de las dos más baratas. Haga un programa que, dados los tres precios 
	de las películas, determine la cantidad a pagar. 
Autor: Erick Varela, v1.0.
*******************************************************************************/
//librerias
#include <stdio.h>

//función principal
int main(void){
	//declaración de variables locales
	float peli1,peli2,peli3;
	float menor1, menor2;
	float total;

	//solicitando precios de peliculas al usuario
	printf("Ingrese precio de la pelicula 1: ");
	scanf("%f", &peli1);
	printf("Ingrese precio de la pelicula 2: ");
	scanf("%f", &peli2);
	printf("Ingrese precio de la pelicula 3: ");
	scanf("%f", &peli3);

	//buscando cuales son las peliculas mas baratas
	if((peli1 > peli2) && (peli1 > peli3)){
		menor1=peli3;
		menor2=peli2;
	}

	if((peli2 > peli1) && (peli2 > peli3)){
		menor1=peli3;
		menor2=peli1;
	}

	if((peli3 > peli1) && (peli3 > peli2)){
		menor1=peli2;
		menor2=peli1;
	}

	//Mostrando el resultado
	total = menor1 + menor2;
	printf("Total a pagar: $%.2f\n",total);
	return 0;
}
