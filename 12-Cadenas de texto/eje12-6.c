/******************************************************************************
Fundamentos de programación. Arreglos.
ejemplo 12-6:	
	Hacer un programa en C, que solicite al usuario una cadena texto y dos numeros
	enteros y positivos A y B. Diseñar una función que reciba los datos ingresados
	y retorne una subcadena que inicia desde A y tiene una longitud B.
	Ejemplo: 
		cadena: "al fin y al cabo para eso tenemos la musica"
		A: 5
		B: 15
		resultado: "n y al cabo par"
Autor: Erick Varela, Sep 2018. v1.0.
*******************************************************************************/
#include <stdio.h>
#include <string.h>
#include <stdlib.h>


#define TAM 50

//prototipo de función
char *substring(char c[], int lon, int ini, int fin);

//función principal
int main(void){
	char cad[TAM];
	int lon, ini, sublon;

	printf("Ingrese cadena: ");
	scanf("%[^\n]s",cad);
	lon = strlen(cad);

	printf("inicio de subcadena: ");
	scanf("%d",&ini);
	printf("tamaño de subcadena: ");
	scanf("%d",&sublon);

	if( (sublon < 0) || (ini < 0) || ((lon - ini) < sublon)){
		printf("rangos invalidos...\n");
		return 0;
	}

	char subcad[lon];
	strcpy(subcad,substring(cad,lon,ini,sublon));

	printf("La subcadena es: %s\n",subcad);

	return 0;
}

/**
 @fn substring: Recibe una cadena de texto y calcula una subcadena.    
 @param c: cadena de texto inicial
 @param lon: longitud de la cadena de texto inicial
 @param ini: longitud de la subcadena
 @return devuelve una cadena de texto que representa la subcadena
 */
char *substring(char c[], int lon, int ini, int sublon){
	char *c2 = malloc(lon);
	int iniaux = ini;
	int i;
	for(i = 0; i<sublon;i++){
		c2[i] = c[iniaux];
		iniaux++;
	}
	c2[sublon] = '\0';
	return c2;
}