/******************************************************************************
Fundamentos de programación. Arreglos.
ejemplo 12-5:	
	Hacer un programa en C, que solicite al usuario una cadena texto, y se 
	verifique si la palabra es palindroma; Una palabra palindroma es aquella 
	que se lee igual de izquierda a derecha y de izquierda a derecha:
		-reconocer
		-sometemos
		-radar
Autor: Erick Varela, Sep 2018. v1.0.
*******************************************************************************/
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

#define TAM 50

//prototipo de función
char *invertir(char c[], int lon);

//función principal
int main(void){
	char cad[TAM];
	printf("Ingrese cadena: ");
	scanf("%s",cad);

	int len = strlen(cad);
	char reversecad[len];
	strcpy(reversecad,invertir(cad,len));

	int palindroma = strcmp(cad,reversecad);
	if(palindroma == 0){
		printf("La cadena es palindroma\n");
	}
	else{
		printf("La cadena no es palindroma\n");
	}
	return 0;
}

/**
 @fn invertir: Recibe una cadena de texto y la invierte.    
 @param c: cadena de texto a invertir
 @param lon: longitud de la cadena de texto a invertir
 @return devuelve una cadena de texto 
 */
char *invertir(char c[], int lon){
	char *c2 = malloc(lon);
	int i,j;
	for(i = 0,j = lon-1; i<lon;i++,j--){
		c2[j] = c[i];
	}
	c2[lon] = '\0';
	printf("la cadena invertida es: %s\n",c2);
	return c2;
}