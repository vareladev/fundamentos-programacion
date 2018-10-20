/******************************************************************************
Fundamentos de programación. Archivos.
ejemplo 15-2:	
	Programa en lenguaje C que abra un archivo y lea su contenido linea por linea
	para mostrarlo en la salida estándar.
Autor: Erick Varela, v1.0.
*******************************************************************************/
//librerias
#include <stdio.h>

//macros
#define TAM 100

//función principal
int main(void){
	//declaración de variables
	FILE  *archivo;
	char cadena[TAM];
	
	//abriendo archivo
	archivo = fopen("archivo.txt", "r");

	//leyendo contenido del archivo
	if(archivo != NULL){
		while(1){
			if(fgets(cadena, TAM, archivo)==NULL){
				break;
			}
			else{
				printf("%s",cadena);
			}
		}
	}

	//cerrando archivo
	fclose(archivo);
	
	return 0;
}