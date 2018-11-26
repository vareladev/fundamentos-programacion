/******************************************************************************
Fundamentos de programación. Archivos.
ejemplo 15-1:	
	Programa en lenguaje C que abra un archivo y lea su contenido caráter por
	carácter para mostrarlo en la salida estándar.
Autor: Erick Varela, v1.0.
*******************************************************************************/
//librerias
#include <stdio.h>

//macros
#define TRUE 1

//función principal
int main(void){
	//declaración de variables
	FILE  *archivo;
	char caracter;
	
	//abriendo archivo
	archivo = fopen("Lacrimosa.txt", "r");

	//leyendo contenido del archivo
	if(archivo != NULL){
		while(TRUE){
			caracter = fgetc (archivo);
			if(caracter==EOF){
				break;
			}
			else{
				printf("%c",caracter);
			}
		}
	}

	//cerrando archivo
	fclose(archivo);
	return 0;
}
