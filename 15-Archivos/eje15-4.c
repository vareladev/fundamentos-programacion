/******************************************************************************
Fundamentos de programación. Archivos.
ejemplo 15-4:	
	Programa en lenguaje C que pida al usuario palabras o frases para guardar
	en un archivo, el programa dejará de pedir hasta que el usuario ingrese
	"terminar"; Abrir el archivo en modo de concatenación.
Autor: Erick Varela, v1.0.
*******************************************************************************/
//librerias
#include <stdio.h>
#include <string.h>

//macros
#define TAM 100
#define TRUE 1

//prototipos de funciones
void limpiarbuffer();

//función principal
int main(void){
	//declaración de variables
	FILE  *archivo;
	char cadena[TAM];

	//abriendo archivo
	archivo = fopen("archivo15-4.txt", "a");	

	//guardando datos en un archivo
	while(TRUE){
		printf("Ingrese frase o palabra a guardar en archivo: ");
		scanf("%[^\n]s",cadena);
		limpiarbuffer();
		if(strcmp(cadena,"terminar") != 0){
			fputs(cadena,archivo);
			fputc('\n',archivo);
		}
		else{
			printf("Finalizando programa...\n");
			break;
		}
	}

	//cerrando archivo
	fclose(archivo);
	return 0;
}

void limpiarbuffer(){
	while(getchar()!='\n');
}
