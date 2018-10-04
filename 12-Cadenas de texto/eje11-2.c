/******************************************************************************
Fundamentos de programación. Arreglos.
ejemplo 11-2:	
	Funciones útiles de la libreria string.h para el tratamiento de cadenas.
Autor: Erick Varela, Sep 2018. v1.0.
*******************************************************************************/
#include <stdio.h>
#include <string.h>

//función principal
int main(void){
	char cadena1[]="Un cronopio";

	//Obteniendo la longitud de una cadena de texto. 
	int lon = strlen(cadena1);
	printf("La longitud de la cadena es: %d\n",lon);

	//copiar cadena: strcpy copia el contenido de cadena1 en cadena2:
	char cadena2[40];
	strcpy(cadena2, cadena1);
	printf("La cadena copiada es: %s\n",cadena2);

	//concatenar cadena: strcat va a concatenar "  encuentra una flor" a cadena1
	strcat(cadena2, "  encuentra una flor") ;
	printf("La cadena concatenada es: %s\n",cadena2);	

	//comparando cadenas
	/*valor de retorno, numero entero que significa: 
		 0: las cadenas son iguales.
		-N: las cadenas son diferentes y la cadena 1 es menor
		 N: las cadenas son diferentes y la cadena 2 es menor
	*/
	int resultado = strcmp(cadena1, "un cronopio");
	if(resultado == 0){
			printf("Las cadenas son iguales\n");		
	}
	if(resultado < 0){
			printf("Las cadenas NO son iguales y  cadena1 es menor\n");				
	}
	if(resultado > 0){
			printf("Las cadenas NO son iguales y  cadena2 es menor\n");				
	}
	
	//verificar si una cadena esta contenida en otra
	/*valor de retorno, puntero a caracter que significa:
		not null: 	la cadena esta contenido en cadena1 y devuelve la direccion
					de memoria donde comienza la subcadena.
		null:		la cadena no esta contenido en cadena1.
	*/	
	char *ret = strstr(cadena1,"cronopio");
	if(ret != NULL){
		printf("La cadena aparece y esta en la posicion : %p\n",ret);
	}
	else{
		printf("La subcadena no aparece\n");
	}

	return 0;
}