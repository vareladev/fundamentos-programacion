/******************************************************************************
Fundamentos de programación. Standard Input-Output.
ejemplo 2-2:	
	Solicitando datos desde el teclado.
Autor: Erick Varela, Ago 2018. v1.0.
*******************************************************************************/
//librerias
#include <stdio.h>

//función principal
int main(void){
	//declarando variable de tipo entero
	int numeroa;

	printf("ingrese un numero: ");
	/*Para solicitar datos desde el teclado se utiliza la función scanf y para funcionar
	  necesita 2 parámetros: 
		- El tipo de dato que se espera.
		- La variable donde se espera guardar el dato ingresado precedido por el caracter
		  ampersand (&). Este carácter sirve para hacer referencia a la dirección de memoria
		  donde se guarda el dato, en un tema próximo se detallará sobre esto.
	*/
	scanf("%d",&numeroa);

	printf("usted ha ingresado: %d\n",numeroa);
	return 0;
}
