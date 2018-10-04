/******************************************************************************
Fundamentos de programación. Arreglos.
ejemplo 12-1:	
	Declaración y asignación de una cadena de texto.
Autor: Erick Varela, Sep 2018. v1.0.
*******************************************************************************/

#include <stdio.h>

//función principal
int main(void){
	//tipos de declaración de un arreglo
	char palabra1[]="fundamentos";
	char palabra2[]={'f','u','n','d','a','m','e','n','t','o','s','\0'}; 
	char palabra3[1024]="fundamentos";
	
	//imprimiendo
	printf("palabra1: %s\n",palabra1);
	printf("palabra2: %s\n",palabra2);
	printf("palabra3: %s\n",palabra3);
	
	//solicitando cadena desde teclado (sin incluir espacios)
	char nombre[20];
	printf("ingrese su nombre: ");
	scanf("%s",nombre);
	printf("Su nombre es: %s\n",nombre);

	//limpiando buffer
	while ( getchar() != '\n' );

	//solicitando cadena desde teclado (incluyendo espacios)
	printf("ingrese su nombre nuevamente: ");
	scanf("%[^\n]s",nombre);
	printf("Su nombre es: %s\n",nombre);
   
	return 0;
}