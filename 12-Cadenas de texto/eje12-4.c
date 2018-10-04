/******************************************************************************
Fundamentos de programación. Arreglos.
ejemplo 12-4:	
	Hacer un programa en C, que invierta una cadena ingresada por el usuario.
Autor: Erick Varela, Sep 2018. v1.0.
*******************************************************************************/
#include <stdio.h>
#include <string.h>

#define TAM 50

//prototipo de función
void invertir(char c[]);

//función principal
int main(void){
	char cad[TAM];
	printf("Ingrese cadena: ");
	scanf("%s",cad);

	invertir(cad);
	return 0;
}

/**
 @fn invertir: Recibe una cadena de texto y la invierte.    
 @param c: cadena de texto a invertir
 @param lon: longitud de la cadena de texto a invertir
 @return devuelve una cadena de texto 
 */
void invertir(char c[]){
	int lon = strlen(c);
	char c2[lon];
	int i,j;
	for(i = 0,j = lon-1; i<lon;i++,j--){
		c2[j] = c[i];
	}
	printf("la cadena invertida es: %s\n",c2);
	return;
}