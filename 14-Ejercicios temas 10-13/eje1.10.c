/******************************************************************************
Fundamentos de programación. Ejercicios arreglos y matrices.
ejemplo 1.9:	
	Crear un programa en lenguaje C que pida al usuario una cadena de texto, el programa
	posteriormente mostrará cuantos caracteres son numéricos, cuantos son alfabéticos y
	cuantos caracteres son especiales.
Autor: Erick Varela, v1.0.
*******************************************************************************/
//librerias
#include <stdio.h>
#include <string.h>

//macros
#define TAM 100

//función principal
int main(void){
	//variables locales
	char cadena[TAM];
	//contadores de tipo de caracter
	int numeros = 0;
	int alfabeticos = 0;
	int especiales = 0;
    
    //solicitando cadena de texto al usuario
    printf("Ingrese una palabra o frase: ");
    scanf("%[^\n]s",cadena);
	
	//recorriendo cada elemento
	int lon = strlen(cadena);
	for(int i = 0; i<lon; i++){
		if(cadena[i] > 48 && cadena[i] < 57){
			numeros++;
		}
		else if((cadena[i] >= 65 && cadena[i] <= 90) || (cadena[i] >= 97 && cadena[i] <= 122)){
			alfabeticos++;
		}
		else{
			especiales++;
		}
	}
	
	printf("La cadena tiene %d carácteres numéricos, %d carácteres alfabéticos y %d carácteres especiales.\n",numeros,alfabeticos,especiales);
	return 0;
}
