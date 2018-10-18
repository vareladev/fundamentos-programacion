/******************************************************************************
Fundamentos de programación. Matrices.
ejemplo 13-6:	
	Hacer un programa en lenguaje C, que solicite al usuario un nùmero N, 
	luego el programa pedirà N parejas de datos enteros para sumar,
	mostrar el resultado de cada operaciòn y guardar cada operaciòn en 
	un archivo llamado "operaciones.txt" con el siguiente formato:
		A+B=C
		D+E=F
		G+H=I
		J+K=L
Autor: Erick Varela, v1.0.
*******************************************************************************/
//librerias
#include "stdio.h"

//macros
#define TAM 5

//función principal
int main(void){
	//declaración de variables
	FILE  *archivo;
	int operaciones;
	int A, B;
	int res;
	char buffer[TAM];

	//solicitando nombre del archivo
	printf("Ingrese la cantidad de operaciones: ");
	scanf("%d",&operaciones);

	//abriendo archivo
	archivo = fopen("operaciones.txt", "a");	

	//guardando datos en un archivo
	for(int i=0; i<operaciones;i++){
		printf("Ingrese A: ");
		scanf("%d",&A);
		printf("Ingrese B: ");
		scanf("%d",&B);
		res = A + B;
		printf("El resultado es: %d\n",res);

		//escribiendo en archivo
		sprintf(buffer, "%d", A);
		fputs(buffer,archivo);
		fputc('+',archivo);
		sprintf(buffer, "%d", B);
		fputs(buffer,archivo);
		fputc('=',archivo);
		sprintf(buffer, "%d", res);
		fputs(buffer,archivo);
		fputc('\n',archivo);
		
	}

	//cerrando archivo
	fclose(archivo);
	return 0;
}