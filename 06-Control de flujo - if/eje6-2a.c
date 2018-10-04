/******************************************************************************
Fundamentos de programación. Control de flujo: instrucción if.
ejemplo 6-2a:	
	Crear un programa en lenguaje C, que pida al usuario una letra, luego, el
	programa indicará si la letra ingresada es una vocal (y cual es) o si es una 
	consonante; Utilice el bloque "else if".
Autor: Erick Varela, Ago 2018. v1.0.
*******************************************************************************/
//librerias
#include "stdio.h"

//función principal
int main(void){
	//declaración de variables
	char letra;
	
	//asignación de variables
	printf("ingrese una caracter: ");
	scanf("%c",&letra);
	
	//proceso
	if(letra == 'a'){
		printf("la letra ingresada es una vocal\n");
	}
	else if(letra == 'e'){
		printf("la letra ingresada es una vocal\n");
	}
	else if(letra == 'i'){
		printf("la letra ingresada es una vocal\n");
	}
	else if(letra == 'o'){
		printf("la letra ingresada es una vocal\n");
	}
	else if(letra == 'u'){
		printf("la letra ingresada es una vocal\n");
	}
	//falta considerar las vocales mayusculas
	//pues no tienen el mismo codigo ascii
	else{
		printf("la letra ingresada es una consonante\n");		
	}
	return 0;
}
