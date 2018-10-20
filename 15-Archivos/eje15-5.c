/******************************************************************************
Fundamentos de programación. Archivos.
ejemplo 15-5:	
	Hacer un programa en lenguaje C, que pida al usuario el nombre de un archivo 
	de texto, lo abra, y cuente cuantas vocales tiene.
Autor: Erick Varela, v1.0.
*******************************************************************************/
//librerias
#include <stdio.h>

//macros
#define TAM 50
#define TRUE 1

//función principal
int main(void){
	//declaración de variables
	FILE  *archivo;
	char nombre[TAM];
	int  contadorVocales = 0;
	char car;
	
	//solicitando nombre del archivo
	printf("archivo a abrir: ");
	scanf("%s",nombre);

	//abriendo archivo
	archivo = fopen(nombre, "r");

	//leyendo contenido del archivo
	if(archivo != NULL){
		while(TRUE){
			car = fgetc (archivo);
			if(car==EOF){
				break;
			}
			else{
				if(car=='a' || car=='e' || car=='i' || car=='o' || car=='u'){
					contadorVocales++;
				}
				if(car=='A' || car=='E' || car=='I' || car=='O' || car=='U'){
					contadorVocales++;
				}
			}
		}
	}

	printf("El archivo contiene %d vocales.\n",contadorVocales);

	//cerrando archivo
	fclose(archivo);
	return 0;
}