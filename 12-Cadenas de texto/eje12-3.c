/******************************************************************************
Fundamentos de programación. Arreglos.
ejemplo 12-3:	
	Hacer un programa en C, que solicite al usuario una cadena texto, el programa
	sumará las vocales de la frase ingresada y mostrará el resultado al usuario.
Autor: Erick Varela, Sep 2018. v1.0.
*******************************************************************************/
#include <stdio.h>
#include <string.h>

#define TAM 50

//función principal
int main(void){
	char cad[TAM];
	printf("Ingrese cadena: ");
	scanf("%s",cad);

	int lon = strlen(cad);
	int contadorVocales = 0;

	for(int i=0;i<lon;i++){
		if(cad[i]=='a' || cad[i]=='e' || cad[i]=='i' || cad[i]=='o' || cad[i]=='u'){
			contadorVocales++;
		}
		if(cad[i]=='A' || cad[i]=='B' || cad[i]=='I' || cad[i]=='O' || cad[i]=='U'){
			contadorVocales++;
		}
	}
	printf("la cantidad de vocales contenidas en la palabra son: %d\n",contadorVocales);
	return 0;
}