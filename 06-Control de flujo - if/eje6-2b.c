/******************************************************************************
Fundamentos de programación. Control de flujo: instrucción if.
ejemplo 6-2b:	
	Crear un programa en lenguaje C, que pida al usuario una letra, luego, el
	programa indicará si la letra ingresada es una vocal (y cual es) o si es una 
	consonante; Utilice el bloque if y aritmetíca booleana.
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
	
	/*Aritmetíca booleana:
	  Es posible considerar varias operaciones booleanas y combinar sus resultados.
		- El operador booleano "or" se representa con los simbolos de barra "||"
		- El operador booleano "and" se representa con los simbolos de ampersand "&&"
	*/
	if(letra=='a' || letra=='e' || letra=='i' || letra=='o' || letra=='u' || ){
		printf("la letra ingresada es una vocal\n");
	}
	else{
		printf("la letra es consonante\n");
	}
	return 0;
}
